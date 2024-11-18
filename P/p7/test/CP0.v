`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:17 12/05/2023 
// Design Name: 
// Module Name:    CP0 
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
`define SR CP[12]
`define CAUSE CP[13]
`define EPC CP[14]

`define IM CP[12][15:10]
`define EXL CP[12][1]
`define IE CP[12][0]
`define BD CP[13][31]
`define IP CP[13][15:10]
`define EXCCODE CP[13][6:2]
module CP0(
    input clk,
    input reset,
    input en,
    input [4:0] CP0Add,
    input [31:0] CP0In,
    output [31:0] CP0Out,
    input [31:0] VPC,
    input BDIn,
    input [4:0] ExcCodeIn,
    input [5:0] HWInt,
    input EXLClr,
    output [31:0] EPCOut,
    output Req
    );
	 //define regs
	 reg [31:0] CP [31:0];
	 
	 //CP0Out
	 assign CP0Out=CP[CP0Add];
	 
	 //EPCOut
	 assign EPCOut=`EPC;
	 
	 integer i;
	 always @(posedge clk) begin
		if(reset) begin
			for(i=0;i<32;i=i+1) CP[i]=32'b0;
		end
		else begin
			//write reg
			if(en) CP[CP0Add]<=CP0In;
			//
			if(Req)begin
				`EXL<=1'b1;
				//EPC
				`EPC<=BDIn?VPC-32'd4:VPC;
				//
				`EXCCODE <= IntReq ? 0 : ExcCodeIn;//interrupt is higher
				`BD<=BDIn;
			end
			if(EXLClr) `EXL<=1'b0;
			`IP<=HWInt;
		end
	 end
	 
	 //Req
	 wire IntReq,ExcReq;
	 assign IntReq = (|(HWInt & `IM)) && !`EXL && `IE; 
    assign ExcReq = (|ExcCodeIn) && (!`EXL); 
	assign Req  = IntReq || ExcReq;
	


endmodule
