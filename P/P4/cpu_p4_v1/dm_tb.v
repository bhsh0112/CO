`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:23:14 11/02/2023
// Design Name:   DM
// Module Name:   /home/co-eda/Desktop/homework/P/P4/cpu_p4/dm_tb.v
// Project Name:  cpu_p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dm_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] pc;
	reg WE;
	reg [31:0] adress;
	reg [31:0] Wdata;

	// Outputs
	wire [31:0] Rdata;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.clk(clk), 
		.rst(rst), 
		.pc(pc), 
		.WE(WE), 
		.adress(adress), 
		.Wdata(Wdata), 
		.Rdata(Rdata)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		pc = 0;
		WE = 0;
		adress = 32'h00000000;
		Wdata = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always #5 clk=~clk;
endmodule

