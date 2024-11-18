`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:16:29 10/10/2023
// Design Name:   splitter
// Module Name:   /home/co-eda/Desktop/homework/verilog/splitter/splitter_tb.v
// Project Name:  splitter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: splitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module splitter_tb;

	// Inputs
	reg [31:0] A;
	reg [7:0] O1;
	reg [7:0] O2;
	reg [7:0] O3;
	reg [7:0] O4;

	// Instantiate the Unit Under Test (UUT)
	splitter uut (
		.A(A), 
		.O1(O1), 
		.O2(O2), 
		.O3(O3), 
		.O4(O4)
	);

	initial begin
		// Initialize Inputs
		A = 32'hffffffff;
		O1 = 0;
		O2 = 0;
		O3 = 0;
		O4 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A = 32'hffffffff;  
		// Add stimulus here

	end
      
endmodule

