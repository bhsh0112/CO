`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:10:11 11/04/2023
// Design Name:   mips
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/mips_tb2.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb2;

	// Inputs
	reg clk;
	reg reset;
	
	

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
		
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1'b1;

		// Wait 100 ns for global reset to finish
		#20;
		reset=0;
		// Add stimulus here
	end
      always #5 clk=~clk;
endmodule

