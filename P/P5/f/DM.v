`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:14:44 11/17/2022 
// Design Name: 
// Module Name:    DM 
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
`define WORD 2'b00
`define HALF 2'b01
`define BYTE 2'b10
module M_DM(
    input clk,
    input reset,
    input MemWrite_M,
    input [31:0] MemAddr_M,
    input [31:0] WDM_M,
	 input [31:0] PC_M,
	 input [1:0] BitWidth_M,
	 input LoadSign_M,
    output reg[31:0] RD_M
    );
	 reg [31:0] RAM [3071:0];
    integer i;
	 initial begin
		 for (i = 0; i < 3072; i = i + 1) RAM[i] = 0;
	 end
	 always@(posedge clk) begin
		if(reset==1) begin
			for (i = 0; i < 3072; i = i + 1) RAM[i] = 0;
		end
		else begin
			if(MemWrite_M==1) begin
				case(BitWidth_M)
				`WORD:begin
				     RAM[MemAddr_M[31:2]] = WDM_M;
					  $display("@%h: *%h <= %h", PC_M, MemAddr_M, WDM_M);
					  end
				`HALF:begin
				      case(MemAddr_M[1])
						0: RAM[MemAddr_M[31:2]][15:0] = WDM_M[15:0];
						1: RAM[MemAddr_M[31:2]][31:16] = WDM_M[15:0];
					   endcase
						$display("@%h: *%h <= %h",  PC_M,{MemAddr_M[31:2],2'b00},RAM[MemAddr_M[31:2]]);
						end
				`BYTE:begin
                  case(MemAddr_M[1:0])
						0: RAM[MemAddr_M[31:2]][7:0] = WDM_M[7:0];
						1: RAM[MemAddr_M[31:2]][15:8] = WDM_M[7:0];
						2: RAM[MemAddr_M[31:2]][23:16] = WDM_M[7:0];
						3: RAM[MemAddr_M[31:2]][31:24] = WDM_M[7:0];
                  endcase			
                  $display("@%h: *%h <= %h",  PC_M,{MemAddr_M[31:2],2'b00},RAM[MemAddr_M[31:2]]);	
                  end						
				endcase
			end
		end
	end
	always@(*) begin
	      case(BitWidth_M)
           	`WORD:
                  RD_M = RAM[MemAddr_M[31:2]];
				`HALF:begin
				      case(MemAddr_M[1])
						0: RD_M[15:0] = RAM[MemAddr_M[31:2]][15:0];
						1: RD_M[15:0] = RAM[MemAddr_M[31:2]][31:16];
					   endcase
						case(LoadSign_M)
						0: RD_M[31:16] = 0;
						1: RD_M[31:16] = {16{RD_M[15]}};
						endcase
						end
				`BYTE:begin
                  case(MemAddr_M[1:0])
						0: RD_M[7:0] = RAM[MemAddr_M[31:2]][7:0];
						1: RD_M[7:0] = RAM[MemAddr_M[31:2]][15:8];
						2: RD_M[7:0] = RAM[MemAddr_M[31:2]][23:16];
						3: RD_M[7:0] = RAM[MemAddr_M[31:2]][31:24];
                  endcase		
						case(LoadSign_M)
						0: RD_M[31:8] = 0;
						1: RD_M[31:8] = {24{RD_M[15]}};
						endcase
						end
        endcase						
	end
endmodule
