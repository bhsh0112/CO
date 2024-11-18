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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P5/test_cpu/NPC.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {14, 0};



static void Cont_33_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4208);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char t19[8];
    char t21[8];
    char t31[8];
    char t35[8];
    char t43[8];
    char t48[8];
    char t49[8];
    char t62[8];
    char t66[8];
    char t79[8];
    char t80[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
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
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t12);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t48, 8);

LAB16:    t101 = (t0 + 4368);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    memcpy(t105, t3, 8);
    xsi_driver_vfirst_trans(t101, 0, 31);
    t106 = (t0 + 4224);
    *((int *)t106) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1208U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t17, 32, t16, 32);
    t20 = ((char*)((ng2)));
    t22 = (t0 + 1688U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 65535U);
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 65535U);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 15);
    t39 = (t38 & 1);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 15);
    t42 = (t41 & 1);
    *((unsigned int *)t33) = t42;
    xsi_vlog_mul_concat(t31, 14, 1, t32, 1U, t35, 1);
    xsi_vlogtype_concat(t19, 32, 32, 3U, t31, 14, t21, 16, t20, 2);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t18, 32, t19, 32);
    goto LAB9;

LAB10:    t50 = (t0 + 2008U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t51 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (~(t52));
    t54 = *((unsigned int *)t51);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t50) != 0)
        goto LAB19;

LAB20:    t58 = (t49 + 4);
    t59 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t58);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB21;

LAB22:    t75 = *((unsigned int *)t49);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t58) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t49) > 0)
        goto LAB27;

LAB28:    memcpy(t48, t79, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t43, 32, t48, 32);
    goto LAB16;

LAB14:    memcpy(t3, t43, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t49) = 1;
    goto LAB20;

LAB19:    t57 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB20;

LAB21:    t63 = ((char*)((ng2)));
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    t64 = (t0 + 2488U);
    t67 = *((char **)t64);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 28);
    *((unsigned int *)t66) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 28);
    *((unsigned int *)t64) = t72;
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 & 15U);
    t74 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t74 & 15U);
    xsi_vlogtype_concat(t62, 32, 32, 3U, t66, 4, t65, 26, t63, 2);
    goto LAB22;

LAB23:    t81 = (t0 + 2168U);
    t82 = *((char **)t81);
    memset(t80, 0, 8);
    t81 = (t82 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t82);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t81) != 0)
        goto LAB32;

LAB33:    t89 = (t80 + 4);
    t90 = *((unsigned int *)t80);
    t91 = *((unsigned int *)t89);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB34;

LAB35:    t95 = *((unsigned int *)t80);
    t96 = (~(t95));
    t97 = *((unsigned int *)t89);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t89) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t80) > 0)
        goto LAB40;

LAB41:    memcpy(t79, t100, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t48, 32, t62, 32, t79, 32);
    goto LAB29;

LAB27:    memcpy(t48, t62, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t80) = 1;
    goto LAB33;

LAB32:    t88 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB33;

LAB34:    t93 = (t0 + 1368U);
    t94 = *((char **)t93);
    goto LAB35;

LAB36:    t93 = (t0 + 1048U);
    t99 = *((char **)t93);
    t93 = ((char*)((ng1)));
    memset(t100, 0, 8);
    xsi_vlog_unsigned_add(t100, 32, t99, 32, t93, 32);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t79, 32, t94, 32, t100, 32);
    goto LAB42;

LAB40:    memcpy(t79, t94, 8);
    goto LAB42;

}


extern void work_m_13086276030769296167_2740441305_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1};
	xsi_register_didat("work_m_13086276030769296167_2740441305", "isim/mips_tb_isim_beh.exe.sim/work/m_13086276030769296167_2740441305.didat");
	xsi_register_executes(pe);
}
