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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P5/cpu_v2/M_DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {8192, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Always_31_0(char *t0)
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

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4592);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
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

LAB7:    xsi_set_current_line(38, ng0);

LAB18:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1664U);
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

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    t11 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB10);
    t12 = (t0 + 3584);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB11:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2864);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 2864);
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

LAB10:    t3 = (t0 + 3584);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB13:    xsi_set_current_line(34, ng0);

LAB15:    xsi_set_current_line(35, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2704);
    t14 = (t0 + 2704);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2704);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2864);
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

LAB17:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t11 = (t0 + 2864);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 32);
    goto LAB12;

LAB16:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(40, ng0);

LAB22:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 2704);
    t11 = (t0 + 2704);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2704);
    t18 = (t14 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2304U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t15, t16, t13, t19, 2, 1, t21, 12, 2);
    t20 = (t15 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (!(t27));
    t22 = (t16 + 4);
    t30 = *((unsigned int *)t22);
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

static void Cont_45_1(char *t0)
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

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4095U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4095U);
    t12 = (t0 + 4704);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 4095U;
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
    xsi_driver_vfirst_trans(t12, 0, 11);
    t25 = (t0 + 4608);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_46_2(char *t0)
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

LAB0:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2704);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2704);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2304U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 12, 2);
    t12 = (t0 + 4768);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4624);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_18403474373150011350_0495241494_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_45_1,(void *)Cont_46_2};
	xsi_register_didat("work_m_18403474373150011350_0495241494", "isim/mips_tb_isim_beh.exe.sim/work/m_18403474373150011350_0495241494.didat");
	xsi_register_executes(pe);
}
