`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:35:09 11/07/2023
// Design Name:   MUX_PC_3_1
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/MUX_PC_tb.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MUX_PC_3_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MUX_PC_tb;

	// Inputs
	reg [31:0] pc;
	reg [25:0] imm26;
	reg [31:0] Rdata1;
	reg [15:0] imm16;
	reg brunch;
	reg equal;
	reg jump;
	reg is_jr;

	// Outputs
	wire [31:0] adder;
	wire [31:0] npc;

	// Instantiate the Unit Under Test (UUT)
	MUX_PC_3_1 uut (
		.pc(pc), 
		.imm26(imm26), 
		.Rdata1(Rdata1), 
		.imm16(imm16), 
		.brunch(brunch), 
		.equal(equal), 
		.jump(jump), 
		.is_jr(is_jr), 
		.adder(adder), 
		.npc(npc)
	);

	initial begin
		// Initialize Inputs
		pc = 0;
		imm26 = 4;
		Rdata1 = 8;
		imm16 = 16;
		brunch = 0;
		equal = 1;
		jump = 0;
		is_jr = 0;

		// Wait 100 ns for global reset to finish
		#10;
       brunch=1;
		 #10;
		 brunch=0;
		 jump=1;
		 #10;
		 jump=0;
		 is_jr=1;
		// Add stimulus here

	end
      
endmodule

