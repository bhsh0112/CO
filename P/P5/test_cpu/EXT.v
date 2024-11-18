`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:18 11/17/2022 
// Design Name: 
// Module Name:    EXT 
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
module D_EXT(
    input EXTOp_D,
    input [15:0] imm16_D,
    output reg [31:0] imm32_D
    );
    always @(*) begin
	    case(EXTOp_D)
		    0: imm32_D={16'h0,imm16_D};              // 0 for 0 extend
			  
		    1: imm32_D={{16{imm16_D[15]}},imm16_D};    // 1 for sign extend
			 
			 default: imm32_D=0;
		 endcase
	 end
endmodule
