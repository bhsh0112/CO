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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P4/cpu_p4_v1/mips.v";
static const char *ng1 = "@%h: *%h <= %h";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {8U, 0U};
static const char *ng4 = "@%h: $%d <= %h";



static void Always_83_0(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char t76[8];
    char t80[8];
    char t94[8];
    char t102[8];
    char t134[8];
    char t146[8];
    char t149[8];
    char t165[8];
    char t179[8];
    char t195[8];
    char t203[8];
    char t242[8];
    char t250[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
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
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    int t227;
    int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t254;
    char *t255;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    int t274;
    int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t288;
    char *t289;
    char *t290;
    char *t291;

LAB0:    t1 = (t0 + 7480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 7800);
    *((int *)t2) = 1;
    t3 = (t0 + 7512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 4728U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t34, t6, 8);

LAB12:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t2) != 0)
        goto LAB29;

LAB30:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB31;

LAB32:    memcpy(t34, t6, 8);

LAB33:    memset(t76, 0, 8);
    t48 = (t34 + 4);
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t48) != 0)
        goto LAB47;

LAB48:    t66 = (t76 + 4);
    t77 = *((unsigned int *)t76);
    t78 = *((unsigned int *)t66);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB49;

LAB50:    memcpy(t102, t76, 8);

LAB51:    memset(t134, 0, 8);
    t135 = (t102 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t102);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t135) != 0)
        goto LAB65;

LAB66:    t142 = (t134 + 4);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t142);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB67;

LAB68:    memcpy(t250, t134, 8);

LAB69:    t282 = (t250 + 4);
    t283 = *((unsigned int *)t282);
    t284 = (~(t283));
    t285 = *((unsigned int *)t250);
    t286 = (t285 & t284);
    t287 = (t286 != 0);
    if (t287 > 0)
        goto LAB103;

LAB104:
LAB105:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t18) == 0)
        goto LAB13;

LAB15:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB16:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB23;

LAB24:    xsi_set_current_line(84, ng0);
    t72 = (t0 + 1528U);
    t73 = *((char **)t72);
    t72 = (t0 + 4248U);
    t74 = *((char **)t72);
    t72 = (t0 + 3768U);
    t75 = *((char **)t72);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t0, (char)118, t73, 32, (char)118, t74, 32, (char)118, t75, 32);
    goto LAB26;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB30;

LAB29:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t17, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t12) == 0)
        goto LAB34;

LAB36:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;

LAB37:    memset(t26, 0, 8);
    t19 = (t17 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t19) != 0)
        goto LAB40;

LAB41:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t27 = (t6 + 4);
    t33 = (t26 + 4);
    t38 = (t34 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB34:    *((unsigned int *)t17) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t26) = 1;
    goto LAB41;

LAB40:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB41;

LAB42:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t34) = (t46 | t47);
    t39 = (t6 + 4);
    t40 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t39);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t40);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB44;

LAB45:    *((unsigned int *)t76) = 1;
    goto LAB48;

LAB47:    t49 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB48;

LAB49:    t72 = (t0 + 2328U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng2)));
    memset(t80, 0, 8);
    t74 = (t73 + 4);
    t75 = (t72 + 4);
    t81 = *((unsigned int *)t73);
    t82 = *((unsigned int *)t72);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t74);
    t85 = *((unsigned int *)t75);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t74);
    t89 = *((unsigned int *)t75);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB53;

LAB52:    if (t90 != 0)
        goto LAB54;

LAB55:    memset(t94, 0, 8);
    t95 = (t80 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t80);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t95) != 0)
        goto LAB58;

LAB59:    t103 = *((unsigned int *)t76);
    t104 = *((unsigned int *)t94);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t76 + 4);
    t107 = (t94 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB51;

LAB53:    *((unsigned int *)t80) = 1;
    goto LAB55;

LAB54:    t93 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t94) = 1;
    goto LAB59;

LAB58:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB59;

LAB60:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t76 + 4);
    t117 = (t94 + 4);
    t118 = *((unsigned int *)t76);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t94);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB62;

LAB63:    *((unsigned int *)t134) = 1;
    goto LAB66;

LAB65:    t141 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB66;

LAB67:    t147 = (t0 + 2488U);
    t148 = *((char **)t147);
    t147 = ((char*)((ng2)));
    memset(t149, 0, 8);
    t150 = (t148 + 4);
    t151 = (t147 + 4);
    t152 = *((unsigned int *)t148);
    t153 = *((unsigned int *)t147);
    t154 = (t152 ^ t153);
    t155 = *((unsigned int *)t150);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = (t154 | t157);
    t159 = *((unsigned int *)t150);
    t160 = *((unsigned int *)t151);
    t161 = (t159 | t160);
    t162 = (~(t161));
    t163 = (t158 & t162);
    if (t163 != 0)
        goto LAB73;

LAB70:    if (t161 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t149) = 1;

LAB73:    memset(t165, 0, 8);
    t166 = (t149 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t149);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t166) != 0)
        goto LAB76;

LAB77:    t173 = (t165 + 4);
    t174 = *((unsigned int *)t165);
    t175 = *((unsigned int *)t173);
    t176 = (t174 || t175);
    if (t176 > 0)
        goto LAB78;

LAB79:    memcpy(t203, t165, 8);

LAB80:    memset(t146, 0, 8);
    t235 = (t203 + 4);
    t236 = *((unsigned int *)t235);
    t237 = (~(t236));
    t238 = *((unsigned int *)t203);
    t239 = (t238 & t237);
    t240 = (t239 & 1U);
    if (t240 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t235) == 0)
        goto LAB92;

LAB94:    t241 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t241) = 1;

LAB95:    memset(t242, 0, 8);
    t243 = (t146 + 4);
    t244 = *((unsigned int *)t243);
    t245 = (~(t244));
    t246 = *((unsigned int *)t146);
    t247 = (t246 & t245);
    t248 = (t247 & 1U);
    if (t248 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t243) != 0)
        goto LAB98;

LAB99:    t251 = *((unsigned int *)t134);
    t252 = *((unsigned int *)t242);
    t253 = (t251 & t252);
    *((unsigned int *)t250) = t253;
    t254 = (t134 + 4);
    t255 = (t242 + 4);
    t256 = (t250 + 4);
    t257 = *((unsigned int *)t254);
    t258 = *((unsigned int *)t255);
    t259 = (t257 | t258);
    *((unsigned int *)t256) = t259;
    t260 = *((unsigned int *)t256);
    t261 = (t260 != 0);
    if (t261 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB69;

LAB72:    t164 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t165) = 1;
    goto LAB77;

LAB76:    t172 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB77;

LAB78:    t177 = (t0 + 3128U);
    t178 = *((char **)t177);
    t177 = ((char*)((ng3)));
    memset(t179, 0, 8);
    t180 = (t178 + 4);
    t181 = (t177 + 4);
    t182 = *((unsigned int *)t178);
    t183 = *((unsigned int *)t177);
    t184 = (t182 ^ t183);
    t185 = *((unsigned int *)t180);
    t186 = *((unsigned int *)t181);
    t187 = (t185 ^ t186);
    t188 = (t184 | t187);
    t189 = *((unsigned int *)t180);
    t190 = *((unsigned int *)t181);
    t191 = (t189 | t190);
    t192 = (~(t191));
    t193 = (t188 & t192);
    if (t193 != 0)
        goto LAB84;

LAB81:    if (t191 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t179) = 1;

LAB84:    memset(t195, 0, 8);
    t196 = (t179 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t179);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t196) != 0)
        goto LAB87;

LAB88:    t204 = *((unsigned int *)t165);
    t205 = *((unsigned int *)t195);
    t206 = (t204 & t205);
    *((unsigned int *)t203) = t206;
    t207 = (t165 + 4);
    t208 = (t195 + 4);
    t209 = (t203 + 4);
    t210 = *((unsigned int *)t207);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t194 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t194) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t195) = 1;
    goto LAB88;

LAB87:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB88;

LAB89:    t215 = *((unsigned int *)t203);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t203) = (t215 | t216);
    t217 = (t165 + 4);
    t218 = (t195 + 4);
    t219 = *((unsigned int *)t165);
    t220 = (~(t219));
    t221 = *((unsigned int *)t217);
    t222 = (~(t221));
    t223 = *((unsigned int *)t195);
    t224 = (~(t223));
    t225 = *((unsigned int *)t218);
    t226 = (~(t225));
    t227 = (t220 & t222);
    t228 = (t224 & t226);
    t229 = (~(t227));
    t230 = (~(t228));
    t231 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t231 & t229);
    t232 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t232 & t230);
    t233 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t233 & t229);
    t234 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t234 & t230);
    goto LAB91;

LAB92:    *((unsigned int *)t146) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t242) = 1;
    goto LAB99;

LAB98:    t249 = (t242 + 4);
    *((unsigned int *)t242) = 1;
    *((unsigned int *)t249) = 1;
    goto LAB99;

LAB100:    t262 = *((unsigned int *)t250);
    t263 = *((unsigned int *)t256);
    *((unsigned int *)t250) = (t262 | t263);
    t264 = (t134 + 4);
    t265 = (t242 + 4);
    t266 = *((unsigned int *)t134);
    t267 = (~(t266));
    t268 = *((unsigned int *)t264);
    t269 = (~(t268));
    t270 = *((unsigned int *)t242);
    t271 = (~(t270));
    t272 = *((unsigned int *)t265);
    t273 = (~(t272));
    t274 = (t267 & t269);
    t275 = (t271 & t273);
    t276 = (~(t274));
    t277 = (~(t275));
    t278 = *((unsigned int *)t256);
    *((unsigned int *)t256) = (t278 & t276);
    t279 = *((unsigned int *)t256);
    *((unsigned int *)t256) = (t279 & t277);
    t280 = *((unsigned int *)t250);
    *((unsigned int *)t250) = (t280 & t276);
    t281 = *((unsigned int *)t250);
    *((unsigned int *)t250) = (t281 & t277);
    goto LAB102;

LAB103:    xsi_set_current_line(85, ng0);
    t288 = (t0 + 1528U);
    t289 = *((char **)t288);
    t288 = (t0 + 3448U);
    t290 = *((char **)t288);
    t288 = (t0 + 3608U);
    t291 = *((char **)t288);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t289, 32, (char)118, t290, 5, (char)118, t291, 32);
    goto LAB105;

}


extern void work_m_18315445212065739092_3877310806_init()
{
	static char *pe[] = {(void *)Always_83_0};
	xsi_register_didat("work_m_18315445212065739092_3877310806", "isim/mips_tb2_isim_beh.exe.sim/work/m_18315445212065739092_3877310806.didat");
	xsi_register_executes(pe);
}
