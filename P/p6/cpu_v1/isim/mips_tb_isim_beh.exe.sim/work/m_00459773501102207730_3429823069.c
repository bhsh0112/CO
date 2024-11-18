/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/co-eda/Desktop/homework/P/p6/cpu_v1/E_MUX_data2_3_1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {2U, 0U};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t69[8];
    char t72[8];
    char t75[8];
    char t87[8];
    char t88[8];
    char t91[8];
    char t118[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t125 = (t0 + 3080);
    t127 = (t125 + 56U);
    t128 = *((char **)t127);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    memcpy(t130, t3, 8);
    xsi_driver_vfirst_trans(t125, 0, 31);
    t131 = (t0 + 3000);
    *((int *)t131) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1368U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t83 = *((unsigned int *)t40);
    t84 = (~(t83));
    t85 = *((unsigned int *)t65);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t87, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t70 = (t0 + 1208U);
    t71 = *((char **)t70);
    t70 = ((char*)((ng3)));
    t73 = (t0 + 1208U);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    t73 = (t75 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 15);
    t79 = (t78 & 1);
    *((unsigned int *)t75) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 15);
    t82 = (t81 & 1);
    *((unsigned int *)t73) = t82;
    xsi_vlog_mul_concat(t72, 16, 1, t70, 1U, t75, 1);
    xsi_vlogtype_concat(t69, 32, 32, 2U, t72, 16, t71, 16);
    goto LAB30;

LAB31:    t89 = (t0 + 1368U);
    t90 = *((char **)t89);
    t89 = ((char*)((ng4)));
    memset(t91, 0, 8);
    t92 = (t90 + 4);
    t93 = (t89 + 4);
    t94 = *((unsigned int *)t90);
    t95 = *((unsigned int *)t89);
    t96 = (t94 ^ t95);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = (t96 | t99);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t93);
    t103 = (t101 | t102);
    t104 = (~(t103));
    t105 = (t100 & t104);
    if (t105 != 0)
        goto LAB41;

LAB38:    if (t103 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t91) = 1;

LAB41:    memset(t88, 0, 8);
    t107 = (t91 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t91);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t107) != 0)
        goto LAB44;

LAB45:    t114 = (t88 + 4);
    t115 = *((unsigned int *)t88);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB46;

LAB47:    t121 = *((unsigned int *)t88);
    t122 = (~(t121));
    t123 = *((unsigned int *)t114);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t114) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t88) > 0)
        goto LAB52;

LAB53:    memcpy(t87, t126, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t69, 32, t87, 32);
    goto LAB37;

LAB35:    memcpy(t39, t69, 8);
    goto LAB37;

LAB40:    t106 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t88) = 1;
    goto LAB45;

LAB44:    t113 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB45;

LAB46:    t119 = (t0 + 1208U);
    t120 = *((char **)t119);
    t119 = ((char*)((ng1)));
    xsi_vlogtype_concat(t118, 32, 32, 2U, t119, 16, t120, 16);
    goto LAB47;

LAB48:    t125 = (t0 + 1048U);
    t126 = *((char **)t125);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t87, 32, t118, 32, t126, 32);
    goto LAB54;

LAB52:    memcpy(t87, t118, 8);
    goto LAB54;

}


extern void work_m_00459773501102207730_3429823069_init()
{
	static char *pe[] = {(void *)Cont_31_0};
	xsi_register_didat("work_m_00459773501102207730_3429823069", "isim/mips_tb_isim_beh.exe.sim/work/m_00459773501102207730_3429823069.didat");
	xsi_register_executes(pe);
}
