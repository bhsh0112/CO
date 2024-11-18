`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:18 10/31/2023 
// Design Name: 
// Module Name:    pc 
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
module pc(
	input  clk,
	input rst,
    input  [31:0] npc,
    output [31:0] pc
    );
	 reg [31:0] pc_reg;
	 initial begin
		pc_reg<=32'h0;
	 end
	assign pc=pc_reg;
	always @(posedge clk) begin
		if(rst) begin
			pc_reg<=32'h00000000;
		end
		else begin
			pc_reg<=npc;
		end
	end

endmodule
