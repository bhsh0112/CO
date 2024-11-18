`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:04:30 09/05/2023
// Design Name:   code
// Module Name:   /home/co-eda/Desktop/homework/verilog/counter/counter_tb.v
// Project Name:  counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		Slt = 0;
		En = 0;
		#10;
		En=1'b1;
		#8;
		Slt=1'b1;
		#12;
		En=1'b0;
		end
	always #5 Clk=~Clk;
endmodule

