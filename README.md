# ResetCtrl: a simple reset/clear controller for clock domain crossings

`ResetCtrl` lets either side of a clock domain crossing (CDC) be reset or
cleared on its own, at any time, without corrupting the other side. It walks
both sides through the same four-phase clear sequence as the PULP
`common_cells` `cdc_reset_ctrlr`, but with a 4-state FSM and no handshake
CDCs, written in plain classroom-style SystemVerilog.

```
rtl/ResetCtrl.sv        the design (four small modules)
tb/tb_Sync2.sv          unit test: synchronizer
tb/tb_Echo.sv           unit test: echo (receiver)
tb/tb_ResetFSM.sv       unit test: clear-sequence FSM
tb/tb_system.sv         system test: two halves on different clocks
run_tests.sh            runs every test (Icarus, Verilator or Questa)
```

## The problem

A CDC (an async FIFO, a 2-phase handshake) keeps state on both sides of the
clock boundary. If one side is reset while a transfer is in flight, the two
halves disagree: the other side may see a spurious transfer, lose one, or
hang. Resetting both sides together fixes this, but often one side must be
reset or cleared alone (a watchdog, a power island, a debug reset).

The safe procedure is to stop traffic on **both** sides, clear **both**
sides, then let traffic resume:

| Phase | Code | Each side's CDC |
|---|---|---|
| IDLE | `00` | normal operation |
| ISOLATE | `01` | stop all traffic (`Isolate = 1`) and acknowledge |
| CLEAR | `11` | reset internal state (`Isolate = 1`, `Clear = 1`) and acknowledge |
| POST_CLEAR | `10` | stop clearing, stay isolated |
| back to IDLE | `00` | resume traffic |

## How it works

Each side has one `ResetCtrlHalf` with two jobs:

- **Initiator (`ResetFSM`).** When `Start` is pulsed or the side is reset,
  it steps through the phases. Its state register is sent to the other side
  as `PhaseOut`, and it moves to the next phase only when the other side
  **echoes** the current phase back and, for ISOLATE and CLEAR, its own CDC
  has acknowledged too.
- **Receiver (`Echo`).** It follows the phase arriving from the other side,
  drives its own CDC accordingly, and copies the phase to `EchoOut` once its
  CDC has acknowledged it.

The phase codes are Gray-coded, so each step changes one bit and a plain
synchronizer (`Sync2`) can carry them safely. Because the wires carry the
phase itself rather than toggles, a reset can never create a fake transfer:
the other side just sees a new phase value and follows it.

A clear started on side A runs like this:

```
A: ISOLATE ──────> B isolates, acks ──> B echoes ISOLATE
A: CLEAR   ──────> B clears, acks   ──> B echoes CLEAR
A: POST_CLEAR ───> B stops clearing ──> B echoes POST_CLEAR
A: IDLE    ──────> B resumes        ──> B echoes IDLE ──> A resumes
```

The initiator's state machine:

```
         Start & Echo=IDLE                Echo=ISOLATE & IsoAck
  IDLE ─────────────────────> ISOLATE ─────────────────────────> CLEAR
  (00)                         (01)  <── reset                    (11)
   ^                                                               │
   │        Echo=POST_CLEAR                   Echo=CLEAR & ClrAck  │
   └──────────────────────── POST_CLEAR <──────────────────────────┘
                                (10)
```

In IDLE the initiator keeps `Isolate` high until the echo is back to IDLE,
so neither side resumes before the other. Each side's final `Isolate` and
`Clear` are the OR of its initiator and receiver, which keeps clears started
from both sides at once safe.

## Interface (`ResetCtrlHalf`)

| Port | Dir | Width | Description |
|---|---|---|---|
| `clock` | in | 1 | this side's clock |
| `reset_b` | in | 1 | active-low reset: asserted asynchronously, released synchronously |
| `Start` | in | 1 | pulse to request a clear sequence (ignored while one is running) |
| `Isolate` | out | 1 | to the local CDC: stop all traffic |
| `IsoAck` | in | 1 | from the local CDC: traffic has stopped |
| `Clear` | out | 1 | to the local CDC: reset internal state |
| `ClrAck` | in | 1 | from the local CDC: state is cleared |
| `PhaseOut` | out | 2 | to the other side's `PhaseIn` |
| `EchoOut` | out | 2 | to the other side's `EchoIn` |
| `PhaseIn` | in | 2 | from the other side's `PhaseOut` |
| `EchoIn` | in | 2 | from the other side's `EchoOut` |

## Using it

```systemverilog
logic [1:0] phA, ecA, phB, ecB;

ResetCtrlHalf ctrlA (.Isolate(isoA), .Clear(clrA), .PhaseOut(phA), .EchoOut(ecA),
                     .reset_b(rstA_b), .clock(clkA), .Start(startA),
                     .IsoAck(isoAckA), .ClrAck(clrAckA), .PhaseIn(phB), .EchoIn(ecB));

ResetCtrlHalf ctrlB (.Isolate(isoB), .Clear(clrB), .PhaseOut(phB), .EchoOut(ecB),
                     .reset_b(rstB_b), .clock(clkB), .Start(startB),
                     .IsoAck(isoAckB), .ClrAck(clrAckB), .PhaseIn(phA), .EchoIn(ecA));
```

Requirements:

- **Reset**: each `reset_b` comes from a reset synchronizer in its own domain
  (asynchronous assert, synchronous release).
- **Acknowledges** are levels: `IsoAck` stays high while `Isolate` is held,
  and `ClrAck` while `Clear` is held. If the CDC needs no time, tie
  `IsoAck = Isolate` and `ClrAck = Clear`.
- **Both clocks running**: if one domain's clock stops, a sequence waits
  (safely isolated) until it returns.
- **Timing constraints**: `PhaseOut` and `EchoOut` come straight from flops.
  Constrain the skew between the two bits of each bus (`set_max_delay` or
  `set_max_skew`, as for Gray FIFO pointers) and waive the multi-bit CDC
  lint check, citing Gray coding plus the stability filter in `Sync2`.
- **Synchronizer cells**: replace the two flops in `Sync2` with your
  technology's synchronizer cell for silicon.

Latency: each phase takes one round trip, about 2 × (4 cycles of the
receiving clock), plus the CDC's acknowledge time.

## Verification

Every testbench checks itself and prints one `PASS ...` or `FAIL ...` line.

```
./run_tests.sh                       # everything, ~10 s with Icarus
./run_tests.sh --mutants             # also prove the tests catch bugs, ~1 min
SEEDS=50 EVENTS=4000 ./run_tests.sh  # heavier random testing
SIM=questa ./run_tests.sh            # Siemens Questa
SIM=verilator ./run_tests.sh         # Verilator 5.x (slow to compile)
```

Icarus Verilog 12+ is the default. All three simulators run the same files.

### Unit tests

- **tb_Sync2**: reset value; exactly 4 clock edges of latency; a one-cycle
  glitch never reaches the output; a value held 2 cycles is accepted; every
  Gray step passes through; async reset; input re-acquired after reset.
- **tb_Echo**: outputs in all four phases; no echo of ISOLATE before
  `IsoAck` or of CLEAR before `ClrAck`; the wrong acknowledge is ignored; a
  jump straight to CLEAR after the other side resets; async reset.
- **tb_ResetFSM**: reset enters ISOLATE; every transition needs both the echo
  and (for ISOLATE and CLEAR) the local acknowledge, never just one; stale
  echoes are ignored; IDLE stays isolated until the echo returns to IDLE;
  `Start` is ignored while busy; `Phase` never changes two bits at once.

### System test (`tb_system`)

Two `ResetCtrlHalf` instances on unrelated clocks, with unequal delay on
every wire bit and a model of the CDC each one controls. Four properties
are checked continuously in every scenario:

| | Property |
|---|---|
| P1 | A side asserts `Clear` only while **both** sides are isolated |
| P2 | Once a side starts a sequence or is reset, the other side clears before the first side leaves isolation |
| P3 | Outside reset, `PhaseOut` changes only one bit at a time |
| P4 | Everything returns to idle (no deadlock) |

Scenarios, selected with `+test=`:

| Test | What it does |
|---|---|
| `power_on` | both sides come out of reset and finish their sequences |
| `clear_a`, `clear_b` | a clear on one side clears the other |
| `clear_both` | clears requested on both sides at the same instant |
| `back_to_back` | 20 clears in a row, alternating sides |
| `start_busy` | `Start` pulses during a sequence are ignored |
| `ack_stall` | a slow CDC holds the sequence in ISOLATE |
| `reset_a`, `reset_b` | one side reset in each phase of a sequence |
| `reset_both` | both sides reset mid-sequence |
| `random` | random clears and one-sided resets (`+seed=`, `+events=`) |

Clock half-periods are set with `+ha=` and `+hb=` (in ps). The script runs
the directed tests at clock ratios of about 1.4:1, 10:1 and 1:10, and the
random test over many seeds.

### Mutation testing

`--mutants` makes 12 copies of the RTL, each with one realistic bug, and
requires some test to fail for every one. All 12 are caught:

| Mutant | Bug planted |
|---|---|
| fsm_isolate_ignores_echo | leave ISOLATE without waiting for the other side |
| fsm_clear_ignores_ack | leave CLEAR before the local CDC has cleared |
| fsm_idle_drops_isolate | release isolation before the other side is done |
| fsm_reset_to_idle | reset does not start a clear sequence |
| fsm_start_while_busy | start a sequence before the last one finished |
| echo_before_isolate_ack | echo ISOLATE before the local CDC is isolated |
| echo_before_clear_ack | echo CLEAR before the local CDC is cleared |
| echo_no_clear | the receiver never clears its CDC |
| sync_no_filter | synchronizer without the stability filter |
| sync_one_flop | single-flop synchronizer |
| top_ignores_echo_isolate | the receiver's isolate request is not used |
| not_gray_coded | state encoding changes 2 bits per step |

### Running by hand

Icarus:

```
iverilog -g2012 -o sys.vvp rtl/ResetCtrl.sv tb/tb_system.sv
vvp sys.vvp +test=reset_b
vvp sys.vvp +test=random +seed=7 +events=5000 +ha=18500 +hb=1825
```

Questa:

```
vlib work
vlog -sv -timescale 1ns/1ps rtl/ResetCtrl.sv tb/tb_system.sv
vsim -c tb_system -onfinish exit -do "run -all" +test=reset_b
```

- `-timescale 1ns/1ps` is needed because the testbenches declare a timescale
  and `ResetCtrl.sv` does not; otherwise Questa stops with a TSCALE error.
- To debug in the GUI, drop `-c` and use `-do "add wave -r /*; run -all"`.
  Add `-voptargs=+acc` if signals are missing from the wave window.
- Questa starts transcript lines with `# `; the script strips it.

Unit tests work the same way: compile `tb/tb_ResetFSM.sv` (or `tb_Echo`,
`tb_Sync2`) and run `tb_ResetFSM`.

## Background and limits

The design keeps the four-phase clear sequence of the PULP `common_cells`
`cdc_reset_ctrlr` (ETH Zurich) but replaces its 9-state initiator FSM and
two 4-phase handshake CDCs with a 4-state FSM, an echo register and two
2-bit synchronizers. Each phase step takes one round trip instead of four
handshake edges.

In the same random reset testing, the `common_cells` controller (v1.39.0
and the 2.0.0-beta master) sometimes cleared one side before the other was
isolated (property P1), when a side was reset just after a handshake had
been acknowledged. This design showed no violations of P1 to P4 in about
84,000 sequences and 32,000 one-sided resets.

Limits: these are RTL simulations. They do not model metastability; that
is handled by the synchronizer, Gray coding and stability filter, which is
an argument rather than a test result. Resets were tested with synchronous
release only. A formal proof of P1 to P4 (for example with SymbiYosys)
would be the natural next step.
