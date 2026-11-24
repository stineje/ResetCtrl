#!/usr/bin/env bash
# Test runner for the CDC reset controller (rtl/ResetCtrl.sv).
#
#   ./run_tests.sh                 unit + system + random tests (~10 s)
#   ./run_tests.sh --mutants       also check that every planted bug is caught (~1 min)
#   SIM=verilator ./run_tests.sh   use Verilator instead of Icarus (slow to compile)
#   SIM=questa ./run_tests.sh      use Siemens Questa (vlib/vlog/vsim on PATH)
#   SEEDS=50 EVENTS=4000 ./run_tests.sh   more random coverage
#
# Exit status is 0 only if every test passes (and, with --mutants, every
# mutant is caught).

set -u
cd "$(dirname "$0")"

SIM=${SIM:-icarus}
SEEDS=${SEEDS:-10}
EVENTS=${EVENTS:-2000}
RTL=${RTL:-rtl/ResetCtrl.sv}
BUILD=build
MUTANTS=0
[ "${1:-}" = "--mutants" ] && MUTANTS=1

if [ "$SIM" = questa ] && ! command -v vsim >/dev/null; then
  echo "SIM=questa but vsim is not on PATH (source your Questa setup first)"; exit 2
fi
if [ "$SIM" = icarus ] && ! command -v iverilog >/dev/null; then SIM=verilator; fi
if [ "$SIM" = verilator ] && ! command -v verilator >/dev/null; then
  echo "Need iverilog (12+) or verilator (5.x, with --timing)"; exit 2
fi
mkdir -p "$BUILD"

# build <name> <top> <rtl> : compile a testbench, print nothing on success
build() {
  local name=$1 top=$2 rtl=$3
  if [ "$SIM" = questa ]; then
    rm -rf "$BUILD/$name"
    vlib "$BUILD/$name" > "$BUILD/$name.log" 2>&1 &&
    vlog -sv -quiet -timescale 1ns/1ps -work "$BUILD/$name" "$rtl" "tb/$top.sv" \
      >> "$BUILD/$name.log" 2>&1
  elif [ "$SIM" = verilator ]; then
    rm -rf "$BUILD/$name"
    verilator --binary --timing -Wno-fatal -Wno-lint -Wno-style \
      --top-module "$top" -Mdir "$BUILD/$name" -o sim "$rtl" "tb/$top.sv" \
      > "$BUILD/$name.log" 2>&1
  else
    iverilog -g2012 -o "$BUILD/$name.vvp" "$rtl" "tb/$top.sv" > "$BUILD/$name.log" 2>&1
  fi
}

# sim <name> [plusargs...] : run a built testbench, print its PASS/FAIL line
sim() {
  local name=$1; shift
  if [ "$SIM" = questa ]; then
    # the library is named after the test; the top module is tb_<suffix>
    vsim -c -quiet -lib "$BUILD/$name" "tb_${name##*_tb_}" -onfinish exit -do "run -all" "$@"
  elif [ "$SIM" = verilator ]; then "$BUILD/$name/sim" "$@"
  else vvp -n "$BUILD/$name.vvp" "$@"; fi \
    2>&1 | sed 's/^# //' | grep -E "^(PASS|FAIL)|^  FAIL" | head -4
}

# run_suite <rtl> <tag> [quick] : run everything, echo number of failures
run_suite() {
  local rtl=$1 tag=$2 quick=${3:-0} fails=0 out
  for t in tb_Sync2 tb_Echo tb_ResetFSM tb_system; do
    if ! build "${tag}_$t" "$t" "$rtl"; then
      echo "  BUILD FAILED: $t (see $BUILD/${tag}_$t.log)"; fails=$((fails+1)); continue
    fi
  done
  for t in tb_Sync2 tb_Echo tb_ResetFSM; do
    [ -e "$BUILD/${tag}_$t.log" ] || continue
    out=$(sim "${tag}_$t"); [ "$quick" = 1 ] || echo "  $out"
    echo "$out" | grep -q "^PASS" || fails=$((fails+1))
  done
  # directed system tests at three clock ratios
  for clk in "+ha=5000 +hb=3650" "+ha=18500 +hb=1825" "+ha=650 +hb=6550"; do
    out=$(sim "${tag}_tb_system" +test=all $clk); [ "$quick" = 1 ] || echo "  $out [$clk]"
    echo "$out" | grep -q "^PASS" || fails=$((fails+1))
  done
  # random tests
  local nseeds=$SEEDS; [ "$quick" = 1 ] && nseeds=3
  local rfail=0
  for s in $(seq 1 "$nseeds"); do
    for clk in "+ha=5000 +hb=3650" "+ha=18500 +hb=1825"; do
      out=$(sim "${tag}_tb_system" +test=random +seed=$s +events=$EVENTS $clk)
      if ! echo "$out" | grep -q "^PASS"; then
        rfail=$((rfail+1)); [ "$quick" = 1 ] || echo "  $out [seed $s $clk]"
      fi
    done
  done
  [ "$quick" = 1 ] || echo "  random: $((nseeds*2 - rfail))/$((nseeds*2)) runs passed"
  fails=$((fails+rfail))
  return $fails
}

echo "== Simulator: $SIM"
echo "== Tests on $RTL"
run_suite "$RTL" main 0
main_fails=$?

mut_missed=0
if [ $MUTANTS = 1 ]; then
  echo "== Mutation tests (each planted bug must make some test fail)"
  # name | sed expression applied to the RTL
  mutants=(
    "fsm_isolate_ignores_echo|s/if (Echo == ISOLATE \&\& IsoAck)/if (IsoAck)/"
    "fsm_clear_ignores_ack|s/if (Echo == CLEAR \&\& ClrAck)/if (Echo == CLEAR)/"
    "fsm_idle_drops_isolate|s/Isolate   = (Echo != IDLE);/Isolate   = 1'b0;/"
    "fsm_reset_to_idle|s/state <= ISOLATE;/state <= IDLE;/"
    "fsm_start_while_busy|s/if (Start \&\& Echo == IDLE)/if (Start)/"
    "echo_before_isolate_ack|s/Done    = IsoAck;/Done    = 1'b1;/"
    "echo_before_clear_ack|s/Done    = ClrAck;/Done    = 1'b1;/"
    "echo_no_clear|0,/Clear   = 1'b1;/s//Clear   = 1'b0;/"
    "sync_no_filter|s/if (s2 == prev)/if (1'b1)/"
    "sync_one_flop|s/s2   <= s1;/s2   <= In;/"
    "top_ignores_echo_isolate|s/Isolate = FsmIsolate | EchoIsolate;/Isolate = FsmIsolate;/"
    "not_gray_coded|s/CLEAR      = 2'b11,/CLEAR      = 2'b10,/;s/POST_CLEAR = 2'b10/POST_CLEAR = 2'b11/"
  )
  mkdir -p "$BUILD/mutants"
  for m in "${mutants[@]}"; do
    name=${m%%|*}; expr=${m#*|}
    mf="$BUILD/mutants/$name.sv"
    sed "$expr" "$RTL" > "$mf"
    if cmp -s "$mf" "$RTL"; then
      echo "  $name: MUTATION DID NOT APPLY (update the sed pattern)"; mut_missed=$((mut_missed+1)); continue
    fi
    run_suite "$mf" "m_$name" 1
    if [ $? -gt 0 ]; then echo "  $name: caught"
    else echo "  $name: NOT CAUGHT"; mut_missed=$((mut_missed+1)); fi
  done
fi

echo "=="
if [ $main_fails -eq 0 ] && [ $mut_missed -eq 0 ]; then
  echo "ALL PASSED"; exit 0
else
  echo "FAILURES: $main_fails test failure(s), $mut_missed mutant(s) not caught"; exit 1
fi
