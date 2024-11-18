`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:30 11/14/2023 
// Design Name: 
// Module Name:    D_controller 
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
`define R 6'b000000//special
`define ORI 6'b001101
`define LUI  6'b001111
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011
`define BNE 6'b000101
`define ADDI 6'b001000
`define ANDI 6'b001100
`define LB 6'b100000
`define LH 6'b100001
`define SB 6'b101000
`define SH 6'b101001

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR_FUN 6'b001000
`define OR_FUN 6'b100101
`define SLT_FUN 6'b101010
`define SLTU_FUN 6'b101011
`define AND_FUN 6'b100100
`define MULT_FUN 6'b011000
`define DIV_FUN 6'b011010
`define MULTU_FUN 6'b011001
`define DIVU_FUN 6'b011010
`define MFHI_FUN 6'b010000
`define MFLO_FUN 6'b010010
`define MTHI_FUN 6'b010001
`define MTLO_FUN 6'b010011

`define BEQ_CMP 3'b000
`define BNE_CMP 3'b001
module D_controller(
    input [31:0] D_instruction,
    output [4:0] D_rs,
    output [4:0] D_rt,
    output [15:0] D_imm16,
    output [25:0] D_imm26,
	 output [1:0] s_D_jump,
	 output [1:0] T_use_rs,
	 output [1:0] T_use_rt,
	 output [2:0] s_D_cmp
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=D_instruction[31:26];
	 assign funct=D_instruction[5:0];
	 
	assign D_rs=D_instruction[25:21];
	assign D_rt=D_instruction[20:16];
	assign D_imm16=D_instruction[15:0];
	assign D_imm26=D_instruction[25:0];
	
	//
	wire add,sub,ori,lui,lw,sw,beq,jal,jr,_or,slt,sltu,bne,addi,_and,andi,lb,lh,sb,sh,mult,div,multu,divu,mflo,mfhi,mtlo,mthi;
	 assign add=(special==`R&&funct==`ADD_FUN);
	 assign sub=(special==`R&&funct==`SUB_FUN);
	 assign ori=(special==`ORI);
	 assign lui=(special==`LUI);
	 assign lw=(special==`LW);
	 assign sw=(special==`SW);
	 assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 assign _or=(special==`R&&funct==`OR_FUN);
	 assign slt=(special==`R&&funct==`SLT_FUN);
	 assign sltu=(speical==`R&&funct==`SLTU_FUN);
	 assign bne=(special==`BNE);
	 assign addi=(special==`ADDI);
	 assign _and=(speical==`R&&funct==`AND_FUN);
	 assign andi=(special==`ADDI);
	 assign lb=(special==`LB);
	 assign lh=(special==`LH);
	 assign sb=(special==`SB);
	 assign sh=(special==`SH);
	 assign mult=(special==`R&&funct==`MULT_FUN);
	 assign div=(special==`R&&funct==`DIV_FUN);
	 assign multu=(special==`R&&funct==`MULTU_FUN);
	 assign divu=(special==`R&&funct==`DIVU_FUN);
	 assign mflo=(special==`R&&funct==`MFLO_FUN);
	 assign mfhi=(special==`R&&funct==`MFHI_FUN);
	 assign mtlo=(special==`R&&funct==`MTLO_FUN);
	 assign mthi=(special==`R&&funct==`MTHI_FUN);
	
	assign s_D_jump[1]=(jal||jr)?1'b1:1'b0;
	assign s_D_jump[0]=(beq||jr||bne)?1'b1:1'b0;
	
	assign s_D_cmp=(beq)?`BEQ_CMP:
													(bne)?`BNE_CMP:
													`BEQ_CMP;
											
													
	
	 assign T_use_rs=(add||sub||ori||lw||sw||_or||slt||sltu||addi||_and||andi||lb||lh||sb||sh||mult||multu||div||divu||mthi||mtlo)?2'b01:
											(beq||jr||bne)?2'b00:
											(lui||jal||mfhi||mflo)?2'b11:
											2'b11;
	 assign T_use_rt=(add||sub||_or||slt||_and||mult||multu||div||divu)?2'b01:
													(sw||sb||sh)?2'b10:
													(beq||bne)?2'b0:
													(ori||lui||lw||jal||jr||addi||andi||lb||lh||mthi||mtlo||mfhi||mflo)?2'b11:
													2'b11;
											

	
endmodule
