`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:53 11/14/2023 
// Design Name: 
// Module Name:    W_controller 
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
`define R 6'b000000 //special
`define ORI 6'b001101
`define LUI  6'b001111
`define LW 6'b100011
`define JAL 6'b000011
`define ADDI 6'b001000
`define ANDI 6'b001100
`define LB 6'b100000
`define LH 6'b100001
`define SB 6'b101000
`define SH 6'b101001


`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define OR_FUN 6'b100101
`define SLT_FUN 6'b101010
`define SLTU_FUN 6'b101011
`define AND_FUN 6'b100100
module W_controller(
    input [31:0] W_instruction,
	 output [4:0] W_rt,
	 output [4:0] W_rd,
    output [1:0] s_W_Wdata,
    output [1:0] s_W_Wreg,
    output W_GRF_WE,
	 output W_is_jal,
	 output W_is_LW
    );
	//
	wire [5:0] special;
	wire [5:0] funct;
	assign special=W_instruction[31:26];
	assign funct=W_instruction[5:0];
	
	//
	wire add,sub,ori,lui,lw,jal,_or,slt,sltu,addi,andi,lb,lh,sb,sh;
	assign add=(special==`R&&funct==`ADD_FUN);
	assign sub=(special==`R&&funct==`SUB_FUN);
	assign lui=(special==`LUI);
	assign ori=(special==`ORI);
	assign lw=(special==`LW);
	assign jal=(special==`JAL);
	assign _or=(special==`R&&funct==`OR_FUN);
	assign slt=(special==`R&&funct==`SLT_FUN);
	assign sltu=(special==`R&&funct==`SLTU_FUN);
	assign addi=(special==`ADDI);
	assign _and=(speical==`R&&funct==`AND_FUN);
	assign andi=(special==`ANDI);
	assign lb=(special==`LB);
	assign lh=(special==`LH);
	assign sb=(special==`SB);
	assign sh=(special==`SH);
	
	assign W_is_jal=jal;
	assign W_is_LW=lw||lb||lh;
	
	//
	assign W_GRF_WE=(add||sub||ori||lw||jal||lui||_or||slt||sltu||addi||_and||andi||lb||lh)?1'b1:1'b0;
	assign s_W_Wdata[1]=(jal)?1'b1:1'b0;
	assign s_W_Wdata[0]=(lw||lb||lh)?1'b1:1'b0;
	assign s_W_Wreg[1]=(jal)?1'b1:1'b0;
	assign s_W_Wreg[0]=(ori||lui||lw||addi||andi||lb||lh)?1'b1:1'b0;


	assign W_rt=W_instruction[20:16];
	assign W_rd=W_instruction[15:11];

endmodule
