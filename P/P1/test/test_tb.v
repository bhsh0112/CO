`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:21:42 10/16/2023
// Design Name:   top_module
// Module Name:   /home/co-eda/Desktop/homework/P/P1/test/test_tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
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
	reg clk;
	reg areset;
	reg x;

	// Outputs
	wire z;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.clk(clk), 
		.areset(areset), 
		.x(x), 
		.z(z)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		areset = 0;
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

