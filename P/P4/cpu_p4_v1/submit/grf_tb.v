`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:00:43 11/02/2023
// Design Name:   GRF
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/grf_tb.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GRF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module grf_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] pc;
	reg [4:0] Rreg1;
	reg [4:0] Rreg2;
	reg [4:0] Wreg;
	reg [31:0] Wdata;
	reg WE;

	// Outputs
	wire [31:0] Rdata1;
	wire [31:0] Rdata2;

	// Instantiate the Unit Under Test (UUT)
	GRF uut (
		.clk(clk), 
		.rst(rst), 
		.pc(pc), 
		.Rreg1(Rreg1), 
		.Rreg2(Rreg2), 
		.Wreg(Wreg), 
		.Wdata(Wdata), 
		.WE(WE), 
		.Rdata1(Rdata1), 
		.Rdata2(Rdata2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		pc = 0;
		Rreg1 = 5'b11111;
		Rreg2 = 5'b00000;
		Wreg = 0;
		Wdata = 0;
		WE = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always #5 clk=~clk;
endmodule

