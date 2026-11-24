// Unit test: Echo (follows the other side's phase, echoes it once acked)
`timescale 1ns/1ps
module tb_Echo;

   logic       clock = 0, reset_b = 0;
   logic [1:0] Phase = 2'b00;
   logic       IsoAck = 0, ClrAck = 0;
   logic [1:0] EchoOut;
   logic       Isolate, Clear;
   int         errors = 0;

   Echo dut (EchoOut, Isolate, Clear, reset_b, clock, Phase, IsoAck, ClrAck);

   always #5 clock = ~clock;

   task automatic check(input logic [1:0] echo, input logic iso, input logic clr,
                        input string what);
      if (EchoOut !== echo || Isolate !== iso || Clear !== clr) begin
         errors++;
         $display("FAIL %s: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)",
                  what, EchoOut, Isolate, Clear, echo, iso, clr, $time);
      end
   endtask

   task automatic step(input int n);
      repeat (n) @(posedge clock);
      #1;
   endtask

   initial begin
      // 1. Reset
      #12; check(2'b00, 0, 0, "reset");
      reset_b = 1;

      // 2. IDLE: nothing asserted, echo IDLE
      step(2); check(2'b00, 0, 0, "idle");

      // 3. ISOLATE: isolate at once, but no echo until IsoAck
      Phase = 2'b01; #1 check(2'b00, 1, 0, "isolate requested (combinational)");
      step(5);          check(2'b00, 1, 0, "isolate held, no ack -> no echo");
      ClrAck = 1; step(3); check(2'b00, 1, 0, "wrong ack (ClrAck) ignored in ISOLATE");
      ClrAck = 0; IsoAck = 1;
      step(1);          check(2'b01, 1, 0, "IsoAck -> echo ISOLATE");

      // 4. CLEAR: isolate+clear at once, echo only after ClrAck
      Phase = 2'b11; #1 check(2'b01, 1, 1, "clear requested (combinational)");
      step(5);          check(2'b01, 1, 1, "IsoAck alone does not echo CLEAR");
      ClrAck = 1;
      step(1);          check(2'b11, 1, 1, "ClrAck -> echo CLEAR");

      // 5. POST_CLEAR: clear drops, still isolated, echo immediately
      Phase = 2'b10; ClrAck = 0; #1 check(2'b11, 1, 0, "post-clear (combinational)");
      step(1);          check(2'b10, 1, 0, "echo POST_CLEAR without ack");

      // 6. Back to IDLE: isolation released, echo IDLE
      Phase = 2'b00; IsoAck = 0; #1 check(2'b10, 0, 0, "idle (combinational)");
      step(1);          check(2'b00, 0, 0, "echo IDLE");

      // 7. Skipping ahead (seen after the other side resets): CLEAR from IDLE
      Phase = 2'b11; ClrAck = 1;
      step(1);          check(2'b11, 1, 1, "jump to CLEAR echoed once acked");

      // 8. Async reset in mid-sequence: echo returns to IDLE immediately
      #2 reset_b = 0; #1 if (EchoOut !== 2'b00) begin
         errors++; $display("FAIL async reset: EchoOut=%b", EchoOut); end
      @(posedge clock); #1 reset_b = 1;

      if (errors == 0) $display("PASS tb_Echo");
      else             $display("FAIL tb_Echo: %0d errors", errors);
      $finish;
   end
endmodule
