`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:46 11/17/2022 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	 
	 //instr_Define
	 wire [31:0] instr_F;
	 wire [31:0] instr_D;
	 wire [31:0] instr_E;
	 wire [31:0] instr_M;
	 wire [31:0] instr_W;
    
	 //PC_Define
	 wire [31:0] PC_F;
	 wire [31:0] PC_D;
	 wire [31:0] PC_E;
	 wire [31:0] PC_M;
	 wire [31:0] PC_W;
	 
	 //FOR D NEED
	 
	 //IN REG
	 wire [4:0] rs_D;
	 wire [4:0] rt_D;
	 wire [15:0] imm16_D;
	 wire [25:0] imm26_D;
	 wire Branch_D;
	 wire JImm_D;
	 wire JReg_D;
	 wire EXTOp_D;
	 wire [1:0] WDOp_D;
	 wire [2:0] BranchType_D;
	 
	 //EXT
	 wire [31:0] imm32_D;
	 
	 //GRF
    wire [31:0] RD1_D;
	 wire [31:0] RD2_D;
	 
	 //CMP
	 wire OK;
	 	 
    //FOR E NEED
	 
	 //IN REG
	 wire [31:0] RD1_E;
	 wire [31:0] RD2_E;
	 wire [31:0] imm32_E;
	 
	 //IN CONTROLLER
	 wire [4:0] rs_E;
	 wire [4:0] rt_E;
	 
	 //ALU
	 wire ALUSrcA;
	 wire ALUSrcB;
	 wire [4:0]ALUOp_E;
	 wire [31:0] res_E;
	 wire [31:0] SrcA_E;
	 wire [31:0] SrcB_E;
    
	 //FOR M NEED
	 
	 //IN REG
	 wire [31:0] res_M;
	 wire [31:0] RD2_M;
	 
	 //IN CONTROLLER
	 wire [4:0] rt_M;
	 wire MemWrite_M; 
    wire [1:0] BitWidth_M; 
    wire LoadSign_M;
	 
	 wire [31:0] DM_OUT_M;
	 
	 //FOR W NEED
	
	 //IN REG
	 wire [31:0] res_W;
	 wire [31:0] DM_OUT_W;
	 
	 
	 
	 wire [31:0] NPC_F;
	 wire stallsig;
	 //stall module	 
	 stall stall (
    .instr_D(instr_D), 
    .instr_E(instr_E), 
    .instr_M(instr_M), 
    .stall(stallsig)
    );
	 
	 //PC module
	 F_PC F_PC (
    .clk(clk), 
	 .reset(reset),
    .WE(!stallsig),              //stall freeze PC
    .NPC_F(NPC_F), 
    .PC_F(PC_F)
    );	 
	 
	 //IM module
	 F_IM F_IM (
    .PC_F(PC_F), 
	 .clear(1'b0),                //clear delay
    .instr_F(instr_F)
    );
	 
	 //F TO D;
	 F_D F_D (
    .clk(clk), 
    .reset(reset),       
    .WE(!stallsig),                   //stall
    .PC_F(PC_F), 
    .instr_F(instr_F), 
    .PC_D(PC_D), 
    .instr_D(instr_D)
    );
	 
	 //D CONTROLLER
	 CONTROLLER D_CONTROLLER (
    .instr(instr_D), 
    .rs(rs_D), 
    .rt(rt_D), 
    .imm16(imm16_D), 
    .imm26(imm26_D), 
    .Branch(Branch_D), 
    .JImm(JImm_D), 
    .JReg(JReg_D), 
    .EXTOp(EXTOp_D), 
    .WDOp(WDOp_D), 
    .BranchType(BranchType_D)
    );
	 
	 wire RegWrite_E,RegWrite_M,RegWrite_W;
	 wire [1:0] WDOp_E,WDOp_M,WDOp_W;
	 wire [4:0] A3_E,A3_M,A3_W;
    wire [31:0] WD_E = (WDOp_E == 2'b00) ? PC_E + 8 : 
	                                           32'd0 ;
															 
	 wire [31:0] WD_M = (WDOp_M == 2'b00) ? PC_M + 8 :
	                    (WDOp_M == 2'b01) ?    res_M :
                                              32'd0 ;							  
	                     
	 wire [31:0] WD_W = (WDOp_W == 2'b00) ? PC_W + 8 :
	                    (WDOp_W == 2'b01) ?    res_W :
							  (WDOp_W == 2'b10) ? DM_OUT_W :
							                         32'd0 ; 
	 D_GRF D_GRF (
    .clk(clk), 
    .reset(reset), 
    .RegWrite_W(RegWrite_W), 
    .rs_D(rs_D), 
    .rt_D(rt_D), 
    .A3_W(A3_W), 
    .WD_W(WD_W), 
    .PC_W(PC_W), 
    .RD1_D(RD1_D), 
    .RD2_D(RD2_D)
    );
	 
	 wire [31:0] FWD_RD1_D = (rs_D == 0) ? 0 :
                            (rs_D == A3_E) ?  WD_E :
                            (rs_D == A3_M) ?  WD_M :
                             RD1_D;									 
	 
	 
	 wire [31:0] FWD_RD2_D = (rt_D == 0) ? 0 :
                            (rt_D == A3_E) ?  WD_E :
                            (rt_D == A3_M) ?  WD_M :
                             RD2_D;				
	 D_EXT D_EXT (
    .EXTOp_D(EXTOp_D), 
    .imm16_D(imm16_D), 
    .imm32_D(imm32_D)
    );
	 
	 D_CMP D_CMP (
    .A(FWD_RD1_D), 
    .B(FWD_RD2_D), 
    .BranchType(BranchType_D), 
    .OK(OK)
    );
	 
    //NPC module 
	 F_NPC F_NPC (
    .PC_F(PC_F), 
    .PC_D(PC_D), 
    .RD1_D(FWD_RD1_D), 
    .imm26_D(imm26_D), 
    .imm16_D(imm16_D), 
    .Branch_D(Branch_D & OK), 
    .JImm_D(JImm_D), 
    .JReg_D(JReg_D), 
    .NPC_F(NPC_F)
    );
	 
    D_E D_E (
    .clk(clk), 
    .reset(reset || stallsig), //nop
    .WE(1'b1),                 //stall
    .PC_D(PC_D), 
    .instr_D(instr_D), 
    .imm32_D(imm32_D), 
    .FWD_RD1_D(FWD_RD1_D), 
    .FWD_RD2_D(FWD_RD2_D), 
    .PC_E(PC_E), 
    .instr_E(instr_E), 
    .imm32_E(imm32_E), 
    .RD1_E(RD1_E), 
    .RD2_E(RD2_E)
    );
	
	 CONTROLLER E_CONTROLLER (
    .instr(instr_E), 
    .rs(rs_E), 
    .rt(rt_E), 
    .RegWrite(RegWrite_E), 
    .WDOp(WDOp_E), 
    .A3(A3_E), 
    .ALUASrc(ALUASrc), 
    .ALUBSrc(ALUBSrc), 
    .ALUOp(ALUOp_E)
    );
	 wire [31:0] FWD_RD1_E = (rs_E == 0) ? 0 :
                            (rs_E == A3_M) ?  WD_M :
                            (rs_E == A3_W) ?  WD_W :
                             RD1_E;									 
	 
	 
	 wire [31:0] FWD_RD2_E = (rt_E == 0) ? 0 :
                            (rt_E == A3_M) ?  WD_M :
                            (rt_E == A3_W) ?  WD_W :
                             RD2_E;
									  
    assign SrcA_E = FWD_RD1_E;
	 
	 assign SrcB_E = ALUBSrc ? imm32_E : FWD_RD2_E;
	 
	 E_ALU E_ALU (
    .ALUOp_E(ALUOp_E), 
    .SrcA_E(SrcA_E), 
    .SrcB_E(SrcB_E), 
    .ALUResult_E(res_E)
    );
	 
	 E_M E_M (
    .clk(clk), 
    .reset(reset), 
    .PC_E(PC_E), 
    .instr_E(instr_E), 
    .res_E(res_E), 
    .FWD_RD2_E(FWD_RD2_E), 
    .PC_M(PC_M), 
    .instr_M(instr_M), 
    .res_M(res_M), 
    .RD2_M(RD2_M)
    );
	 
	 CONTROLLER M_CONTROLLER (
    .instr(instr_M), 
    .rt(rt_M), 
    .RegWrite(RegWrite_M), 
    .WDOp(WDOp_M), 
    .A3(A3_M), 
    .MemWrite(MemWrite_M), 
    .BitWidth(BitWidth_M), 
    .LoadSign(LoadSign_M)
    );
    wire [31:0] FWD_RD2_M =    (rt_M == 0) ?    0  :
                            (rt_M == A3_W) ?  WD_W : 
								                     RD2_M ;
	 M_DM M_DM (
    .clk(clk), 
    .reset(reset), 
    .MemWrite_M(MemWrite_M), 
    .MemAddr_M(res_M), 
    .WDM_M(FWD_RD2_M), 
    .PC_M(PC_M), 
    .BitWidth_M(BitWidth_M), 
    .LoadSign_M(LoadSign_M), 
    .RD_M(DM_OUT_M) 
    );
	 
	 
	 M_W M_W (
    .clk(clk), 
    .reset(reset), 
    .PC_M(PC_M), 
    .instr_M(instr_M), 
    .res_M(res_M), 
    .DM_OUT_M(DM_OUT_M), 
    .PC_W(PC_W), 
    .instr_W(instr_W), 
    .res_W(res_W), 
    .DM_OUT_W(DM_OUT_W)
    );
	 
    CONTROLLER W_CONTROLLER (
    .instr(instr_W), 
    .RegWrite(RegWrite_W), 
    .WDOp(WDOp_W), 
    .A3(A3_W)
    );
endmodule
