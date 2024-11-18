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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/p7/cpu_v2/F_MUX_NPC_4_1.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Cont_41_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t58[8];
    char t72[8];
    char t79[8];
    char t128[8];
    char t129[8];
    char t131[8];
    char t164[8];
    char t165[8];
    char t167[8];
    char t201[8];
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
    char *t59;
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
    char *t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t130;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
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
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t166;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
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
    char *t182;
    char *t183;
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
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    char *t207;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
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

LAB20:    t202 = (t0 + 4360);
    t203 = (t202 + 56U);
    t204 = *((char **)t203);
    t205 = (t204 + 56U);
    t206 = *((char **)t205);
    memcpy(t206, t3, 8);
    xsi_driver_vfirst_trans(t202, 0, 31);
    t207 = (t0 + 4280);
    *((int *)t207) = 1;

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

LAB12:    t33 = (t0 + 2168U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1208U);
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

LAB24:    memset(t58, 0, 8);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t59) != 0)
        goto LAB27;

LAB28:    t66 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB29;

LAB30:    memcpy(t79, t58, 8);

LAB31:    memset(t40, 0, 8);
    t111 = (t79 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t79);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t111) != 0)
        goto LAB41;

LAB42:    t118 = (t40 + 4);
    t119 = *((unsigned int *)t40);
    t120 = *((unsigned int *)t118);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB43;

LAB44:    t124 = *((unsigned int *)t40);
    t125 = (~(t124));
    t126 = *((unsigned int *)t118);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t118) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t40) > 0)
        goto LAB49;

LAB50:    memcpy(t39, t128, 8);

LAB51:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t58) = 1;
    goto LAB28;

LAB27:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB28;

LAB29:    t70 = (t0 + 1368U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t71 + 4);
    t73 = *((unsigned int *)t70);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t70) != 0)
        goto LAB34;

LAB35:    t80 = *((unsigned int *)t58);
    t81 = *((unsigned int *)t72);
    t82 = (t80 & t81);
    *((unsigned int *)t79) = t82;
    t83 = (t58 + 4);
    t84 = (t72 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB32:    *((unsigned int *)t72) = 1;
    goto LAB35;

LAB34:    t78 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB35;

LAB36:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t58 + 4);
    t94 = (t72 + 4);
    t95 = *((unsigned int *)t58);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (~(t97));
    t99 = *((unsigned int *)t72);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (~(t101));
    t103 = (t96 & t98);
    t104 = (t100 & t102);
    t105 = (~(t103));
    t106 = (~(t104));
    t107 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t107 & t105);
    t108 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t108 & t106);
    t109 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t109 & t105);
    t110 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t110 & t106);
    goto LAB38;

LAB39:    *((unsigned int *)t40) = 1;
    goto LAB42;

LAB41:    t117 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB42;

LAB43:    t122 = (t0 + 1688U);
    t123 = *((char **)t122);
    goto LAB44;

LAB45:    t122 = (t0 + 1208U);
    t130 = *((char **)t122);
    t122 = ((char*)((ng3)));
    memset(t131, 0, 8);
    t132 = (t130 + 4);
    t133 = (t122 + 4);
    t134 = *((unsigned int *)t130);
    t135 = *((unsigned int *)t122);
    t136 = (t134 ^ t135);
    t137 = *((unsigned int *)t132);
    t138 = *((unsigned int *)t133);
    t139 = (t137 ^ t138);
    t140 = (t136 | t139);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t133);
    t143 = (t141 | t142);
    t144 = (~(t143));
    t145 = (t140 & t144);
    if (t145 != 0)
        goto LAB55;

LAB52:    if (t143 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t131) = 1;

LAB55:    memset(t129, 0, 8);
    t147 = (t131 + 4);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t131);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t147) != 0)
        goto LAB58;

LAB59:    t154 = (t129 + 4);
    t155 = *((unsigned int *)t129);
    t156 = *((unsigned int *)t154);
    t157 = (t155 || t156);
    if (t157 > 0)
        goto LAB60;

LAB61:    t160 = *((unsigned int *)t129);
    t161 = (~(t160));
    t162 = *((unsigned int *)t154);
    t163 = (t161 || t162);
    if (t163 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t154) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t129) > 0)
        goto LAB66;

LAB67:    memcpy(t128, t164, 8);

LAB68:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t39, 32, t123, 32, t128, 32);
    goto LAB51;

LAB49:    memcpy(t39, t123, 8);
    goto LAB51;

LAB54:    t146 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t129) = 1;
    goto LAB59;

LAB58:    t153 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB59;

LAB60:    t158 = (t0 + 1848U);
    t159 = *((char **)t158);
    goto LAB61;

LAB62:    t158 = (t0 + 1208U);
    t166 = *((char **)t158);
    t158 = ((char*)((ng4)));
    memset(t167, 0, 8);
    t168 = (t166 + 4);
    t169 = (t158 + 4);
    t170 = *((unsigned int *)t166);
    t171 = *((unsigned int *)t158);
    t172 = (t170 ^ t171);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = (t172 | t175);
    t177 = *((unsigned int *)t168);
    t178 = *((unsigned int *)t169);
    t179 = (t177 | t178);
    t180 = (~(t179));
    t181 = (t176 & t180);
    if (t181 != 0)
        goto LAB72;

LAB69:    if (t179 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t167) = 1;

LAB72:    memset(t165, 0, 8);
    t183 = (t167 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t167);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t183) != 0)
        goto LAB75;

LAB76:    t190 = (t165 + 4);
    t191 = *((unsigned int *)t165);
    t192 = *((unsigned int *)t190);
    t193 = (t191 || t192);
    if (t193 > 0)
        goto LAB77;

LAB78:    t196 = *((unsigned int *)t165);
    t197 = (~(t196));
    t198 = *((unsigned int *)t190);
    t199 = (t197 || t198);
    if (t199 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t190) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t165) > 0)
        goto LAB83;

LAB84:    memcpy(t164, t201, 8);

LAB85:    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t128, 32, t159, 32, t164, 32);
    goto LAB68;

LAB66:    memcpy(t128, t159, 8);
    goto LAB68;

LAB71:    t182 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t165) = 1;
    goto LAB76;

LAB75:    t189 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB76;

LAB77:    t194 = (t0 + 2008U);
    t195 = *((char **)t194);
    goto LAB78;

LAB79:    t194 = (t0 + 1048U);
    t200 = *((char **)t194);
    t194 = ((char*)((ng1)));
    memset(t201, 0, 8);
    xsi_vlog_unsigned_add(t201, 32, t200, 32, t194, 32);
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t164, 32, t195, 32, t201, 32);
    goto LAB85;

LAB83:    memcpy(t164, t195, 8);
    goto LAB85;

}


extern void work_m_02918536670131681723_3370043334_init()
{
	static char *pe[] = {(void *)Cont_41_0};
	xsi_register_didat("work_m_02918536670131681723_3370043334", "isim/mips_txt_isim_beh.exe.sim/work/m_02918536670131681723_3370043334.didat");
	xsi_register_executes(pe);
}
