`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:39 11/14/2023 
// Design Name: 
// Module Name:    E_controller 
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


`define ADD_OP 3'b000  //op
`define SUB_OP 3'b001
`define OR_OP 3'b010
`define LUI_OP 3'b011
`define SLT_OP 3'b100
`define SLTU_OP 3'b101
`define AND_OP 3'b110
`define MULT_FUN 6'b011000
`define DIV_FUN 6'b011010
`define MULTU_FUN 6'b011001
`define DIVU_FUN 6'b011010
`define MFHI_FUN 6'b010000
`define MFLO_FUN 6'b010010
`define MTHI_FUN 6'b010001
`define MTLO_FUN 6'b010011


module E_controller(
    input [31:0] E_instruction,
    output [15:0] E_imm16,
    output [1:0] s_E_data2,
    output [2:0] E_op,
	 output [1:0] E_T_new,
	 output [4:0] E_Wreg,
	 output E_is_LW,
	 output E_is_SW,
	 output  [1:0] s_E_GRF_Wdata,
	 output E_is_jal
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=E_instruction[31:26];
	 assign funct=E_instruction[5:0];
	 
	 wire add,sub,ori,lui,lw,sw,beq,jal,_or,slt,sltu,bne,addi,_and,andi,lb,lh,sb,sh,mult,multu,div,divu,mfhi,mflo,mthi,mtlo;
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
	 assign sltu=(special==`R&&funct==`SLTU_FUN);
	 assign bne=(special==`BNE);
	 assign addi=(special==`ADDI);
	 assign _and=(special==`R&&funct==`AND_FUN);
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
	 
	 assign E_is_SW=sw||sb||sh;
	 assign E_is_LW=lw||lb||lh;
	 assign E_is_jal=jal;
	 
	
	assign E_imm16=E_instruction[15:0];
	assign s_E_data2[1]=(ori||addi)?1'b1:1'b0;
	assign s_E_data2[0]=(lui||lw||sw||lb||lh||sb||sh)?1'b1:1'b0;
	assign E_op=(add||lw||sw||addi||lb||lh||sb||sh)?`ADD_OP:
										(sub)?`SUB_OP:
										(ori||_or)?`OR_OP:
										(lui)?`LUI_OP:
										(slt)?`SLT_OP:
										(sltu)?`SLTU_OP:
										(_and||andi)?`AND_OP:
										`ADD_OP;
		

	assign E_T_new=(add||sub||ori||_or||slt||sltu||addi||_and||andi)?2'b01:
													(lw||lb||lh)?2'b10:
													(sw||beq||jal||jr||bne||sb||sh)?2'b00:
													2'b00;
	
	wire [4:0] rt;
	wire [4:0] rd;
	assign rt=E_instruction[20:16];
	assign rd=E_instruction[15:11];
	
	assign E_Wreg=(add||sub||_or||slt||sltu||_and)?rd:
												(ori||lui||lw||addi||andi||lb||lh)?rt:
												(jal)?5'd31:
												5'b0;
					
	assign s_E_GRF_Wdata[1]=(jal)?1'b1:1'b0;
	assign s_E_GRF_Wdata[0]=(lw||lb||lh)?1'b1:1'b0;

endmodule
