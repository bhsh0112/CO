`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:07:09 11/04/2023
// Design Name:   PC
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/PC_tb.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] npc;

	// Outputs
	wire [31:0] pc;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.rst(rst), 
		.npc(npc), 
		.pc(pc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		npc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end 
	always #5 begin clk=~clk; npc=npc+32'h4; end
      
endmodule

