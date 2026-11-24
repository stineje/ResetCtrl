// Unit test: Sync2 (2-flop synchronizer + stability filter)
`timescale 1ns/1ps
module tb_Sync2;

   logic       clock = 0, reset_b = 0;
   logic [1:0] In = 2'b00;
   logic [1:0] Out;
   int         errors = 0;

   Sync2 dut (Out, reset_b, clock, In);

   always #5 clock = ~clock;

   task automatic check(input logic [1:0] exp, input string what);
      if (Out !== exp) begin
         errors++;
         $display("FAIL %s: Out=%b expected %b (t=%0t)", what, Out, exp, $time);
      end
   endtask

   // Drive In just after a clock edge, as a slow source would
   task automatic drive(input logic [1:0] v);
      @(posedge clock); #1 In = v;
   endtask

   // Out may only ever hold a value that In actually held for 2+ cycles
   logic [1:0] glitch_code = 2'b00;
   logic       glitch_watch = 0;
   always @(posedge clock)
      if (reset_b && glitch_watch && Out === glitch_code) begin
         errors++;
         $display("FAIL glitch: Out showed one-cycle code %b (t=%0t)", Out, $time);
      end

   initial begin
      // 1. Reset value
      #12; check(2'b00, "reset value");
      reset_b = 1;

      // 2. Latency: a new stable value appears after exactly 4 clock edges
      drive(2'b01);
      repeat (3) @(posedge clock);
      #1 check(2'b00, "no change before 4 edges");
      @(posedge clock); #1 check(2'b01, "new value after 4 edges");

      // 3. A one-cycle glitch is filtered out
      glitch_code = 2'b10; glitch_watch = 1;
      drive(2'b10);
      drive(2'b01);
      repeat (6) @(posedge clock);
      #1 check(2'b01, "one-cycle glitch filtered");
      glitch_watch = 0;

      // 4. A value held for two cycles is accepted
      drive(2'b11);
      drive(2'b11);
      drive(2'b11);
      repeat (4) @(posedge clock);
      #1 check(2'b11, "two-cycle value accepted");

      // 5. Every Gray step passes through, in order
      drive(2'b10); repeat (5) @(posedge clock); #1 check(2'b10, "step to 10");
      drive(2'b00); repeat (5) @(posedge clock); #1 check(2'b00, "step to 00");

      // 6. Asynchronous reset clears the output immediately
      drive(2'b01); repeat (5) @(posedge clock); #1 check(2'b01, "before reset");
      #2 reset_b = 0; #1 check(2'b00, "async reset");
      @(posedge clock); #1 reset_b = 1;

      // 7. After reset the current input is re-acquired
      repeat (5) @(posedge clock); #1 check(2'b01, "re-acquire after reset");

      if (errors == 0) $display("PASS tb_Sync2");
      else             $display("FAIL tb_Sync2: %0d errors", errors);
      $finish;
   end
endmodule
