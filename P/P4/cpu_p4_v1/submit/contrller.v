`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:14:29 10/31/2023 
// Design Name: 
// Module Name:    contrller 
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
`define R 6'b000000
`define ORI 6'b001101
`define LUI  6'b001111
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011

module contrller(
    input [5:0] special,
    output reg brunch,
    output reg [1:0] s_Wreg,
    output reg [1:0] s_Wdata,
    output reg EXT_s,
    output reg GRF_WE,
    output reg DM_WE,
    output reg zero_EXT_s,
    output reg jump,
    output reg [2:0] ALU_op
    );
	 reg r;
	 reg ori;
	 reg lui;
	 reg lw;
	 reg sw;
	 reg beq;
	 reg jal;
	always @(*) begin
		//and struct
		r=1'b0;
		lui=1'b0;
		ori=1'b0;
		lw=1'b0;
		sw=1'b0;
		beq=1'b0;
		jal=1'b0;
		case (special)
			`R:r=1'b1;
			`ORI:ori=1'b1;
			`LUI:lui=1'b1;
			`LW:lw=1'b1;
			`SW:sw=1'b1;
			`BEQ:beq=1'b1;
			`JAL:jal=1'b1;
		endcase
		
		//or struct
		if(beq || jal) brunch=1'b1;
		else brunch=1'b0;
		if(r) s_Wreg[0]=1'b1;
		else s_Wreg[0]=1'b0;
		if(jal) s_Wreg[1]=1'b1;
		else s_Wreg[1]=1'b0;
		if(lw ) s_Wdata[0]=1'b1;
		else s_Wdata[0]=1'b0;
		if(jal) s_Wdata[1]=1'b1;
		else s_Wdata[1]=1'b0;
		if(jal) jump=1'b1;
		else jump=1'b0;
		if(ori || lw ||sw ||lui) EXT_s=1'b1;
		else EXT_s=1'b0;
		if(r || ori || lw || lui||jal) GRF_WE=1'b1;
		else GRF_WE=1'b0;
		if(sw) DM_WE= 1'b1;
		else DM_WE=1'b0;
		if(ori ) zero_EXT_s=1'b1;
		else zero_EXT_s=1'b0;
		if(ori || lw || sw) ALU_op[0]=1'b1;
		else ALU_op[0]=1'b0;
		if(ori || beq) ALU_op[1]=1'b1;
		else ALU_op[1]=1'b0;
		if(lui) ALU_op[2]=1'b1;
		else ALU_op[2]=1'b0;
	end

endmodule
