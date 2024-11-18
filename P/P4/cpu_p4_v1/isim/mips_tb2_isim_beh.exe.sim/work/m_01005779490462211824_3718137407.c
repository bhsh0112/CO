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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P4/cpu_p4_v1/MUX_PC_3_1.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {2U, 0U};



static void Always_38_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t10[8];
    char t21[8];
    char t27[8];
    char t76[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
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
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4848);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    t8 = (t0 + 1528U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t8) = t17;
    xsi_vlog_mul_concat(t7, 16, 1, t5, 1U, t10, 1);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t7, 16, t6, 16);
    t18 = (t0 + 3368);
    xsi_vlogvar_assign_value(t18, t4, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 28);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 28);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 15U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 15U);
    xsi_vlogtype_concat(t7, 4, 4, 1U, t10, 4);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t7, 4, t5, 26, t2, 2);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t6 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t6);
    t20 = (t17 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t10, 8);

LAB12:    memset(t7, 0, 8);
    t58 = (t27 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t27);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t58) != 0)
        goto LAB22;

LAB23:    t65 = (t7 + 4);
    t66 = *((unsigned int *)t7);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB24;

LAB25:    t78 = *((unsigned int *)t7);
    t79 = (~(t78));
    t80 = *((unsigned int *)t65);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t65) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t7) > 0)
        goto LAB30;

LAB31:    memcpy(t4, t84, 8);

LAB32:    t85 = (t0 + 2888);
    xsi_vlogvar_assign_value(t85, t4, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t2) != 0)
        goto LAB35;

LAB36:    t6 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    t20 = (t17 || t19);
    if (t20 > 0)
        goto LAB37;

LAB38:    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t6) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t7) > 0)
        goto LAB43;

LAB44:    memcpy(t4, t32, 8);

LAB45:    t40 = (t0 + 3048);
    xsi_vlogvar_assign_value(t40, t4, 0, 0, 32);
    goto LAB2;

LAB6:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB8:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB10:    t8 = (t0 + 1848U);
    t9 = *((char **)t8);
    memset(t21, 0, 8);
    t8 = (t9 + 4);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t8) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t21);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t18 = (t10 + 4);
    t31 = (t21 + 4);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    t11 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t27);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t27) = (t38 | t39);
    t40 = (t10 + 4);
    t41 = (t21 + 4);
    t42 = *((unsigned int *)t10);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t56 & t52);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    goto LAB19;

LAB20:    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB22:    t64 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB23;

LAB24:    t69 = (t0 + 2728);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t0 + 3368);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng4)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_lshift(t76, 32, t74, 32, t75, 2);
    memset(t77, 0, 8);
    xsi_vlog_unsigned_add(t77, 32, t71, 32, t76, 32);
    goto LAB25;

LAB26:    t82 = (t0 + 2728);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t4, 32, t77, 32, t84, 32);
    goto LAB32;

LAB30:    memcpy(t4, t77, 8);
    goto LAB32;

LAB33:    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB35:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB36;

LAB37:    t8 = (t0 + 3208);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    goto LAB38;

LAB39:    t18 = (t0 + 2888);
    t31 = (t18 + 56U);
    t32 = *((char **)t31);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t4, 32, t11, 32, t32, 32);
    goto LAB45;

LAB43:    memcpy(t4, t11, 8);
    goto LAB45;

}

static void Cont_46_1(char *t0)
{
    char t3[8];
    char t4[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2168U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 4944);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 4864);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 3048);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}


extern void work_m_01005779490462211824_3718137407_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Cont_46_1};
	xsi_register_didat("work_m_01005779490462211824_3718137407", "isim/mips_tb2_isim_beh.exe.sim/work/m_01005779490462211824_3718137407.didat");
	xsi_register_executes(pe);
}
