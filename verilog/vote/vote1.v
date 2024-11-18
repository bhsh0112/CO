`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:34 09/25/2023
// Design Name:   vote
// Module Name:   /home/co-eda/Desktop/homework/verilog/vote/vote1.v
// Project Name:  vote
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vote
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vote1;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire res;

	// Instantiate the Unit Under Test (UUT)
	vote uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.res(res)
	);

	initial begin
		// Initialize Inputs
		A = 1;
		B = 0;
		C = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

