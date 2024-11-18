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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/p7/cpu_v2/M_EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {24, 0};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {16, 0};



static void Cont_44_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 4352);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 4224);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_45_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t47[8];
    char t48[8];
    char t51[8];
    char t78[8];
    char t92[8];
    char t93[8];
    char t96[8];
    char t123[8];
    char t137[8];
    char t138[8];
    char t141[8];
    char t168[8];
    char t182[8];
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
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    unsigned int t54;
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
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
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
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t139;
    char *t140;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1848U);
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

LAB13:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t29);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t47, 8);

LAB20:    t192 = (t0 + 4416);
    t193 = (t192 + 56U);
    t194 = *((char **)t193);
    t195 = (t194 + 56U);
    t196 = *((char **)t195);
    memset(t196, 0, 8);
    t197 = 255U;
    t198 = t197;
    t199 = (t3 + 4);
    t200 = *((unsigned int *)t3);
    t197 = (t197 & t200);
    t201 = *((unsigned int *)t199);
    t198 = (t198 & t201);
    t202 = (t196 + 4);
    t203 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t203 | t197);
    t204 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t204 | t198);
    xsi_driver_vfirst_trans(t192, 0, 7);
    t205 = (t0 + 4240);
    *((int *)t205) = 1;

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

LAB12:    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 255U);
    goto LAB13;

LAB14:    t49 = (t0 + 1848U);
    t50 = *((char **)t49);
    t49 = ((char*)((ng2)));
    memset(t51, 0, 8);
    t52 = (t50 + 4);
    t53 = (t49 + 4);
    t54 = *((unsigned int *)t50);
    t55 = *((unsigned int *)t49);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t52);
    t62 = *((unsigned int *)t53);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB24;

LAB21:    if (t63 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t51) = 1;

LAB24:    memset(t48, 0, 8);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t51);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t67) != 0)
        goto LAB27;

LAB28:    t74 = (t48 + 4);
    t75 = *((unsigned int *)t48);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB29;

LAB30:    t88 = *((unsigned int *)t48);
    t89 = (~(t88));
    t90 = *((unsigned int *)t74);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t74) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t48) > 0)
        goto LAB35;

LAB36:    memcpy(t47, t92, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t33, 8, t47, 8);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t66 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t48) = 1;
    goto LAB28;

LAB27:    t73 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB28;

LAB29:    t79 = (t0 + 1048U);
    t80 = *((char **)t79);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t81 = (t80 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (t82 >> 8);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 8);
    *((unsigned int *)t79) = t85;
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 255U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 & 255U);
    goto LAB30;

LAB31:    t94 = (t0 + 1848U);
    t95 = *((char **)t94);
    t94 = ((char*)((ng3)));
    memset(t96, 0, 8);
    t97 = (t95 + 4);
    t98 = (t94 + 4);
    t99 = *((unsigned int *)t95);
    t100 = *((unsigned int *)t94);
    t101 = (t99 ^ t100);
    t102 = *((unsigned int *)t97);
    t103 = *((unsigned int *)t98);
    t104 = (t102 ^ t103);
    t105 = (t101 | t104);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t98);
    t108 = (t106 | t107);
    t109 = (~(t108));
    t110 = (t105 & t109);
    if (t110 != 0)
        goto LAB41;

LAB38:    if (t108 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t96) = 1;

LAB41:    memset(t93, 0, 8);
    t112 = (t96 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t96);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t112) != 0)
        goto LAB44;

LAB45:    t119 = (t93 + 4);
    t120 = *((unsigned int *)t93);
    t121 = *((unsigned int *)t119);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB46;

LAB47:    t133 = *((unsigned int *)t93);
    t134 = (~(t133));
    t135 = *((unsigned int *)t119);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t119) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t93) > 0)
        goto LAB52;

LAB53:    memcpy(t92, t137, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t47, 8, t78, 8, t92, 8);
    goto LAB37;

LAB35:    memcpy(t47, t78, 8);
    goto LAB37;

LAB40:    t111 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t93) = 1;
    goto LAB45;

LAB44:    t118 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB45;

LAB46:    t124 = (t0 + 1048U);
    t125 = *((char **)t124);
    memset(t123, 0, 8);
    t124 = (t123 + 4);
    t126 = (t125 + 4);
    t127 = *((unsigned int *)t125);
    t128 = (t127 >> 16);
    *((unsigned int *)t123) = t128;
    t129 = *((unsigned int *)t126);
    t130 = (t129 >> 16);
    *((unsigned int *)t124) = t130;
    t131 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t131 & 255U);
    t132 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t132 & 255U);
    goto LAB47;

LAB48:    t139 = (t0 + 1848U);
    t140 = *((char **)t139);
    t139 = ((char*)((ng4)));
    memset(t141, 0, 8);
    t142 = (t140 + 4);
    t143 = (t139 + 4);
    t144 = *((unsigned int *)t140);
    t145 = *((unsigned int *)t139);
    t146 = (t144 ^ t145);
    t147 = *((unsigned int *)t142);
    t148 = *((unsigned int *)t143);
    t149 = (t147 ^ t148);
    t150 = (t146 | t149);
    t151 = *((unsigned int *)t142);
    t152 = *((unsigned int *)t143);
    t153 = (t151 | t152);
    t154 = (~(t153));
    t155 = (t150 & t154);
    if (t155 != 0)
        goto LAB58;

LAB55:    if (t153 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t141) = 1;

LAB58:    memset(t138, 0, 8);
    t157 = (t141 + 4);
    t158 = *((unsigned int *)t157);
    t159 = (~(t158));
    t160 = *((unsigned int *)t141);
    t161 = (t160 & t159);
    t162 = (t161 & 1U);
    if (t162 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t157) != 0)
        goto LAB61;

LAB62:    t164 = (t138 + 4);
    t165 = *((unsigned int *)t138);
    t166 = *((unsigned int *)t164);
    t167 = (t165 || t166);
    if (t167 > 0)
        goto LAB63;

LAB64:    t178 = *((unsigned int *)t138);
    t179 = (~(t178));
    t180 = *((unsigned int *)t164);
    t181 = (t179 || t180);
    if (t181 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t164) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t138) > 0)
        goto LAB69;

LAB70:    memcpy(t137, t182, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t92, 8, t123, 8, t137, 8);
    goto LAB54;

LAB52:    memcpy(t92, t123, 8);
    goto LAB54;

LAB57:    t156 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t138) = 1;
    goto LAB62;

LAB61:    t163 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t163) = 1;
    goto LAB62;

LAB63:    t169 = (t0 + 1048U);
    t170 = *((char **)t169);
    memset(t168, 0, 8);
    t169 = (t168 + 4);
    t171 = (t170 + 4);
    t172 = *((unsigned int *)t170);
    t173 = (t172 >> 24);
    *((unsigned int *)t168) = t173;
    t174 = *((unsigned int *)t171);
    t175 = (t174 >> 24);
    *((unsigned int *)t169) = t175;
    t176 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t176 & 255U);
    t177 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t177 & 255U);
    goto LAB64;

LAB65:    t183 = (t0 + 1048U);
    t184 = *((char **)t183);
    memset(t182, 0, 8);
    t183 = (t182 + 4);
    t185 = (t184 + 4);
    t186 = *((unsigned int *)t184);
    t187 = (t186 >> 0);
    *((unsigned int *)t182) = t187;
    t188 = *((unsigned int *)t185);
    t189 = (t188 >> 0);
    *((unsigned int *)t183) = t189;
    t190 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t190 & 255U);
    t191 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t191 & 255U);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t137, 8, t168, 8, t182, 8);
    goto LAB71;

LAB69:    memcpy(t137, t168, 8);
    goto LAB71;

}

static void Cont_50_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t15[8];
    char t42[8];
    char t56[8];
    char t57[8];
    char t60[8];
    char t69[8];
    char t96[8];
    char t110[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
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
    char *t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t38);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t56, 8);

LAB20:    t120 = (t0 + 4480);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    memset(t124, 0, 8);
    t125 = 65535U;
    t126 = t125;
    t127 = (t3 + 4);
    t128 = *((unsigned int *)t3);
    t125 = (t125 & t128);
    t129 = *((unsigned int *)t127);
    t126 = (t126 & t129);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t131 | t125);
    t132 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t132 | t126);
    xsi_driver_vfirst_trans(t120, 0, 15);
    t133 = (t0 + 4256);
    *((int *)t133) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 65535U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 65535U);
    goto LAB13;

LAB14:    t58 = (t0 + 1848U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t58 = (t60 + 4);
    t61 = (t59 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 1);
    t64 = (t63 & 1);
    *((unsigned int *)t60) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 1);
    t67 = (t66 & 1);
    *((unsigned int *)t58) = t67;
    t68 = ((char*)((ng2)));
    memset(t69, 0, 8);
    t70 = (t60 + 4);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = (t74 | t77);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t71);
    t81 = (t79 | t80);
    t82 = (~(t81));
    t83 = (t78 & t82);
    if (t83 != 0)
        goto LAB24;

LAB21:    if (t81 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t69) = 1;

LAB24:    memset(t57, 0, 8);
    t85 = (t69 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t69);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t85) != 0)
        goto LAB27;

LAB28:    t92 = (t57 + 4);
    t93 = *((unsigned int *)t57);
    t94 = *((unsigned int *)t92);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB29;

LAB30:    t106 = *((unsigned int *)t57);
    t107 = (~(t106));
    t108 = *((unsigned int *)t92);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t92) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t57) > 0)
        goto LAB35;

LAB36:    memcpy(t56, t110, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 16, t42, 16, t56, 16);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

LAB23:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t57) = 1;
    goto LAB28;

LAB27:    t91 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB28;

LAB29:    t97 = (t0 + 1048U);
    t98 = *((char **)t97);
    memset(t96, 0, 8);
    t97 = (t96 + 4);
    t99 = (t98 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (t100 >> 16);
    *((unsigned int *)t96) = t101;
    t102 = *((unsigned int *)t99);
    t103 = (t102 >> 16);
    *((unsigned int *)t97) = t103;
    t104 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t104 & 65535U);
    t105 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t105 & 65535U);
    goto LAB30;

LAB31:    t111 = (t0 + 1048U);
    t112 = *((char **)t111);
    memset(t110, 0, 8);
    t111 = (t110 + 4);
    t113 = (t112 + 4);
    t114 = *((unsigned int *)t112);
    t115 = (t114 >> 0);
    *((unsigned int *)t110) = t115;
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 0);
    *((unsigned int *)t111) = t117;
    t118 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t118 & 65535U);
    t119 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t119 & 65535U);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t56, 16, t96, 16, t110, 16);
    goto LAB37;

LAB35:    memcpy(t56, t96, 8);
    goto LAB37;

}

static void Always_54_3(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4272);
    *((int *)t2) = 1;
    t3 = (t0 + 3936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t3, 24, t4, 8);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    xsi_vlog_mul_concat(t10, 24, 1, t3, 1U, t11, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 24, t4, 8);
    t19 = (t0 + 2248);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t3, 16, t4, 16);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    xsi_vlog_mul_concat(t10, 16, 1, t3, 1U, t11, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 16, t4, 16);
    t19 = (t0 + 2248);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 32);
    goto LAB17;

}


extern void work_m_10048493688111073923_2480407014_init()
{
	static char *pe[] = {(void *)Cont_44_0,(void *)Cont_45_1,(void *)Cont_50_2,(void *)Always_54_3};
	xsi_register_didat("work_m_10048493688111073923_2480407014", "isim/mips_txt_isim_beh.exe.sim/work/m_10048493688111073923_2480407014.didat");
	xsi_register_executes(pe);
}
