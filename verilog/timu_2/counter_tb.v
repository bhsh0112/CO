`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:57:15 09/05/2023
// Design Name:   counting
// Module Name:   /home/co-eda/Desktop/homework/verilog/timu_2/counter_tb.v
// Project Name:  timu_2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg [1:0] num;
	reg clk;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	counting uut (
		.num(num), 
		.clk(clk), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		#0 num = 0;
			clk = 0;
		#5 num=2'b01;
		end
		always #10 clk=~clk;
      
endmodule

