`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:25:19 10/01/2023
// Design Name:   test
// Module Name:   /home/co-eda/Desktop/homework/verilog/test/test_tb2.v
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

module test_tb2;

	// Inputs
	reg inA;
	reg inB;
	reg inC;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.inA(inA), 
		.inB(inB), 
		.inC(inC), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		inA = 0;
		inB = 1;
		inC = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

