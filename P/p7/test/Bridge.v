`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:30 12/06/2023 
// Design Name: 
// Module Name:    Bridge 
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
`define DM (32'h0<=b_adress)&&(b_adress<=32'h2fff)
`define IM (32'h3000<=b_adress)&&(b_adress<=32'h6fff)
`define PC b_adress==32'h3000
`define EXC b_adress==32'h4180
`define T1 (b_adress>=32'h7f00)&&(b_adress<=32'h7f0b)
`define T2 (b_adress>=32'h7f10)&&(b_adress<=32'h7f1b)
`define INTERRUPT (b_adress>=32'h7f20)&&(b_adress<=32'h7f23)&&(|b_byteen)
module Bridge(
	//cpu<=>bridge
    input [31:0] b_adress,
    input [31:0] b_Wdata,
    input [3:0] b_byteen,
	 input [31:0] b_pc,
	 output [31:0] b_Rdata,
	 //DM<=>bridge
	 input [31:0] DM_Rdata,
	 output [31:0] DM_pc,
    output [31:0] DM_adress,
    output [31:0] DM_Wdata,
    output [3:0] DM_byteen,
	 //T1<=>bridge
	 input [31:0] T1_out,
	 output [31:0] T1_in,
	 output [31:2] T1_adress,
	 output T1_WE,
	 //T2<=>bridge
	 input [31:0] T2_out,
	 output [31:0] T2_in,
	 output [31:2] T2_adress,
	 output T2_WE,
	 //interrup<=bridge
	 output [31:0] m_int_addr,
	 output [3:0] m_int_byteen,
	 //HWInt
	 input interrupt,
	 input T1_IRQ,
	 input T2_IRQ,
	 output [5:0] HWInt
    );
	 //WE
	assign DM_byteen=(`DM)?b_byteen:0;
	assign m_int_byteen=(`INTERRUPT)?b_byteen:0;
	assign T1_WE=(`T1);
	assign T2_WE=(`T2);
	
	//pc
	assign DM_pc=b_pc;
	
	//adress
	assign DM_adress=b_adress;
	assign T1_adress=b_adress[29:0];
	assign T2_adress=b_adress[29:0];
	assign m_int_addr=(`INTERRUPT)?b_adress:0;
	
	//Wdata
	assign DM_Wdata=b_Wdata;
	assign T1_in=b_Wdata;
	assign T2_in=b_Wdata;
	
	//Rdata
	assign b_Rdata=DM_Rdata;
	
	assign HWInt={3'b0,interrupt,T2_IRQ,T1_IRQ};
	

endmodule
