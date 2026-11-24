// System test: two ResetCtrlHalf instances in unrelated clock domains.
//
// Select a scenario with +test=<name> (default: all directed tests):
//   power_on      both sides come out of reset and finish their sequences
//   clear_a       a clear requested on side A clears side B too
//   clear_b       the same from side B
//   clear_both    clears requested on both sides in the same instant
//   back_to_back  20 clears in a row, alternating sides
//   start_busy    Start pulses while a sequence is running are harmless
//   ack_stall     a slow CDC acknowledge holds the sequence back
//   reset_a       side A reset in every phase of its own sequence
//   reset_b       side B reset in every phase of side A's sequence
//   reset_both    both sides reset at once, mid-sequence
//   random        random clears and one-sided resets (+events=N, +seed=N)
//
// Clock half-periods in ps: +ha=5000 +hb=3650 (defaults).
//
// Checked continuously, in every test:
//   P1  a side asserts Clear only while BOTH sides are isolated
//   P2  once a side starts a sequence or is reset, the other side clears
//       before the first side leaves isolation
//   P3  outside reset, PhaseOut changes only one bit at a time (Gray)
// and at the end of each test:
//   P4  everything returns to idle (no deadlock)
`timescale 1ns/1ps
module tb_system;

   // ---------------- clocks, resets, stimulus ----------------
   logic clkA = 0, clkB = 0, rstA = 0, rstB = 0, startA = 0, startB = 0;
   int   ha = 5000, hb = 3650;           // half-periods in ps
   always #(ha / 1000.0) clkA = ~clkA;
   always #(hb / 1000.0) clkB = ~clkB;

   // ---------------- the two halves ----------------
   logic       isoA, isoB, clrA, clrB;
   logic       isoAckA, isoAckB, clrAckA, clrAckB;
   logic [1:0] phA, phB, ecA, ecB;               // driven by A and B
   logic [1:0] phA_w, phB_w, ecA_w, ecB_w;       // after the wires

   // Wires between the domains, with unequal delay on each bit
   assign #0.4 phA_w[0] = phA[0];  assign #2.1 phA_w[1] = phA[1];
   assign #1.7 phB_w[0] = phB[0];  assign #0.2 phB_w[1] = phB[1];
   assign #2.3 ecA_w[0] = ecA[0];  assign #0.6 ecA_w[1] = ecA[1];
   assign #0.1 ecB_w[0] = ecB[0];  assign #1.9 ecB_w[1] = ecB[1];

   ResetCtrlHalf A (isoA, clrA, phA, ecA, rstA, clkA, startA, isoAckA, clrAckA, phB_w, ecB_w);
   ResetCtrlHalf B (isoB, clrB, phB, ecB, rstB, clkB, startB, isoAckB, clrAckB, phA_w, ecA_w);

   // ---------------- model of the CDC each half controls ----------------
   // Acks are levels that follow the request after a few cycles.
   // stallA/stallB hold IsoAck low to model a CDC that is slow to isolate.
   logic [2:0] isoA_sr, isoB_sr;
   logic [1:0] clrA_sr, clrB_sr;
   logic       stallA = 0, stallB = 0;
   always_ff @(posedge clkA, negedge rstA)
      if (!rstA) begin isoA_sr <= 0; clrA_sr <= 0; end
      else begin isoA_sr <= {isoA_sr[1:0], isoA}; clrA_sr <= {clrA_sr[0], clrA}; end
   always_ff @(posedge clkB, negedge rstB)
      if (!rstB) begin isoB_sr <= 0; clrB_sr <= 0; end
      else begin isoB_sr <= {isoB_sr[1:0], isoB}; clrB_sr <= {clrB_sr[0], clrB}; end
   assign isoAckA = isoA & (&isoA_sr) & !stallA;
   assign isoAckB = isoB & (&isoB_sr) & !stallB;
   assign clrAckA = clrA & (&clrA_sr);
   assign clrAckB = clrB & (&clrB_sr);

   // ---------------- property checkers ----------------
   int errors = 0;
   task automatic fail(input string msg);
      errors++;
      if (errors <= 10) $display("  FAIL t=%0t: %s", $time, msg);
   endtask

   // P1
   always @(posedge clkA) if (rstA && clrA && !(isoA && isoB)) fail("P1: A clearing while not both isolated");
   always @(posedge clkB) if (rstB && clrB && !(isoA && isoB)) fail("P1: B clearing while not both isolated");

   // P2
   logic busyA, busyB;
   bit   needA = 0, needB = 0;
   int   seqA = 0, seqB = 0;                  // sequences completed
   assign busyA = (A.fsm.state != 2'b00);
   assign busyB = (B.fsm.state != 2'b00);
   always @(negedge rstA) needA = 1;
   always @(negedge rstB) needB = 1;
   always @(posedge busyA) needA = 1;
   always @(posedge busyB) needB = 1;
   always @(posedge clkB) if (rstB && B.EchoClear) needA = 0;
   always @(posedge clkA) if (rstA && A.EchoClear) needB = 0;
   always @(negedge A.FsmIsolate) if (rstA) begin
      if (needA) fail("P2: A finished without B clearing"); else seqA++;
   end
   always @(negedge B.FsmIsolate) if (rstB) begin
      if (needB) fail("P2: B finished without A clearing"); else seqB++;
   end

   // P3
   logic [1:0] lastA, lastB;
   bit         rstSeenA = 1, rstSeenB = 1;
   always @(negedge rstA) rstSeenA = 1;
   always @(negedge rstB) rstSeenB = 1;
   always @(posedge clkA) begin
      if (rstA && !rstSeenA && (phA ^ lastA) == 2'b11) fail("P3: A PhaseOut changed 2 bits");
      lastA = phA; if (rstA) rstSeenA = 0;
   end
   always @(posedge clkB) begin
      if (rstB && !rstSeenB && (phB ^ lastB) == 2'b11) fail("P3: B PhaseOut changed 2 bits");
      lastB = phB; if (rstB) rstSeenB = 0;
   end

   // Count clears seen on each side (for directed expectations)
   int clearsSeenA = 0, clearsSeenB = 0;
   always @(posedge clrA) clearsSeenA++;
   always @(posedge clrB) clearsSeenB++;

   // ---------------- helpers ----------------
   task automatic pulse_start_a; @(posedge clkA); #0.1 startA = 1; @(posedge clkA); #0.1 startA = 0; endtask
   task automatic pulse_start_b; @(posedge clkB); #0.1 startB = 1; @(posedge clkB); #0.1 startB = 0; endtask

   // Assert reset now (asynchronously), release it synchronously
   task automatic reset_a(input int cycles);
      rstA = 0; repeat (cycles) @(posedge clkA); #0.5 rstA = 1;
   endtask
   task automatic reset_b(input int cycles);
      rstB = 0; repeat (cycles) @(posedge clkB); #0.5 rstB = 1;
   endtask

   // Wait until both sides are idle (P4); fail after max_cycles of clkA
   task automatic wait_idle(input int max_cycles, input string where);
      int quiet = 0, n = 0;
      while (quiet < 20 && n < max_cycles) begin
         @(posedge clkA); n++;
         if (!isoA && !isoB && !clrA && !clrB && !busyA && !busyB) quiet++; else quiet = 0;
      end
      if (quiet < 20) fail($sformatf("P4: not idle after %0d cycles (%s)", max_cycles, where));
   endtask

   // Wait until side A's FSM is in a given state; fail after max_cycles
   task automatic wait_state_a(input logic [1:0] st, input int max_cycles);
      int n = 0;
      while (A.fsm.state != st && n < max_cycles) begin @(posedge clkA); n++; end
      if (A.fsm.state != st) fail($sformatf("A never reached state %b", st));
   endtask

   task automatic expect_true(input bit cond, input string msg);
      if (!cond) fail(msg);
   endtask

   // ---------------- directed tests ----------------
   task automatic t_power_on;
      // resets were asserted at time 0; release them at different times
      #23 rstA = 1;
      #17 rstB = 1;
      wait_idle(2000, "power_on");
      expect_true(seqA >= 1 && seqB >= 1, "power_on: both reset sequences should complete");
      expect_true(clearsSeenA >= 1 && clearsSeenB >= 1, "power_on: both sides should clear");
   endtask

   task automatic t_clear_a;
      int cB = clearsSeenB, sA = seqA;
      pulse_start_a();
      wait_idle(2000, "clear_a");
      expect_true(clearsSeenB > cB, "clear_a: B should have cleared");
      expect_true(seqA == sA + 1, "clear_a: A should complete exactly one sequence");
   endtask

   task automatic t_clear_b;
      int cA = clearsSeenA, sB = seqB;
      pulse_start_b();
      wait_idle(2000, "clear_b");
      expect_true(clearsSeenA > cA, "clear_b: A should have cleared");
      expect_true(seqB == sB + 1, "clear_b: B should complete exactly one sequence");
   endtask

   task automatic t_clear_both;
      int sA = seqA, sB = seqB;
      @(posedge clkA); #0.1 startA = 1; startB = 1;
      @(posedge clkA); #0.1 startA = 0;
      @(posedge clkB); #0.1 startB = 0;
      wait_idle(4000, "clear_both");
      expect_true(seqA == sA + 1 && seqB == sB + 1, "clear_both: both sequences should complete");
   endtask

   task automatic t_back_to_back;
      int sA = seqA, sB = seqB;
      for (int i = 0; i < 10; i++) begin
         pulse_start_a(); wait_idle(2000, "back_to_back A");
         pulse_start_b(); wait_idle(2000, "back_to_back B");
      end
      expect_true(seqA == sA + 10 && seqB == sB + 10, "back_to_back: 10 sequences per side");
   endtask

   task automatic t_start_busy;
      int sA = seqA;
      pulse_start_a();
      wait_state_a(2'b11, 500);             // in CLEAR
      repeat (3) pulse_start_a();           // ignored while busy
      wait_idle(3000, "start_busy");
      expect_true(seqA == sA + 1, "start_busy: extra Start pulses must not start sequences");
   endtask

   task automatic t_ack_stall;
      int sA = seqA;
      stallB = 1;                           // B's CDC is slow to isolate
      pulse_start_a();
      repeat (300) @(posedge clkA);
      expect_true(A.fsm.state == 2'b01, "ack_stall: A must wait in ISOLATE until B acks");
      expect_true(!clrA && !clrB, "ack_stall: nobody may clear before B isolates");
      stallB = 0;
      wait_idle(2000, "ack_stall");
      expect_true(seqA == sA + 1, "ack_stall: sequence completes after the ack");
   endtask

   task automatic t_reset_a;
      logic [1:0] states [4];
      states[0] = 2'b01; states[1] = 2'b11; states[2] = 2'b10; states[3] = 2'b00;
      for (int i = 0; i < 4; i++) begin
         pulse_start_a();
         if (states[i] == 2'b00) wait_state_a(2'b10, 500);   // then catch it in IDLE
         wait_state_a(states[i], 500);
         reset_a(3);
         wait_idle(3000, $sformatf("reset_a in state %b", states[i]));
      end
   endtask

   task automatic t_reset_b;
      logic [1:0] states [4];
      states[0] = 2'b01; states[1] = 2'b11; states[2] = 2'b10; states[3] = 2'b00;
      for (int i = 0; i < 4; i++) begin
         pulse_start_a();
         if (states[i] == 2'b00) wait_state_a(2'b10, 500);
         wait_state_a(states[i], 500);
         reset_b(3);
         wait_idle(3000, $sformatf("reset_b while A in state %b", states[i]));
      end
   endtask

   task automatic t_reset_both;
      pulse_start_a();
      wait_state_a(2'b11, 500);
      fork reset_a(4); reset_b(6); join
      wait_idle(3000, "reset_both");
   endtask

   task automatic t_random(input int events);
      int unsigned w, k, d;
      for (int i = 0; i < events; i++) begin
         w = $urandom_range(5, 400); k = $urandom_range(0, 9); d = $urandom_range(2, 8);
         #(w * 1.0);
         case (k)
            0, 1, 2: pulse_start_a();
            3, 4, 5: pulse_start_b();
            6:       reset_a(d);
            7:       reset_b(d);
            default: ;
         endcase
      end
      wait_idle(5000, "random");
   endtask

   // ---------------- test runner ----------------
   string test;
   int    events = 2000, seed = 1;

   task automatic run(input string name);
      int e0 = errors;
      if      (name == "power_on")     t_power_on();
      else if (name == "clear_a")      t_clear_a();
      else if (name == "clear_b")      t_clear_b();
      else if (name == "clear_both")   t_clear_both();
      else if (name == "back_to_back") t_back_to_back();
      else if (name == "start_busy")   t_start_busy();
      else if (name == "ack_stall")    t_ack_stall();
      else if (name == "reset_a")      t_reset_a();
      else if (name == "reset_b")      t_reset_b();
      else if (name == "reset_both")   t_reset_both();
      else if (name == "random")       t_random(events);
      else begin fail({"unknown test ", name}); end
      $display("  %-13s %s", name, (errors == e0) ? "ok" : "FAILED");
   endtask

   initial begin
      void'($value$plusargs("ha=%d", ha));
      void'($value$plusargs("hb=%d", hb));
      void'($value$plusargs("events=%d", events));
      if ($value$plusargs("seed=%d", seed)) void'($urandom(seed));
      if (!$value$plusargs("test=%s", test)) test = "all";

      $display("tb_system: test=%s clkA=%0.2fns clkB=%0.2fns", test, 2*ha/1000.0, 2*hb/1000.0);
      run("power_on");
      if (test == "all") begin
         run("clear_a");    run("clear_b");     run("clear_both");
         run("back_to_back"); run("start_busy"); run("ack_stall");
         run("reset_a");    run("reset_b");     run("reset_both");
      end else if (test != "power_on") begin
         run(test);
      end

      if (errors == 0) $display("PASS tb_system (%s): sequences A=%0d B=%0d", test, seqA, seqB);
      else             $display("FAIL tb_system (%s): %0d errors", test, errors);
      $finish;
   end
endmodule
