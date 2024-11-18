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
`define BGEZ 6'b000001
`define J 6'b000010

`define F_ADD 3'b001  //force_add
`define F_SUB 3'b010
`define F_OR 3'b011
`define F_LUI 3'b100

`define ADD_OP 3'b000  //op
`define SUB_OP 3'b001
`define OR_OP 3'b010
`define LUI_OP 3'b011
`define SLLV_OP 3'b100

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR 6'b001000
`define NOP 6'b000000
`define SLLV 6'b000100
module contrller(
    input [5:0] special,
	 input [5:0] funct,
    output reg brunch,
    output reg [1:0] s_Wreg,
    output reg [1:0] s_Wdata,
    output reg EXT_s,
    output reg GRF_WE,
    output reg DM_WE,
    output reg zero_EXT_s,
    output reg jump,
    output reg [2:0] op,
	 output is_jr,
	 output reg r,
	 output reg is_bgez
    );
	 
	 reg ori;
	 reg lui;
	 reg lw;
	 reg sw;
	 reg beq;
	 reg jal;
	 reg bgez;
	 reg j;
	 reg [2:0] ALU_op;
	 wire is_nop;
	always @(*) begin
		//and struct
		r=1'b0;
		lui=1'b0;
		ori=1'b0;
		lw=1'b0;
		sw=1'b0;
		beq=1'b0;
		jal=1'b0;
		bgez=1'b0;
		j=1'b0;
		case (special)
			`R:r=1'b1;
			`ORI:ori=1'b1;
			`LUI:lui=1'b1;
			`LW:lw=1'b1;
			`SW:sw=1'b1;
			`BEQ:beq=1'b1;
			`JAL:jal=1'b1;
			`BGEZ:bgez=1'b1;
			`J:j=1'b1;
		endcase
		
		//or struct
		if(beq || jal||bgez) brunch=1'b1;//brunch
		else brunch=1'b0;
		if(r) s_Wreg[0]=1'b1;//s_Wreg
		else s_Wreg[0]=1'b0;
		if(jal) s_Wreg[1]=1'b1;
		else s_Wreg[1]=1'b0;
		if(lw ) s_Wdata[0]=1'b1;//s_Wdata
		else s_Wdata[0]=1'b0;
		if(jal) s_Wdata[1]=1'b1;
		else s_Wdata[1]=1'b0;
		if(jal) jump=1'b1;//jump
		else jump=1'b0;
		if(ori || lw ||sw ||lui) EXT_s=1'b1;//EXT_s
		else EXT_s=1'b0;
		if((r || ori || lw || lui||jal) &&(!is_jr) && (!is_nop)) GRF_WE=1'b1;//GRF_WE
		else GRF_WE=1'b0;
		if(sw) DM_WE= 1'b1;//DM_WE
		else DM_WE=1'b0;
		if(ori ) zero_EXT_s=1'b1;//zero_EXT_s
		else zero_EXT_s=1'b0;
		if(ori || lw || sw) ALU_op[0]=1'b1;//ALU_op
		else ALU_op[0]=1'b0;
		if(ori || beq) ALU_op[1]=1'b1;
		else ALU_op[1]=1'b0;
		if(lui) ALU_op[2]=1'b1;
		else ALU_op[2]=1'b0;
		if(bgez) is_bgez=1'b1;//is_bgez
		else is_bgez=1'b0;
		
		case(ALU_op)
			`F_ADD:op=`ADD_OP;    //forced by ALU_op
			`F_SUB:op=`SUB_OP;
			`F_OR:op=`OR_OP;
			`F_LUI:op=`LUI_OP;
			3'b000:begin      //normal situation
										case(funct)
											`ADD_FUN:op=`ADD_OP;
											`SUB_FUN:op=`SUB_OP;
											`SLLV:op=`SLLV_OP;
											default:op=`SUB_OP;
										endcase
									end
			default:op=`ADD_OP;
		endcase
	end
	assign is_nop=((funct==`NOP) && r)?1'b1:1'b0;
	assign is_jr=((funct==`JR) && r)? 1'b1:1'b0;
	

endmodule
