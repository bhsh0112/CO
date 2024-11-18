`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:30:24 09/25/2023
// Design Name:   test
// Module Name:   /home/co-eda/Desktop/homework/verilog/test/test_tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_tb;

	// Inputs
	reg [3:0] inA;
	reg [3:0] inB;
	reg [1:0] op;

	// Outputs
	wire [4:0] ans;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.inA(inA), 
		.inB(inB), 
		.op(op), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		inA = 0;
		inB = 0;
		op = 0;

		#10;
		inA = 1;
		inB = 2;
		op = 1;
		// Wait 100 ns for global reset to finish
		#100;
		inA = 1;
		inB = 4;
		op = 1;
        
		// Add stimulus here

	end

      
endmodule

