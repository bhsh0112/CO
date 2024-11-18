`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:07 11/14/2023 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input rst,
    input [31:0] npc,
    output [31:0] pc
    );
	 reg [31:0] pc_reg;
	assign pc=pc_reg;
	always @(posedge clk) begin
		if(rst) begin
			pc_reg<=32'h00003000;
		end
		else begin
			pc_reg<=npc;
		end
	end

endmodule