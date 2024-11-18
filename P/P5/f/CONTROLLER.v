`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:09:20 11/17/2022 
// Design Name: 
// Module Name:    CONTROLLER 
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
module CONTROLLER(
    input [31:0] instr,
	 output [4:0] rs,
	 output [4:0] rt,
	 output [15:0] imm16,
	 output [25:0] imm26,
	 output Branch,            //FOR NPC
	 output JImm,
	 output JReg,
	 output EXTOp,             //FOR EXT
	 output RegWrite,       	//FOR GRF
	 output [1:0] WDOp,          
	 output [4:0] A3,
	 output [2:0] BranchType,  //FOR CMP
	 output ALUASrc,           //FOR ALU         
	 output ALUBSrc,
	 output [4:0] ALUOp,       
	 output MemWrite,          //FOR DM
	 output [1:0] BitWidth,    
	 output LoadSign,
	 output NEW,               //FOR NEW_SIGN
	 
	 output load,              //instr Type
	 output store,
	 output calr,
	 output cali
    );
	 // op and funct
	 wire [5:0] op;
	 wire [5:0] funct;
	 wire [4:0] rd;
	 // output
	 assign op = instr[31:26];
	 assign funct = instr[5:0];
	 assign rs = instr[25:21];
	 assign rt = instr[20:16];
	 assign rd = instr[15:11];
	 assign imm16 = instr[15:0];
	 assign imm26 = instr[25:0];
	 
    wire add,sub,ori,lui,lw,lh,lb,sw,sh,sb,beq,jal,jr;
	 
	 // R - R type 
	 assign add  = (op == 6'b000000)&(funct == 6'b100000);
	 assign sub  = (op == 6'b000000)&(funct == 6'b100010);	 
	 
	 // R - I type
	 assign lui  = (op == 6'b001111);
	 assign ori  = (op == 6'b001101);
	 
	 // S - L type
	 assign lw = (op == 6'b100011);
	 assign lh = (op == 6'b100001);
	 assign lb = (op == 6'b100000);
	 assign sw = (op == 6'b101011);
	 assign sh = (op == 6'b101001);
	 assign sb = (op == 6'b101000);

	 // B type
	 assign beq = (op == 6'b000100);

    // J type
	 assign jal = (op == 6'b000011);
	 assign jr  = (op == 6'b000000)&(funct == 6'b001000);
	 
	 
	 // instr type
	 assign Branch = beq;
	 assign load  = lw || lh || lb;
	 assign store = sw || sh || sb;
	 assign calr = add || sub ;
	 assign cali = ori || lui ;
	 assign JImm = jal;
	 assign JReg = jr;
     

    assign EXTOp = load || store ; 
	 
	 assign BranchType = beq ? 3'd1 :
	                           3'd0 ;
	 
	 assign RegWrite = load || calr || cali || jal;
	 
	 assign A3 =         calr ?       rd :
	             cali || load ?       rt :
					         jal  ? 5'b11111 :
                               5'b00000 ;

	 assign WDOp =        jal      ? 2'd0 :
	                 (calr || cali)? 2'd1 :
								 load     ? 2'd2 :
								            2'd3 ;
	 
	 
	 assign ALUASrc = 0;
	 assign ALUBSrc = cali || load || store;
	 
	 assign ALUOp = add ? 5'd0 :
	                sub ? 5'd1 :
						 ori ? 5'd3 :
						 lui ? 5'd4 :
						       5'd0 ;
	 assign MemWrite = sw || sh || sb;
	 assign BitWidth = (lw || sw) ? 2'd0 :
	                   (lh || sh) ? 2'd1 :
							 (lb || sb) ? 2'd2 :
							              2'd0 ;
	  
	 assign LoadSign = lh || lb ;
	 
	 assign NEW = 0;
	 
endmodule

