`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:03:04 10/01/2023
// Design Name:   test
// Module Name:   /home/co-eda/Desktop/homework/verilog/test/test_tb3.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_tb3;

	// Inputs
	reg ina;
	reg inb;
	reg inc;
	reg ind;
	reg ine;
	reg inf;
	reg ing;

	// Outputs
	wire [3:0] x;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.ina(ina), 
		.inb(inb), 
		.inc(inc), 
		.ind(ind), 
		.ine(ine), 
		.inf(inf), 
		.ing(ing), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		ina = 0;
		inb = 0;
		inc = 0;
		ind = 0;
		ine = 1;
		inf = 1;
		ing = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

