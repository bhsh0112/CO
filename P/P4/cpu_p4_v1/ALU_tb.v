`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:58:15 11/07/2023
// Design Name:   ALU
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/ALU_tb.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [31:0] data1;
	reg [31:0] data2;
	reg [2:0] op;

	// Outputs
	wire [31:0] ans;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.data1(data1), 
		.data2(data2), 
		.op(op), 
		.ans(ans), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		data1 = 0;
		data2 = 0;
		op = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

