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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/p6/cpu_expand/E_ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {16U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};



static void Cont_34_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t41[8];
    char t42[8];
    char t44[8];
    char t74[8];
    char t79[8];
    char t80[8];
    char t82[8];
    char t112[8];
    char t143[8];
    char t144[8];
    char t147[8];
    char t176[8];
    char t181[8];
    char t182[8];
    char t185[8];
    char t212[8];
    char t218[8];
    char t223[8];
    char t224[8];
    char t227[8];
    char t254[8];
    char t255[16];
    char t258[16];
    char t261[16];
    char t267[8];
    char t268[8];
    char t271[8];
    char t301[8];
    char t339[8];
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
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t45;
    char *t46;
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
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
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
    char *t71;
    char *t72;
    char *t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t83;
    char *t84;
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
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
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
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t145;
    char *t146;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
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
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t183;
    char *t184;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t214;
    char *t215;
    char *t217;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t225;
    char *t226;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t256;
    char *t257;
    char *t259;
    char *t260;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t269;
    char *t270;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    char *t293;
    char *t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    char *t300;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    char *t305;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    int t324;
    int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    char *t336;
    char *t337;
    char *t338;
    char *t340;
    char *t341;
    char *t342;
    char *t343;
    char *t344;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
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

LAB13:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t336 = (t0 + 3080);
    t340 = (t336 + 56U);
    t341 = *((char **)t340);
    t342 = (t341 + 56U);
    t343 = *((char **)t342);
    memcpy(t343, t3, 8);
    xsi_driver_vfirst_trans(t336, 0, 31);
    t344 = (t0 + 3000);
    *((int *)t344) = 1;

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
    t33 = (t0 + 1208U);
    t35 = *((char **)t33);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 32, t35, 32);
    goto LAB13;

LAB14:    t33 = (t0 + 1368U);
    t43 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t33 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t33);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t42, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t42 + 4);
    t68 = *((unsigned int *)t42);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t42);
    t76 = (~(t75));
    t77 = *((unsigned int *)t67);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t42) > 0)
        goto LAB35;

LAB36:    memcpy(t41, t79, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB27:    t66 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 1048U);
    t72 = *((char **)t71);
    t71 = (t0 + 1208U);
    t73 = *((char **)t71);
    memset(t74, 0, 8);
    xsi_vlog_unsigned_minus(t74, 32, t72, 32, t73, 32);
    goto LAB30;

LAB31:    t71 = (t0 + 1368U);
    t81 = *((char **)t71);
    t71 = ((char*)((ng3)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t71 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t71);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t80, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t80 + 4);
    t106 = *((unsigned int *)t80);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t139 = *((unsigned int *)t80);
    t140 = (~(t139));
    t141 = *((unsigned int *)t105);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t80) > 0)
        goto LAB52;

LAB53:    memcpy(t79, t143, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t41, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t41, t74, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t80) = 1;
    goto LAB45;

LAB44:    t104 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 1048U);
    t110 = *((char **)t109);
    t109 = (t0 + 1208U);
    t111 = *((char **)t109);
    t113 = *((unsigned int *)t110);
    t114 = *((unsigned int *)t111);
    t115 = (t113 | t114);
    *((unsigned int *)t112) = t115;
    t109 = (t110 + 4);
    t116 = (t111 + 4);
    t117 = (t112 + 4);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB47;

LAB48:    t145 = (t0 + 1368U);
    t146 = *((char **)t145);
    t145 = ((char*)((ng4)));
    memset(t147, 0, 8);
    t148 = (t146 + 4);
    t149 = (t145 + 4);
    t150 = *((unsigned int *)t146);
    t151 = *((unsigned int *)t145);
    t152 = (t150 ^ t151);
    t153 = *((unsigned int *)t148);
    t154 = *((unsigned int *)t149);
    t155 = (t153 ^ t154);
    t156 = (t152 | t155);
    t157 = *((unsigned int *)t148);
    t158 = *((unsigned int *)t149);
    t159 = (t157 | t158);
    t160 = (~(t159));
    t161 = (t156 & t160);
    if (t161 != 0)
        goto LAB61;

LAB58:    if (t159 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t147) = 1;

LAB61:    memset(t144, 0, 8);
    t163 = (t147 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t147);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t163) != 0)
        goto LAB64;

LAB65:    t170 = (t144 + 4);
    t171 = *((unsigned int *)t144);
    t172 = *((unsigned int *)t170);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB66;

LAB67:    t177 = *((unsigned int *)t144);
    t178 = (~(t177));
    t179 = *((unsigned int *)t170);
    t180 = (t178 || t179);
    if (t180 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t170) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t144) > 0)
        goto LAB72;

LAB73:    memcpy(t143, t181, 8);

LAB74:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t79, 32, t112, 32, t143, 32);
    goto LAB54;

LAB52:    memcpy(t79, t112, 8);
    goto LAB54;

LAB55:    t123 = *((unsigned int *)t112);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t112) = (t123 | t124);
    t125 = (t110 + 4);
    t126 = (t111 + 4);
    t127 = *((unsigned int *)t125);
    t128 = (~(t127));
    t129 = *((unsigned int *)t110);
    t130 = (t129 & t128);
    t131 = *((unsigned int *)t126);
    t132 = (~(t131));
    t133 = *((unsigned int *)t111);
    t134 = (t133 & t132);
    t135 = (~(t130));
    t136 = (~(t134));
    t137 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t137 & t135);
    t138 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t138 & t136);
    goto LAB57;

LAB60:    t162 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t144) = 1;
    goto LAB65;

LAB64:    t169 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB65;

LAB66:    t174 = (t0 + 1208U);
    t175 = *((char **)t174);
    t174 = ((char*)((ng5)));
    memset(t176, 0, 8);
    xsi_vlog_unsigned_lshift(t176, 32, t175, 32, t174, 6);
    goto LAB67;

LAB68:    t183 = (t0 + 1368U);
    t184 = *((char **)t183);
    t183 = ((char*)((ng6)));
    memset(t185, 0, 8);
    t186 = (t184 + 4);
    t187 = (t183 + 4);
    t188 = *((unsigned int *)t184);
    t189 = *((unsigned int *)t183);
    t190 = (t188 ^ t189);
    t191 = *((unsigned int *)t186);
    t192 = *((unsigned int *)t187);
    t193 = (t191 ^ t192);
    t194 = (t190 | t193);
    t195 = *((unsigned int *)t186);
    t196 = *((unsigned int *)t187);
    t197 = (t195 | t196);
    t198 = (~(t197));
    t199 = (t194 & t198);
    if (t199 != 0)
        goto LAB78;

LAB75:    if (t197 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t185) = 1;

LAB78:    memset(t182, 0, 8);
    t201 = (t185 + 4);
    t202 = *((unsigned int *)t201);
    t203 = (~(t202));
    t204 = *((unsigned int *)t185);
    t205 = (t204 & t203);
    t206 = (t205 & 1U);
    if (t206 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t201) != 0)
        goto LAB81;

LAB82:    t208 = (t182 + 4);
    t209 = *((unsigned int *)t182);
    t210 = *((unsigned int *)t208);
    t211 = (t209 || t210);
    if (t211 > 0)
        goto LAB83;

LAB84:    t219 = *((unsigned int *)t182);
    t220 = (~(t219));
    t221 = *((unsigned int *)t208);
    t222 = (t220 || t221);
    if (t222 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t208) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t182) > 0)
        goto LAB89;

LAB90:    memcpy(t181, t223, 8);

LAB91:    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t143, 32, t176, 32, t181, 32);
    goto LAB74;

LAB72:    memcpy(t143, t176, 8);
    goto LAB74;

LAB77:    t200 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t182) = 1;
    goto LAB82;

LAB81:    t207 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t207) = 1;
    goto LAB82;

LAB83:    t214 = (t0 + 1048U);
    t215 = *((char **)t214);
    t214 = (t0 + 1208U);
    t217 = *((char **)t214);
    memset(t218, 0, 8);
    xsi_vlog_signed_less(t218, 32, t215, 32, t217, 32);
    t214 = ((char*)((ng1)));
    xsi_vlogtype_concat(t212, 32, 32, 2U, t214, 31, t218, 1);
    goto LAB84;

LAB85:    t225 = (t0 + 1368U);
    t226 = *((char **)t225);
    t225 = ((char*)((ng7)));
    memset(t227, 0, 8);
    t228 = (t226 + 4);
    t229 = (t225 + 4);
    t230 = *((unsigned int *)t226);
    t231 = *((unsigned int *)t225);
    t232 = (t230 ^ t231);
    t233 = *((unsigned int *)t228);
    t234 = *((unsigned int *)t229);
    t235 = (t233 ^ t234);
    t236 = (t232 | t235);
    t237 = *((unsigned int *)t228);
    t238 = *((unsigned int *)t229);
    t239 = (t237 | t238);
    t240 = (~(t239));
    t241 = (t236 & t240);
    if (t241 != 0)
        goto LAB95;

LAB92:    if (t239 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t227) = 1;

LAB95:    memset(t224, 0, 8);
    t243 = (t227 + 4);
    t244 = *((unsigned int *)t243);
    t245 = (~(t244));
    t246 = *((unsigned int *)t227);
    t247 = (t246 & t245);
    t248 = (t247 & 1U);
    if (t248 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t243) != 0)
        goto LAB98;

LAB99:    t250 = (t224 + 4);
    t251 = *((unsigned int *)t224);
    t252 = *((unsigned int *)t250);
    t253 = (t251 || t252);
    if (t253 > 0)
        goto LAB100;

LAB101:    t263 = *((unsigned int *)t224);
    t264 = (~(t263));
    t265 = *((unsigned int *)t250);
    t266 = (t264 || t265);
    if (t266 > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t250) > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t224) > 0)
        goto LAB106;

LAB107:    memcpy(t223, t267, 8);

LAB108:    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t181, 32, t212, 32, t223, 32);
    goto LAB91;

LAB89:    memcpy(t181, t212, 8);
    goto LAB91;

LAB94:    t242 = (t227 + 4);
    *((unsigned int *)t227) = 1;
    *((unsigned int *)t242) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t224) = 1;
    goto LAB99;

LAB98:    t249 = (t224 + 4);
    *((unsigned int *)t224) = 1;
    *((unsigned int *)t249) = 1;
    goto LAB99;

LAB100:    t256 = (t0 + 1048U);
    t257 = *((char **)t256);
    t256 = ((char*)((ng1)));
    xsi_vlogtype_concat(t255, 33, 33, 2U, t256, 1, t257, 32);
    t259 = (t0 + 1208U);
    t260 = *((char **)t259);
    t259 = ((char*)((ng1)));
    xsi_vlogtype_concat(t258, 33, 33, 2U, t259, 1, t260, 32);
    xsi_vlog_unsigned_less(t261, 33, t255, 33, t258, 33);
    t262 = ((char*)((ng1)));
    xsi_vlogtype_concat(t254, 32, 32, 2U, t262, 31, t261, 1);
    goto LAB101;

LAB102:    t269 = (t0 + 1368U);
    t270 = *((char **)t269);
    t269 = ((char*)((ng8)));
    memset(t271, 0, 8);
    t272 = (t270 + 4);
    t273 = (t269 + 4);
    t274 = *((unsigned int *)t270);
    t275 = *((unsigned int *)t269);
    t276 = (t274 ^ t275);
    t277 = *((unsigned int *)t272);
    t278 = *((unsigned int *)t273);
    t279 = (t277 ^ t278);
    t280 = (t276 | t279);
    t281 = *((unsigned int *)t272);
    t282 = *((unsigned int *)t273);
    t283 = (t281 | t282);
    t284 = (~(t283));
    t285 = (t280 & t284);
    if (t285 != 0)
        goto LAB112;

LAB109:    if (t283 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t271) = 1;

LAB112:    memset(t268, 0, 8);
    t287 = (t271 + 4);
    t288 = *((unsigned int *)t287);
    t289 = (~(t288));
    t290 = *((unsigned int *)t271);
    t291 = (t290 & t289);
    t292 = (t291 & 1U);
    if (t292 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t287) != 0)
        goto LAB115;

LAB116:    t294 = (t268 + 4);
    t295 = *((unsigned int *)t268);
    t296 = *((unsigned int *)t294);
    t297 = (t295 || t296);
    if (t297 > 0)
        goto LAB117;

LAB118:    t332 = *((unsigned int *)t268);
    t333 = (~(t332));
    t334 = *((unsigned int *)t294);
    t335 = (t333 || t334);
    if (t335 > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t294) > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t268) > 0)
        goto LAB123;

LAB124:    memcpy(t267, t339, 8);

LAB125:    goto LAB103;

LAB104:    xsi_vlog_unsigned_bit_combine(t223, 32, t254, 32, t267, 32);
    goto LAB108;

LAB106:    memcpy(t223, t254, 8);
    goto LAB108;

LAB111:    t286 = (t271 + 4);
    *((unsigned int *)t271) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t268) = 1;
    goto LAB116;

LAB115:    t293 = (t268 + 4);
    *((unsigned int *)t268) = 1;
    *((unsigned int *)t293) = 1;
    goto LAB116;

LAB117:    t298 = (t0 + 1048U);
    t299 = *((char **)t298);
    t298 = (t0 + 1208U);
    t300 = *((char **)t298);
    t302 = *((unsigned int *)t299);
    t303 = *((unsigned int *)t300);
    t304 = (t302 & t303);
    *((unsigned int *)t301) = t304;
    t298 = (t299 + 4);
    t305 = (t300 + 4);
    t306 = (t301 + 4);
    t307 = *((unsigned int *)t298);
    t308 = *((unsigned int *)t305);
    t309 = (t307 | t308);
    *((unsigned int *)t306) = t309;
    t310 = *((unsigned int *)t306);
    t311 = (t310 != 0);
    if (t311 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB118;

LAB119:    t336 = (t0 + 1048U);
    t337 = *((char **)t336);
    t336 = (t0 + 1208U);
    t338 = *((char **)t336);
    memset(t339, 0, 8);
    xsi_vlog_unsigned_add(t339, 32, t337, 32, t338, 32);
    goto LAB120;

LAB121:    xsi_vlog_unsigned_bit_combine(t267, 32, t301, 32, t339, 32);
    goto LAB125;

LAB123:    memcpy(t267, t301, 8);
    goto LAB125;

LAB126:    t312 = *((unsigned int *)t301);
    t313 = *((unsigned int *)t306);
    *((unsigned int *)t301) = (t312 | t313);
    t314 = (t299 + 4);
    t315 = (t300 + 4);
    t316 = *((unsigned int *)t299);
    t317 = (~(t316));
    t318 = *((unsigned int *)t314);
    t319 = (~(t318));
    t320 = *((unsigned int *)t300);
    t321 = (~(t320));
    t322 = *((unsigned int *)t315);
    t323 = (~(t322));
    t324 = (t317 & t319);
    t325 = (t321 & t323);
    t326 = (~(t324));
    t327 = (~(t325));
    t328 = *((unsigned int *)t306);
    *((unsigned int *)t306) = (t328 & t326);
    t329 = *((unsigned int *)t306);
    *((unsigned int *)t306) = (t329 & t327);
    t330 = *((unsigned int *)t301);
    *((unsigned int *)t301) = (t330 & t326);
    t331 = *((unsigned int *)t301);
    *((unsigned int *)t301) = (t331 & t327);
    goto LAB128;

}


extern void work_m_08919049609798114744_4245161272_init()
{
	static char *pe[] = {(void *)Cont_34_0};
	xsi_register_didat("work_m_08919049609798114744_4245161272", "isim/mips_tb_isim_beh.exe.sim/work/m_08919049609798114744_4245161272.didat");
	xsi_register_executes(pe);
}
