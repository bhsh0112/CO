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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P5/test_cpu/GRF.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "%d@%h: $%d <= %h";



static void Initial_35_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2888);
    t16 = (t0 + 2888);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Cont_39_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t22[8];
    char t36[8];
    char t43[8];
    char t75[8];
    char t89[8];
    char t96[8];
    char t147[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
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
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t43, t22, 8);

LAB14:    memset(t75, 0, 8);
    t76 = (t43 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t43);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t76) != 0)
        goto LAB24;

LAB25:    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB26;

LAB27:    memcpy(t96, t75, 8);

LAB28:    memset(t4, 0, 8);
    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t128) != 0)
        goto LAB38;

LAB39:    t135 = (t4 + 4);
    t136 = *((unsigned int *)t4);
    t137 = *((unsigned int *)t135);
    t138 = (t136 || t137);
    if (t138 > 0)
        goto LAB40;

LAB41:    t141 = *((unsigned int *)t4);
    t142 = (~(t141));
    t143 = *((unsigned int *)t135);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t135) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t4) > 0)
        goto LAB46;

LAB47:    memcpy(t3, t147, 8);

LAB48:    t154 = (t0 + 5136);
    t156 = (t154 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memcpy(t159, t3, 8);
    xsi_driver_vfirst_trans(t154, 0, 31);
    t160 = (t0 + 5024);
    *((int *)t160) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1848U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 31U);
    if (t41 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t22 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t36) = 1;
    goto LAB18;

LAB17:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB18;

LAB19:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t22 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB21;

LAB22:    *((unsigned int *)t75) = 1;
    goto LAB25;

LAB24:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB25;

LAB26:    t87 = (t0 + 1368U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    t87 = (t88 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t87) != 0)
        goto LAB31;

LAB32:    t97 = *((unsigned int *)t75);
    t98 = *((unsigned int *)t89);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t75 + 4);
    t101 = (t89 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t89) = 1;
    goto LAB32;

LAB31:    t95 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB32;

LAB33:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t75 + 4);
    t111 = (t89 + 4);
    t112 = *((unsigned int *)t75);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t89);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB35;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB39;

LAB38:    t134 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB39;

LAB40:    t139 = (t0 + 2008U);
    t140 = *((char **)t139);
    goto LAB41;

LAB42:    t139 = (t0 + 2888);
    t145 = (t139 + 56U);
    t146 = *((char **)t145);
    t148 = (t0 + 2888);
    t149 = (t148 + 72U);
    t150 = *((char **)t149);
    t151 = (t0 + 2888);
    t152 = (t151 + 64U);
    t153 = *((char **)t152);
    t154 = (t0 + 1528U);
    t155 = *((char **)t154);
    xsi_vlog_generic_get_array_select_value(t147, 32, t146, t150, t153, 2, 1, t155, 5, 2);
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t3, 32, t140, 32, t147, 32);
    goto LAB48;

LAB46:    memcpy(t3, t140, 8);
    goto LAB48;

}

static void Cont_40_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t22[8];
    char t36[8];
    char t43[8];
    char t75[8];
    char t89[8];
    char t96[8];
    char t147[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
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
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t43, t22, 8);

LAB14:    memset(t75, 0, 8);
    t76 = (t43 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t43);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t76) != 0)
        goto LAB24;

LAB25:    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB26;

LAB27:    memcpy(t96, t75, 8);

LAB28:    memset(t4, 0, 8);
    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t96);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t128) != 0)
        goto LAB38;

LAB39:    t135 = (t4 + 4);
    t136 = *((unsigned int *)t4);
    t137 = *((unsigned int *)t135);
    t138 = (t136 || t137);
    if (t138 > 0)
        goto LAB40;

LAB41:    t141 = *((unsigned int *)t4);
    t142 = (~(t141));
    t143 = *((unsigned int *)t135);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t135) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t4) > 0)
        goto LAB46;

LAB47:    memcpy(t3, t147, 8);

LAB48:    t154 = (t0 + 5200);
    t156 = (t154 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memcpy(t159, t3, 8);
    xsi_driver_vfirst_trans(t154, 0, 31);
    t160 = (t0 + 5040);
    *((int *)t160) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1848U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 31U);
    if (t41 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t22 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t36) = 1;
    goto LAB18;

LAB17:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB18;

LAB19:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t22 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB21;

LAB22:    *((unsigned int *)t75) = 1;
    goto LAB25;

LAB24:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB25;

LAB26:    t87 = (t0 + 1368U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    t87 = (t88 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t87) != 0)
        goto LAB31;

LAB32:    t97 = *((unsigned int *)t75);
    t98 = *((unsigned int *)t89);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t75 + 4);
    t101 = (t89 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t89) = 1;
    goto LAB32;

LAB31:    t95 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB32;

LAB33:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t75 + 4);
    t111 = (t89 + 4);
    t112 = *((unsigned int *)t75);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t89);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB35;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB39;

LAB38:    t134 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB39;

LAB40:    t139 = (t0 + 2008U);
    t140 = *((char **)t139);
    goto LAB41;

LAB42:    t139 = (t0 + 2888);
    t145 = (t139 + 56U);
    t146 = *((char **)t145);
    t148 = (t0 + 2888);
    t149 = (t148 + 72U);
    t150 = *((char **)t149);
    t151 = (t0 + 2888);
    t152 = (t151 + 64U);
    t153 = *((char **)t152);
    t154 = (t0 + 1688U);
    t155 = *((char **)t154);
    xsi_vlog_generic_get_array_select_value(t147, 32, t146, t150, t153, 2, 1, t155, 5, 2);
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t3, 32, t140, 32, t147, 32);
    goto LAB48;

LAB46:    memcpy(t3, t140, 8);
    goto LAB48;

}

static void Always_41_3(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t48[8];
    char t54[8];
    char t89[8];
    char t90[8];
    char t106[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
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
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;

LAB0:    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5056);
    *((int *)t2) = 1;
    t3 = (t0 + 4736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t8) != 0)
        goto LAB26;

LAB27:    t22 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t22);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB28;

LAB29:    memcpy(t54, t30, 8);

LAB30:    t81 = (t54 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(43, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 2888);
    t22 = (t0 + 2888);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 2888);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 3048);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB17:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t21, t8, 0, *((unsigned int *)t31), t44);
    goto LAB18;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t30) = 1;
    goto LAB27;

LAB26:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB27;

LAB28:    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB32;

LAB31:    t33 = (t28 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t29) > *((unsigned int *)t28))
        goto LAB33;

LAB34:    memset(t48, 0, 8);
    t35 = (t31 + 4);
    t49 = *((unsigned int *)t35);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t35) != 0)
        goto LAB38;

LAB39:    t55 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t48);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t37 = (t30 + 4);
    t38 = (t48 + 4);
    t40 = (t54 + 4);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t38);
    t60 = (t58 | t59);
    *((unsigned int *)t40) = t60;
    t61 = *((unsigned int *)t40);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB30;

LAB32:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t31) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t48) = 1;
    goto LAB39;

LAB38:    t36 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB39;

LAB40:    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t54) = (t63 | t64);
    t65 = (t30 + 4);
    t66 = (t48 + 4);
    t67 = *((unsigned int *)t30);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t48);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t39 = (t68 & t70);
    t41 = (t72 & t74);
    t75 = (~(t39));
    t76 = (~(t41));
    t77 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t77 & t75);
    t78 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t78 & t76);
    t79 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t79 & t75);
    t80 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t80 & t76);
    goto LAB42;

LAB43:    xsi_set_current_line(46, ng0);

LAB46:    xsi_set_current_line(47, ng0);
    t87 = (t0 + 2008U);
    t88 = *((char **)t87);
    t87 = (t0 + 2888);
    t91 = (t0 + 2888);
    t92 = (t91 + 72U);
    t93 = *((char **)t92);
    t94 = (t0 + 2888);
    t95 = (t94 + 64U);
    t96 = *((char **)t95);
    t97 = (t0 + 1848U);
    t98 = *((char **)t97);
    xsi_vlog_generic_convert_array_indices(t89, t90, t93, t96, 2, 1, t98, 5, 2);
    t97 = (t89 + 4);
    t99 = *((unsigned int *)t97);
    t42 = (!(t99));
    t100 = (t90 + 4);
    t101 = *((unsigned int *)t100);
    t43 = (!(t101));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(48, ng0);
    t2 = xsi_vlog_time(t106, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t106, 64, (char)118, t4, 32, (char)118, t5, 5, (char)118, t7, 32);
    goto LAB45;

LAB47:    t102 = *((unsigned int *)t89);
    t103 = *((unsigned int *)t90);
    t104 = (t102 - t103);
    t105 = (t104 + 1);
    xsi_vlogvar_assign_value(t87, t88, 0, *((unsigned int *)t90), t105);
    goto LAB48;

}


extern void work_m_03440613055969981163_2484743739_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Cont_39_1,(void *)Cont_40_2,(void *)Always_41_3};
	xsi_register_didat("work_m_03440613055969981163_2484743739", "isim/mips_tb_isim_beh.exe.sim/work/m_03440613055969981163_2484743739.didat");
	xsi_register_executes(pe);
}
