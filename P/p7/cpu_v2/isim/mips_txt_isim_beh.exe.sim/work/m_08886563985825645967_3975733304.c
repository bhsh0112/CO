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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/p7/cpu_v2/CP0.v";
static int ng1[] = {14, 0};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {12, 0};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {13, 0};
static int ng10[] = {6, 0};
static int ng11[] = {2, 0};
static int ng12[] = {31, 0};
static int ng13[] = {15, 0};
static int ng14[] = {10, 0};



static void Cont_50_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 6480);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 6320);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_53_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6544);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 6336);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_56_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t54[8];
    char t59[8];
    char t60[8];
    char t70[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t72;
    char *t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6352);
    *((int *)t2) = 1;
    t3 = (t0 + 5288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(60, ng0);

LAB15:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t2) != 0)
        goto LAB74;

LAB75:    t5 = (t13 + 4);
    t27 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t5);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB76;

LAB77:    memcpy(t54, t13, 8);

LAB78:    t26 = (t54 + 4);
    t96 = *((unsigned int *)t26);
    t97 = (~(t96));
    t98 = *((unsigned int *)t54);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(77, ng0);

LAB94:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t0 + 3688);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng13)));
    t23 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t16, t54, t59, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t28 = (!(t6));
    t25 = (t15 + 4);
    t7 = *((unsigned int *)t25);
    t31 = (!(t7));
    t32 = (t28 && t31);
    t26 = (t16 + 4);
    t8 = *((unsigned int *)t26);
    t35 = (!(t8));
    t36 = (t32 && t35);
    t29 = (t54 + 4);
    t9 = *((unsigned int *)t29);
    t38 = (!(t9));
    t72 = (t36 && t38);
    t61 = (t59 + 4);
    t10 = *((unsigned int *)t61);
    t74 = (!(t10));
    t75 = (t72 && t74);
    if (t75 == 1)
        goto LAB95;

LAB96:
LAB92:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3848);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(58, ng0);
    t12 = ((char*)((ng4)));
    t14 = (t0 + 3688);
    t17 = (t0 + 3688);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3688);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3848);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3848);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB13:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB14;

LAB16:    xsi_set_current_line(62, ng0);

LAB19:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3688);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1528U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t21, 5, 2);
    t20 = (t13 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (!(t27));
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    goto LAB18;

LAB20:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t15);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB21;

LAB22:    xsi_set_current_line(66, ng0);

LAB25:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3688);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t20, 32, 1);
    t21 = (t0 + 3688);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t16, t23, 2, t24, 32, 1);
    t25 = (t13 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (!(t27));
    t26 = (t15 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (!(t30));
    t32 = (t28 && t31);
    t29 = (t16 + 4);
    t33 = *((unsigned int *)t29);
    t35 = (!(t33));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t39 = (~(t37));
    t40 = (t30 & t39);
    if (t40 != 0)
        goto LAB29;

LAB28:    if (t37 != 0)
        goto LAB30;

LAB31:    t12 = (t13 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t2) != 0)
        goto LAB52;

LAB53:    t5 = (t15 + 4);
    t27 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t5);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB54;

LAB55:    t34 = *((unsigned int *)t15);
    t37 = (~(t34));
    t39 = *((unsigned int *)t5);
    t40 = (t37 || t39);
    if (t40 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t5) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t15) > 0)
        goto LAB60;

LAB61:    memcpy(t13, t16, 8);

LAB62:    t12 = (t0 + 3688);
    t17 = (t0 + 3688);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3688);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t54, t59, t19, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 3688);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng10)));
    t61 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t60, t70, t71, ((int*)(t26)), 2, t29, 32, 1, t61, 32, 1);
    t62 = (t54 + 4);
    t41 = *((unsigned int *)t62);
    t28 = (!(t41));
    t63 = (t59 + 4);
    t42 = *((unsigned int *)t63);
    t31 = (!(t42));
    t32 = (t28 && t31);
    t64 = (t60 + 4);
    t43 = *((unsigned int *)t64);
    t35 = (!(t43));
    t36 = (t32 && t35);
    t66 = (t70 + 4);
    t44 = *((unsigned int *)t66);
    t38 = (!(t44));
    t72 = (t36 && t38);
    t73 = (t71 + 4);
    t45 = *((unsigned int *)t73);
    t74 = (!(t45));
    t75 = (t72 && t74);
    if (t75 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3688);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t0 + 3688);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t16, t21, 2, t22, 32, 1);
    t23 = (t13 + 4);
    t6 = *((unsigned int *)t23);
    t28 = (!(t6));
    t24 = (t15 + 4);
    t7 = *((unsigned int *)t24);
    t31 = (!(t7));
    t32 = (t28 && t31);
    t25 = (t16 + 4);
    t8 = *((unsigned int *)t25);
    t35 = (!(t8));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB65;

LAB66:    goto LAB24;

LAB26:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t34 + t37);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, t38, 1, 0LL);
    goto LAB27;

LAB29:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB30:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(69, ng0);
    t14 = (t0 + 2168U);
    t17 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t17 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t17);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t14) != 0)
        goto LAB37;

LAB38:    t19 = (t16 + 4);
    t51 = *((unsigned int *)t16);
    t52 = *((unsigned int *)t19);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB39;

LAB40:    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t19);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t19) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t16) > 0)
        goto LAB45;

LAB46:    memcpy(t15, t23, 8);

LAB47:    t22 = (t0 + 3688);
    t24 = (t0 + 3688);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 3688);
    t61 = (t29 + 64U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t59, t60, t26, t62, 2, 1, t63, 32, 1);
    t64 = (t59 + 4);
    t65 = *((unsigned int *)t64);
    t28 = (!(t65));
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t66);
    t31 = (!(t67));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB48;

LAB49:    goto LAB34;

LAB35:    *((unsigned int *)t16) = 1;
    goto LAB38;

LAB37:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB38;

LAB39:    t20 = (t0 + 2008U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng8)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_minus(t54, 32, t21, 32, t20, 32);
    goto LAB40;

LAB41:    t22 = (t0 + 2008U);
    t23 = *((char **)t22);
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t15, 32, t54, 32, t23, 32);
    goto LAB47;

LAB45:    memcpy(t15, t54, 8);
    goto LAB47;

LAB48:    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t60);
    t35 = (t68 - t69);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t22, t15, 0, *((unsigned int *)t60), t36, 0LL);
    goto LAB49;

LAB50:    *((unsigned int *)t15) = 1;
    goto LAB53;

LAB52:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB54:    t11 = ((char*)((ng2)));
    goto LAB55;

LAB56:    t12 = (t0 + 2328U);
    t14 = *((char **)t12);
    memcpy(t16, t14, 8);
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t13, 32, t11, 32, t16, 32);
    goto LAB62;

LAB60:    memcpy(t13, t11, 8);
    goto LAB62;

LAB63:    t46 = *((unsigned int *)t71);
    t76 = (t46 + 0);
    t47 = *((unsigned int *)t59);
    t48 = *((unsigned int *)t70);
    t77 = (t47 + t48);
    t49 = *((unsigned int *)t60);
    t50 = *((unsigned int *)t70);
    t78 = (t49 - t50);
    t79 = (t78 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t76, t77, t79, 0LL);
    goto LAB64;

LAB65:    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t38 = (t9 + t10);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, t38, 1, 0LL);
    goto LAB66;

LAB67:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3688);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t20, 32, 1);
    t21 = (t0 + 3688);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t16, t23, 2, t24, 32, 1);
    t25 = (t13 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (!(t27));
    t26 = (t15 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (!(t30));
    t32 = (t28 && t31);
    t29 = (t16 + 4);
    t33 = *((unsigned int *)t29);
    t35 = (!(t33));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB70;

LAB71:    goto LAB69;

LAB70:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t34 + t37);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, t38, 1, 0LL);
    goto LAB71;

LAB72:    *((unsigned int *)t13) = 1;
    goto LAB75;

LAB74:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB75;

LAB76:    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t14 = (t12 + 4);
    t17 = (t11 + 4);
    t34 = *((unsigned int *)t12);
    t37 = *((unsigned int *)t11);
    t39 = (t34 ^ t37);
    t40 = *((unsigned int *)t14);
    t41 = *((unsigned int *)t17);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t17);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB82;

LAB79:    if (t46 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t15) = 1;

LAB82:    memset(t16, 0, 8);
    t19 = (t15 + 4);
    t49 = *((unsigned int *)t19);
    t50 = (~(t49));
    t51 = *((unsigned int *)t15);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t19) != 0)
        goto LAB85;

LAB86:    t55 = *((unsigned int *)t13);
    t56 = *((unsigned int *)t16);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t21 = (t13 + 4);
    t22 = (t16 + 4);
    t23 = (t54 + 4);
    t58 = *((unsigned int *)t21);
    t65 = *((unsigned int *)t22);
    t67 = (t58 | t65);
    *((unsigned int *)t23) = t67;
    t68 = *((unsigned int *)t23);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB78;

LAB81:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t16) = 1;
    goto LAB86;

LAB85:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB86;

LAB87:    t80 = *((unsigned int *)t54);
    t81 = *((unsigned int *)t23);
    *((unsigned int *)t54) = (t80 | t81);
    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t82 = *((unsigned int *)t13);
    t83 = (~(t82));
    t84 = *((unsigned int *)t24);
    t85 = (~(t84));
    t86 = *((unsigned int *)t16);
    t87 = (~(t86));
    t88 = *((unsigned int *)t25);
    t89 = (~(t88));
    t28 = (t83 & t85);
    t31 = (t87 & t89);
    t90 = (~(t28));
    t91 = (~(t31));
    t92 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t92 & t90);
    t93 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t93 & t91);
    t94 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t94 & t90);
    t95 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t95 & t91);
    goto LAB89;

LAB90:    xsi_set_current_line(75, ng0);

LAB93:    goto LAB92;

LAB95:    t27 = *((unsigned int *)t59);
    t76 = (t27 + 0);
    t30 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t54);
    t77 = (t30 + t33);
    t34 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t54);
    t78 = (t34 - t37);
    t79 = (t78 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t76, t77, t79, 0LL);
    goto LAB96;

}

static void Cont_85_3(char *t0)
{
    char t3[8];
    char t7[8];
    char t15[8];
    char t24[8];
    char t63[8];
    char t75[8];
    char t79[8];
    char t87[8];
    char t99[8];
    char t107[8];
    char t139[8];
    char t154[8];
    char t162[8];
    char t167[8];
    char t175[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    int t199;
    int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 3688);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 3688);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3688);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 32, 1);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 10);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 10);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 63U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 63U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t15);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t15 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 & 63U);
    if (t61 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t56) != 0)
        goto LAB9;

LAB10:    memset(t63, 0, 8);
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t3);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t64) != 0)
        goto LAB13;

LAB14:    t71 = (t63 + 4);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB15;

LAB16:    memcpy(t107, t63, 8);

LAB17:    memset(t139, 0, 8);
    t140 = (t107 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t107);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t140) != 0)
        goto LAB31;

LAB32:    t147 = (t139 + 4);
    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t147);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB33;

LAB34:    memcpy(t175, t139, 8);

LAB35:    t207 = (t0 + 6608);
    t208 = (t207 + 56U);
    t209 = *((char **)t208);
    t210 = (t209 + 56U);
    t211 = *((char **)t210);
    memset(t211, 0, 8);
    t212 = 1U;
    t213 = t212;
    t214 = (t175 + 4);
    t215 = *((unsigned int *)t175);
    t212 = (t212 & t215);
    t216 = *((unsigned int *)t214);
    t213 = (t213 & t216);
    t217 = (t211 + 4);
    t218 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t218 | t212);
    t219 = *((unsigned int *)t217);
    *((unsigned int *)t217) = (t219 | t213);
    xsi_driver_vfirst_trans(t207, 0, 0);
    t220 = (t0 + 6368);
    *((int *)t220) = 1;

LAB1:    return;
LAB4:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t15 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t62 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t63) = 1;
    goto LAB14;

LAB13:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB14;

LAB15:    t76 = (t0 + 3688);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t80 = (t0 + 3688);
    t81 = (t80 + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 3688);
    t84 = (t83 + 64U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t79, 32, t78, t82, t85, 2, 1, t86, 32, 1);
    t88 = (t0 + 3688);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t87, 1, t79, t90, 2, t91, 32, 1);
    memset(t75, 0, 8);
    t92 = (t87 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t87);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t92) == 0)
        goto LAB18;

LAB20:    t98 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t98) = 1;

LAB21:    memset(t99, 0, 8);
    t100 = (t75 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t75);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t100) != 0)
        goto LAB24;

LAB25:    t108 = *((unsigned int *)t63);
    t109 = *((unsigned int *)t99);
    t110 = (t108 & t109);
    *((unsigned int *)t107) = t110;
    t111 = (t63 + 4);
    t112 = (t99 + 4);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t112);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB18:    *((unsigned int *)t75) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t99) = 1;
    goto LAB25;

LAB24:    t106 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB25;

LAB26:    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t107) = (t119 | t120);
    t121 = (t63 + 4);
    t122 = (t99 + 4);
    t123 = *((unsigned int *)t63);
    t124 = (~(t123));
    t125 = *((unsigned int *)t121);
    t126 = (~(t125));
    t127 = *((unsigned int *)t99);
    t128 = (~(t127));
    t129 = *((unsigned int *)t122);
    t130 = (~(t129));
    t131 = (t124 & t126);
    t132 = (t128 & t130);
    t133 = (~(t131));
    t134 = (~(t132));
    t135 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t135 & t133);
    t136 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t136 & t134);
    t137 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t137 & t133);
    t138 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t138 & t134);
    goto LAB28;

LAB29:    *((unsigned int *)t139) = 1;
    goto LAB32;

LAB31:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB32;

LAB33:    t151 = (t0 + 3688);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    t155 = (t0 + 3688);
    t156 = (t155 + 72U);
    t157 = *((char **)t156);
    t158 = (t0 + 3688);
    t159 = (t158 + 64U);
    t160 = *((char **)t159);
    t161 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t154, 32, t153, t157, t160, 2, 1, t161, 32, 1);
    t163 = (t0 + 3688);
    t164 = (t163 + 72U);
    t165 = *((char **)t164);
    t166 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t162, 1, t154, t165, 2, t166, 32, 1);
    memset(t167, 0, 8);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t162);
    t172 = (t171 & t170);
    t173 = (t172 & 1U);
    if (t173 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t168) != 0)
        goto LAB38;

LAB39:    t176 = *((unsigned int *)t139);
    t177 = *((unsigned int *)t167);
    t178 = (t176 & t177);
    *((unsigned int *)t175) = t178;
    t179 = (t139 + 4);
    t180 = (t167 + 4);
    t181 = (t175 + 4);
    t182 = *((unsigned int *)t179);
    t183 = *((unsigned int *)t180);
    t184 = (t182 | t183);
    *((unsigned int *)t181) = t184;
    t185 = *((unsigned int *)t181);
    t186 = (t185 != 0);
    if (t186 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t167) = 1;
    goto LAB39;

LAB38:    t174 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB39;

LAB40:    t187 = *((unsigned int *)t175);
    t188 = *((unsigned int *)t181);
    *((unsigned int *)t175) = (t187 | t188);
    t189 = (t139 + 4);
    t190 = (t167 + 4);
    t191 = *((unsigned int *)t139);
    t192 = (~(t191));
    t193 = *((unsigned int *)t189);
    t194 = (~(t193));
    t195 = *((unsigned int *)t167);
    t196 = (~(t195));
    t197 = *((unsigned int *)t190);
    t198 = (~(t197));
    t199 = (t192 & t194);
    t200 = (t196 & t198);
    t201 = (~(t199));
    t202 = (~(t200));
    t203 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t203 & t201);
    t204 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t204 & t202);
    t205 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t205 & t201);
    t206 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t206 & t202);
    goto LAB42;

}

static void Cont_86_4(char *t0)
{
    char t3[8];
    char t11[8];
    char t23[8];
    char t27[8];
    char t35[8];
    char t47[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 31U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    memset(t11, 0, 8);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB11:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    memcpy(t55, t11, 8);

LAB14:    t87 = (t0 + 6672);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 1U;
    t93 = t92;
    t94 = (t55 + 4);
    t95 = *((unsigned int *)t55);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans(t87, 0, 0);
    t100 = (t0 + 6384);
    *((int *)t100) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB10:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 3688);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 3688);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3688);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t27, 32, t26, t30, t33, 2, 1, t34, 32, 1);
    t36 = (t0 + 3688);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t35, 1, t27, t38, 2, t39, 32, 1);
    memset(t23, 0, 8);
    t40 = (t35 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t35);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t40) == 0)
        goto LAB15;

LAB17:    t46 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t46) = 1;

LAB18:    memset(t47, 0, 8);
    t48 = (t23 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t48) != 0)
        goto LAB21;

LAB22:    t56 = *((unsigned int *)t11);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t11 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t47) = 1;
    goto LAB22;

LAB21:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB22;

LAB23:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t11 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t11);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB25;

}

static void Cont_87_5(char *t0)
{
    char t4[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 6000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (!(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t25, t4, 8);

LAB10:    t53 = (t0 + 6736);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t25 + 4);
    t61 = *((unsigned int *)t25);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0);
    t66 = (t0 + 6400);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3288U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t17 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB14:    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t4 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB13:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB15:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t4);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB17;

}


extern void work_m_08886563985825645967_3975733304_init()
{
	static char *pe[] = {(void *)Cont_50_0,(void *)Cont_53_1,(void *)Always_56_2,(void *)Cont_85_3,(void *)Cont_86_4,(void *)Cont_87_5};
	xsi_register_didat("work_m_08886563985825645967_3975733304", "isim/mips_txt_isim_beh.exe.sim/work/m_08886563985825645967_3975733304.didat");
	xsi_register_executes(pe);
}
