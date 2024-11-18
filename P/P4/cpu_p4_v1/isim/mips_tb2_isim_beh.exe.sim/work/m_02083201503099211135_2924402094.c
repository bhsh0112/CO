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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P4/cpu_p4_v1/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {8192, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Always_32_0(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
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

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB7:    xsi_set_current_line(39, ng0);

LAB18:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4095U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 4095U);
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 12);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    t11 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB10);
    t12 = (t0 + 3744);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB11:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3024);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 3024);
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

LAB10:    t3 = (t0 + 3744);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB13:    xsi_set_current_line(35, ng0);

LAB15:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2704);
    t14 = (t0 + 2704);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2704);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3024);
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

LAB17:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t11 = (t0 + 3024);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 32);
    goto LAB12;

LAB16:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(41, ng0);

LAB22:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2144U);
    t5 = *((char **)t4);
    t4 = (t0 + 2704);
    t11 = (t0 + 2704);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2704);
    t18 = (t14 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t15, t16, t13, t19, 2, 1, t22, 12, 2);
    t23 = (t15 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (!(t27));
    t24 = (t16 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    goto LAB21;

LAB23:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t16), t36);
    goto LAB24;

}

static void Cont_50_1(char *t0)
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2704);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2704);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2864);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t14, 12, 2);
    t15 = (t0 + 4600);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 4520);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_02083201503099211135_2924402094_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Cont_50_1};
	xsi_register_didat("work_m_02083201503099211135_2924402094", "isim/mips_tb2_isim_beh.exe.sim/work/m_02083201503099211135_2924402094.didat");
	xsi_register_executes(pe);
}
