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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P5/cpu/submit_p5/GRF.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Always_34_0(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
    char t53[8];
    char t84[8];
    char t85[8];
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
    char *t13;
    char *t14;
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
    unsigned int t38;
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
    unsigned int t66;
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
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    int t100;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5072);
    *((int *)t2) = 1;
    t3 = (t0 + 4288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);

LAB18:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t2) != 0)
        goto LAB21;

LAB22:    t5 = (t15 + 4);
    t27 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t5);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB23;

LAB24:    memcpy(t53, t15, 8);

LAB25:    t26 = (t53 + 4);
    t78 = *((unsigned int *)t26);
    t79 = (~(t78));
    t80 = *((unsigned int *)t53);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    t11 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB10);
    t12 = (t0 + 4064);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB11:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3344);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t5, 32);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 4064);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB13:    xsi_set_current_line(38, ng0);

LAB15:    xsi_set_current_line(39, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 3184);
    t14 = (t0 + 3184);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3184);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3344);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t11 = (t0 + 3344);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 32);
    goto LAB12;

LAB16:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t15) = 1;
    goto LAB22;

LAB21:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB23:    t11 = (t0 + 2144U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t13 = (t12 + 4);
    t14 = (t11 + 4);
    t34 = *((unsigned int *)t12);
    t37 = *((unsigned int *)t11);
    t38 = (t34 ^ t37);
    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t14);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t14);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB27;

LAB26:    if (t45 != 0)
        goto LAB28;

LAB29:    memset(t17, 0, 8);
    t19 = (t16 + 4);
    t48 = *((unsigned int *)t19);
    t49 = (~(t48));
    t50 = *((unsigned int *)t16);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t19) != 0)
        goto LAB32;

LAB33:    t54 = *((unsigned int *)t15);
    t55 = *((unsigned int *)t17);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t21 = (t15 + 4);
    t22 = (t17 + 4);
    t23 = (t53 + 4);
    t57 = *((unsigned int *)t21);
    t58 = *((unsigned int *)t22);
    t59 = (t57 | t58);
    *((unsigned int *)t23) = t59;
    t60 = *((unsigned int *)t23);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB27:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB28:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t17) = 1;
    goto LAB33;

LAB32:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB33;

LAB34:    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t23);
    *((unsigned int *)t53) = (t62 | t63);
    t24 = (t15 + 4);
    t25 = (t17 + 4);
    t64 = *((unsigned int *)t15);
    t65 = (~(t64));
    t66 = *((unsigned int *)t24);
    t67 = (~(t66));
    t68 = *((unsigned int *)t17);
    t69 = (~(t68));
    t70 = *((unsigned int *)t25);
    t71 = (~(t70));
    t28 = (t65 & t67);
    t31 = (t69 & t71);
    t72 = (~(t28));
    t73 = (~(t31));
    t74 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t74 & t72);
    t75 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t72);
    t77 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t77 & t73);
    goto LAB36;

LAB37:    xsi_set_current_line(43, ng0);

LAB40:    xsi_set_current_line(44, ng0);
    t29 = (t0 + 2304U);
    t83 = *((char **)t29);
    t29 = (t0 + 3184);
    t86 = (t0 + 3184);
    t87 = (t86 + 72U);
    t88 = *((char **)t87);
    t89 = (t0 + 3184);
    t90 = (t89 + 64U);
    t91 = *((char **)t90);
    t92 = (t0 + 2144U);
    t93 = *((char **)t92);
    xsi_vlog_generic_convert_array_indices(t84, t85, t88, t91, 2, 1, t93, 5, 2);
    t92 = (t84 + 4);
    t94 = *((unsigned int *)t92);
    t32 = (!(t94));
    t95 = (t85 + 4);
    t96 = *((unsigned int *)t95);
    t35 = (!(t96));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB41;

LAB42:    goto LAB39;

LAB41:    t97 = *((unsigned int *)t84);
    t98 = *((unsigned int *)t85);
    t99 = (t97 - t98);
    t100 = (t99 + 1);
    xsi_vlogvar_wait_assign_value(t29, t83, 0, *((unsigned int *)t85), t100, 0LL);
    goto LAB42;

}

static void Cont_49_1(char *t0)
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

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3184);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3184);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1824U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5184);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5088);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_50_2(char *t0)
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

LAB0:    t1 = (t0 + 4752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3184);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3184);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1984U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5248);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5104);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_03421581922454433709_1621229167_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Cont_49_1,(void *)Cont_50_2};
	xsi_register_didat("work_m_03421581922454433709_1621229167", "isim/mips_tb_isim_beh.exe.sim/work/m_03421581922454433709_1621229167.didat");
	xsi_register_executes(pe);
}
