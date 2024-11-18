`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:57:57 11/02/2023
// Design Name:   IM
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/im_tb.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module im_tb;

	// Inputs
	reg [31:0] pc;

	// Outputs
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.pc(pc), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		pc = 0;

		// Wait 100 ns for global reset to finish
		#100;
     
		// Add stimulus here

	end
    always #5 begin
	    pc=pc+32'h0000004;
	 end
endmodule

