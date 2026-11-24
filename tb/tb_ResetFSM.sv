// Unit test: ResetFSM (the clear-sequence state machine)
`timescale 1ns/1ps
module tb_ResetFSM;

   logic       clock = 0, reset_b = 0;
   logic       Start = 0, IsoAck = 0, ClrAck = 0;
   logic [1:0] Echo = 2'b00;
   logic [1:0] Phase;
   logic       Isolate, Clear;
   int         errors = 0;

   localparam logic [1:0] IDLE = 2'b00, ISOLATE = 2'b01, CLEAR = 2'b11, POST_CLEAR = 2'b10;

   ResetFSM dut (Phase, Isolate, Clear, reset_b, clock, Start, Echo, IsoAck, ClrAck);

   always #5 clock = ~clock;

   task automatic check(input logic [1:0] ph, input logic iso, input logic clr,
                        input string what);
      if (Phase !== ph || Isolate !== iso || Clear !== clr) begin
         errors++;
         $display("FAIL %s: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)",
                  what, Phase, Isolate, Clear, ph, iso, clr, $time);
      end
   endtask

   task automatic step(input int n);
      repeat (n) @(posedge clock);
      #1;
   endtask

   // Phase goes straight to the other clock domain: outside reset it may only
   // change one bit at a time.
   logic [1:0] last_phase;
   logic       was_reset = 1;
   always @(posedge clock) begin
      if (reset_b && !was_reset && (Phase ^ last_phase) == 2'b11) begin
         errors++;
         $display("FAIL Gray: Phase %b -> %b changed 2 bits (t=%0t)", last_phase, Phase, $time);
      end
      last_phase = Phase;
      was_reset  = !reset_b;
   end

   // Walk one full sequence, starting in ISOLATE
   task automatic walk_from_isolate;
      check(ISOLATE, 1, 0, "in ISOLATE");
      // needs BOTH the echo and the local ack
      Echo = ISOLATE; step(4);   check(ISOLATE, 1, 0, "echo alone does not leave ISOLATE");
      Echo = IDLE; IsoAck = 1; step(4); check(ISOLATE, 1, 0, "ack alone does not leave ISOLATE");
      Echo = ISOLATE;            step(1); check(CLEAR, 1, 1, "echo+IsoAck -> CLEAR");
      // CLEAR
      Echo = ISOLATE; ClrAck = 1; step(4); check(CLEAR, 1, 1, "stale echo does not leave CLEAR");
      Echo = CLEAR; ClrAck = 0;  step(4); check(CLEAR, 1, 1, "echo alone does not leave CLEAR");
      ClrAck = 1;                step(1); check(POST_CLEAR, 1, 0, "echo+ClrAck -> POST_CLEAR");
      // POST_CLEAR
      ClrAck = 0; IsoAck = 0;    step(4); check(POST_CLEAR, 1, 0, "waits for echo POST_CLEAR");
      Echo = POST_CLEAR;         step(1); check(IDLE, 1, 0, "-> IDLE, still isolated");
      // IDLE: isolated until the other side echoes IDLE
      step(4);                            check(IDLE, 1, 0, "isolated while echo != IDLE");
      Echo = IDLE;               #1       check(IDLE, 0, 0, "released when echo = IDLE");
   endtask

   initial begin
      // 1. Reset enters ISOLATE (a reset starts a clear sequence)
      #12; check(ISOLATE, 1, 0, "during reset");
      reset_b = 1; step(1);

      // 2. Full walk after reset
      walk_from_isolate();

      // 3. Start is ignored while the other side has not finished
      step(2);
      Echo = POST_CLEAR; Start = 1; step(3); check(IDLE, 1, 0, "Start ignored while echo != IDLE");
      Start = 0; Echo = IDLE; step(2);   check(IDLE, 0, 0, "stays IDLE without Start");

      // 4. Start from IDLE, then a second full walk
      Start = 1; step(1); Start = 0;     check(ISOLATE, 1, 0, "Start -> ISOLATE");
      walk_from_isolate();

      // 5. Start held high in other states changes nothing
      Start = 1; step(1); Start = 0;
      Echo = ISOLATE; IsoAck = 1; step(1); IsoAck = 0;
      check(CLEAR, 1, 1, "reached CLEAR");
      Start = 1; step(3); Start = 0;     check(CLEAR, 1, 1, "Start ignored in CLEAR");

      // 6. Async reset in CLEAR returns to ISOLATE immediately
      #2 reset_b = 0; #1 check(ISOLATE, 1, 0, "async reset from CLEAR");
      @(posedge clock); #1 reset_b = 1;
      Echo = IDLE; step(1);
      walk_from_isolate();

      if (errors == 0) $display("PASS tb_ResetFSM");
      else             $display("FAIL tb_ResetFSM: %0d errors", errors);
      $finish;
   end
endmodule
