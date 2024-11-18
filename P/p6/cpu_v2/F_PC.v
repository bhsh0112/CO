`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:34 11/14/2023 
// Design Name: 
// Module Name:    F_PC 
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
module F_PC(
    input clk,
    input rst,
	 input stall,
    input [31:0] F_npc,
    output [31:0] F_pc
    );
	 reg [31:0] pc_reg;
	 reg tmp_stall;
	assign F_pc=pc_reg;
	always @(posedge clk) begin
		if(rst) begin
			pc_reg<=32'h00003000;
		end
		else if(stall) begin
			pc_reg<=F_pc;
		end
		else begin
			pc_reg<=F_npc;
		end
	end
	

endmodule
