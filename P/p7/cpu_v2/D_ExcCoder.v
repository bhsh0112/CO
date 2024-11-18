`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:28 12/18/2023 
// Design Name: 
// Module Name:    D_ExcCoder 
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
`define COP0 6'b010000

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
`define DIVU_FUN 6'b011011
`define MFHI_FUN 6'b010000
`define MFLO_FUN 6'b010010
`define MTHI_FUN 6'b010001
`define MTLO_FUN 6'b010011
`define SYSCALL_FUN 6'b001100
`define ERET_FUN 6'b011000

`define MFC0_RS 5'b00000
`define MTC0_RS 5'b00100
module D_ExcCoder(
    input [31:0] D_instruction,
    input [4:0] D_old_ExcCode,
    output [4:0] D_ExcCode
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 wire [5:0] rs;
	 assign special=D_instruction[31:26];
	 assign rs=D_instruction[25:21];
	 assign funct=D_instruction[5:0];
	 
	wire add,sub,ori,lui,lw,sw,beq,jal,orr,slt,sltu,bne,addi,andr,andi,lb,lh,sb,sh,mult,multu,div,divu,mfhi,mflo,mthi,mtlo,syscall,mfc0,mtc0,eret,nop;
	 assign add=(special==`R&&funct==`ADD_FUN);
	 assign sub=(special==`R&&funct==`SUB_FUN);
	 assign ori=(special==`ORI);
	 assign lui=(special==`LUI);
	 assign lw=(special==`LW);
	 assign sw=(special==`SW);
	 assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 assign orr=(special==`R&&funct==`OR_FUN);
	 assign slt=(special==`R&&funct==`SLT_FUN);
	 assign sltu=(special==`R&&funct==`SLTU_FUN);
	 assign bne=(special==`BNE);
	 assign addi=(special==`ADDI);
	 assign andr=(special==`R&&funct==`AND_FUN);
	 assign andi=(special==`ANDI);
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
	 assign syscall=(special==`R&&funct==`SYSCALL_FUN);
	 assign mfc0=(special==`COP0&&rs==`MFC0_RS);
	 assign mtc0=(special==`COP0&&rs==`MTC0_RS);
	 assign eret=(special==`COP0&&funct==`ERET_FUN);
	 assign nop=(special==6'b0&&funct==6'b0);
	 
	 wire D_RI=~(add||sub||ori||lui||lw||sw||beq||jal||jr||orr||slt||sltu||bne||addi||andr||andi||lb||lh||sb||sh||mult||multu||div||divu||mfhi||mflo||mthi||mtlo||syscall||mfc0||mtc0||eret||nop);
	assign D_ExcCode=(D_old_ExcCode!=5'b0)?D_old_ExcCode:
														 (D_RI)?5'd10:
														 5'd0;
															

endmodule
