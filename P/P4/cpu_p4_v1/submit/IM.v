`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:52 10/31/2023 
// Design Name: 
// Module Name:    IM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module IM(
    input [31:0] pc,
    output [31:0] instruction
    );
	reg [31:0] ins [8191:0];
	initial begin
	$readmemh("code.txt", ins, 0, 8191);
	end
	wire [11:0] new_pc;
	//always @(*) begin
		assign new_pc=pc[13:2];
		assign instruction=ins[new_pc];
	//end

endmodule
