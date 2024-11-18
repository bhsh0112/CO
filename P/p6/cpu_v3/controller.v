`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:27 12/01/2023 
// Design Name: 
// Module Name:    controller 
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
`define DIVU_FUN 6'b011011
`define MFHI_FUN 6'b010000
`define MFLO_FUN 6'b010010
`define MTHI_FUN 6'b010001
`define MTLO_FUN 6'b010011


`define BEQ_CMP 2'b00
`define BNE_CMP 2'b01

`define JUMP_ADDER 2'b00
`define JUMP_IMM16 2'b01
`define JUMP_IMM26 2'b10
`define JUMP_RDATA1 2'b11

`define ADD_OP 3'b000  //op
`define SUB_OP 3'b001
`define OR_OP 3'b010
`define LUI_OP 3'b011
`define SLT_OP 3'b100
`define SLTU_OP 3'b101
`define AND_OP 3'b110

`define DATA2_RDATA2 2'b00//s_E_data2
`define DATA2_EXT 2'b01
`define DATA2_ZERO_EXT 2'b10

`define WDATA_ANS 2'b00//s_GRF_Wdata
`define WDATA_RDATA 2'b01
`define WDATA_ADDER 2'b10
`define WDATA_HL 2'b11

`define RD 2'b00//s_W_Wreg
`define RT 2'b01
`define RA 2'b10

`define NONE 3'b000//M_EXT_op
`define U_BYTE 3'b001
`define S_BYTE 3'b010
`define U_HALFWORD 3'b011
`define S_HALFWORD 3'b100

`define WORD 4'b1111//M_data_byteen
`define BYTE_1 4'b0001
`define BYTE_2 4'b0010
`define BYTE_3 4'b0100
`define BYTE_4 4'b1000
`define HALF_1 4'b0011
`define HALF_2 4'b1100

module controller(
    input [31:0] instruction,
    input equal,
	 input [31:0] M_adress,
	 input [31:0] M_pre_Wdata,
	 input check,
	 output [4:0] rs,
    output [4:0] rt,
	 output [4:0] rd,
    output [15:0] imm16,
    output [25:0] imm26,
	 output [1:0] s_D_jump,
	 output [1:0] T_use_rs,
	 output [1:0] T_use_rt,
	 output [2:0] s_D_cmp,
    output [1:0] s_E_data2,
    output [2:0] E_op,
	 output [1:0] E_T_new,
	 output [1:0] M_T_new,
	 output [2:0] M_EXT_op,
	 output [3:0] M_data_byteen,
	 output [31:0] M_Wdata,
	 output [4:0] Wreg,
	 output is_LW,
	 output is_SW,
	 output  [1:0] s_GRF_Wdata,
	 output GRF_WE,
	 output DM_WE,
    output [1:0] s_W_Wreg,
	 output is_md
    );
	 //rs,rt,rd
	 assign rs=instruction[25:21];
	assign rt=instruction[20:16];
	assign rd=instruction[15:11];
	
	//imm16,imm26
	assign imm16=instruction[15:0];
	assign imm26=instruction[25:0];
	
	//judge the type of instruction##############################
	wire [5:0] special;
	 wire [5:0] funct;
	 assign special=instruction[31:26];
	 assign funct=instruction[5:0];
	 
	wire add,sub,ori,lui,lw,sw,beq,jal,orr,slt,sltu,bne,addi,andr,andi,lb,lh,sb,sh,mult,multu,div,divu,mfhi,mflo,mthi,mtlo;
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
	 //change
	 
	 wire r_cal,i_cal,l_type,s_type,b_type,r_jump,i_jump,link,md_type,mt_type,mf_type;
	 assign r_cal=add||sub||andr||orr||slt||sltu;//calculate by using 2 registers
	 assign i_cal=lui||addi||andi||ori;//calculate by using 1 register and a immediate
	 assign l_type=lw||lh||lb;//load
	 assign s_type=sw||sh||sb;//write
	 assign b_type=beq||bne;//brunch
	 assign r_jump=jr;//jump by using register
	 assign i_jump=jal;//jump by using immediate
	 assign link=jal;//link
	 assign md_type=mult||multu||div||divu;//mult and div
	 assign mt_type=mthi||mtlo;//write HI/LO
	 assign mf_type=mfhi||mflo;//read HI/LO
	
	//compute tuse----------------------------instruction
	 assign T_use_rs=(add||sub||ori||lw||sw||orr||slt||sltu||addi||andr||andi||lb||lh||sb||sh||mult||multu||div||divu||mthi||mtlo)?2'b01:
											(beq||jr||bne)?2'b00:
											(lui||jal||mfhi||mflo)?2'b11:
											2'b11;
	 assign T_use_rt=(add||sub||orr||slt||sltu||andr||mult||multu||div||divu)?2'b01:
													(sw||sb||sh)?2'b10:
													(beq||bne)?2'b0:
													(ori||lui||lw||jal||jr||addi||andi||lb||lh||mthi||mtlo||mfhi||mflo)?2'b11:
													2'b11;
													
	//compute Tnew-----------------------------------------instruction
	assign E_T_new=(add||sub||ori||lui||orr||slt||sltu||addi||andr||andi||mfhi||mflo)?2'b01:
													(lw||lb||lh)?2'b10:
													(sw||beq||jal||jr||bne||sb||sh||mthi||mtlo)?2'b00:
													2'b00;
	
	//compute Tnew-----------------------------------------instruction
	assign M_T_new=(add||sub||ori||lui||sw||beq||jal||jr||orr||slt||sltu||bne||addi||andr||andi||sb||sh||mfhi||mflo||mthi||mtlo)?2'b00:
													 (lw||lb||lh)?2'b01:
													 2'b00;
	
	//siganl for the way to compare----------------------------------------instruction
	assign s_D_cmp=(beq)?`BEQ_CMP:
													(bne)?`BNE_CMP:
													//change
													`BEQ_CMP;
	
	//signal for choosing s_E_data2-----------------------------------------instruction
	assign s_E_data2=(lui||sw||lw||addi||lb||lh||sb||sh)?`DATA2_EXT:
														(ori||andi)?`DATA2_ZERO_EXT:
														`DATA2_RDATA2;
	
	//op for ALU-----------------------------------------instruction
	assign E_op=(add||lw||sw||addi||lb||lh||sb||sh)?`ADD_OP:
										(sub)?`SUB_OP:
										(ori||orr)?`OR_OP:
										(lui)?`LUI_OP:
										(slt)?`SLT_OP:
										(sltu)?`SLTU_OP:
										(andr||andi)?`AND_OP:
										`ADD_OP;
//******************************************************************************************										
	//decide the why how M_EXT extend-----------------------------------------instruction
	assign M_EXT_op=(lb)?`S_BYTE:
													   (lh)?`S_HALFWORD:
													   `NONE;
											
	//used when store-type instruction
	wire [1:0] low;
	assign low=M_adress[1:0];
	wire [3:0] M_byte_data_byteen;
	assign M_byte_data_byteen=(low==2'b00)?`BYTE_1:
																						(low==2'b01)?`BYTE_2:
																						(low==2'b10)?`BYTE_3:
																						(low==2'b11)?`BYTE_4:
																						`BYTE_1;
	wire [3:0] M_half_data_byteen;
	assign M_half_data_byteen=(low==2'b00||low==2'b01)?`HALF_1:
																				(low==2'b10||low==2'b11)?`HALF_2:
																				`HALF_1;
	assign M_data_byteen=(sw)?`WORD:
																		(sb)?M_byte_data_byteen:
																		(sh)?M_half_data_byteen:
																		4'b0;
	
	//pre-process of M_Wdata
	assign M_Wdata=(sw)?M_pre_Wdata:
														(sb&&M_byte_data_byteen==`BYTE_1)?M_pre_Wdata:
														(sb&&M_byte_data_byteen==`BYTE_2)?M_pre_Wdata<<32'd8:
														(sb&&M_byte_data_byteen==`BYTE_3)?M_pre_Wdata<<32'd16:
														(sb&&M_byte_data_byteen==`BYTE_4)?M_pre_Wdata<<32'd24:
														(sh&&M_half_data_byteen==`HALF_1)?M_pre_Wdata:
														(sh&&M_half_data_byteen==`HALF_2)?M_pre_Wdata<<32'd16:
														M_pre_Wdata;
//**********************************************************************************

//##############################################################################################################
	
	//signal for jump------------------------kind
	assign s_D_jump=(b_type)?`JUMP_IMM16:
														(i_jump)?`JUMP_IMM26:
														(r_jump)?`JUMP_RDATA1:
														`JUMP_ADDER;
		
	//special signal for trans----------------------------------------------------kind
	 assign is_SW=s_type;
	 assign is_LW=l_type;
	
	//Wreg-----------------------------------------kind
	assign Wreg=(r_cal||mf_type)?rd:
										(i_cal||l_type)?rt:
										(link)?5'd31:
										5'b0;
	
 //signal for choosing GRF_Wdata---------------------------------------kind
	assign s_GRF_Wdata=(l_type)?`WDATA_RDATA:
																	(link)?`WDATA_ADDER:
																	(mf_type)?`WDATA_HL:
																	(r_cal||i_cal)?`WDATA_ANS:
																	`WDATA_ANS;
	
	//GRF_WE-----------------------------------------kind
	assign GRF_WE=(r_cal||i_cal||l_type||link||mf_type)?1'b1:1'b0;
	
	//DM_WE-----------------------------------------kind
	assign DM_WE=(s_type)?1'b1:1'b0;
	
	//signal for choosing Wreg-----------------------------------------kind
	assign s_W_Wreg=(i_cal||l_type)?`RT:
														(link)?`RA:
														(r_cal)?`RD:
														(mf_type)?`RD:
														`RD;
	
	assign is_md=(md_type||mt_type||mf_type);
endmodule
