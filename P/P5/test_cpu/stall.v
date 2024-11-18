`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:13:30 11/20/2022 
// Design Name: 
// Module Name:    stall 
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
module stall(
    input [31:0] instr_D,
    input [31:0] instr_E,
    input [31:0] instr_M,
    output stall
    );
	 wire load_D,calr_D,cali_D,Branch_D,JReg_D;
	 wire [4:0] rs_D;
	 wire [4:0] rt_D;
	 
	 CONTROLLER D (
    .instr(instr_D), 
    .rs(rs_D), 
    .rt(rt_D),
    .Branch(Branch_D),
    .JReg(JReg_D),	 
    .load(load_D), 
    .store(store_D), 
    .calr(calr_D), 
    .cali(cali_D)
    );
	 
	 wire load_E,calr_E,cali_E;
	 wire [4:0] A3_E;
	 
	 CONTROLLER E (
    .instr(instr_E), 
    .load(load_E), 
    .calr(calr_E), 
    .cali(cali_E),
	 .A3(A3_E)
    );
	 
	 wire load_M;
	 wire [4:0] A3_M;
	
	 CONTROLLER M (
    .instr(instr_M), 
    .load(load_M), 
	 .A3(A3_M)
    );
	 
	 wire [1:0] TuseRS = (Branch_D || JReg_D)                    ? 2'd0 :
								(load_D || store_D || calr_D || cali_D) ? 2'd1 :
                       								                     2'd3 ;
																						
	 wire [1:0] TuseRT =  Branch_D ? 2'd0 :
								   calr_D ? 2'd1 :
                           load_D ? 2'd2 :
   											2'd3 ;
	
	 wire [1:0] Tnew_E =  calr_E || cali_E ? 2'd1 :
	                                load_E ? 2'd2 : 
											           2'd0 ;
	 
	 
	 wire [1:0] Tnew_M =  load_M ? 2'd1 :
	                               2'd0 ;
											 
	 wire stall_rs_E = (TuseRS < Tnew_E) && rs_D && (rs_D == A3_E);
	 
	 wire stall_rs_M = (TuseRS < Tnew_M) && rs_D && (rs_D == A3_M);
	 
    wire stall_rt_E = (TuseRT < Tnew_E) && rt_D &&	(rt_D == A3_E);

    wire stall_rt_M = (TuseRT < Tnew_M) && rt_D && (rt_D == A3_M);

    assign stall = stall_rs_E || stall_rs_M || stall_rt_E ||  stall_rt_M ;
	 
endmodule
