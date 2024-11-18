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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P1/ext/ext.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {14, 0};



static void Always_26_0(char *t0)
{
    char t7[8];
    char t10[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng2)));
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    xsi_vlog_mul_concat(t10, 16, 1, t8, 1U, t13, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t10, 16, t9, 16);
    t21 = (t0 + 1608);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t3, 16, t4, 16);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1048U);
    t8 = *((char **)t4);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t3, 16);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1048U);
    t8 = *((char **)t4);
    t4 = ((char*)((ng6)));
    t9 = (t0 + 1048U);
    t11 = *((char **)t9);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t9) = t20;
    xsi_vlog_mul_concat(t10, 14, 1, t4, 1U, t13, 1);
    xsi_vlogtype_concat(t7, 32, 32, 3U, t10, 14, t8, 16, t3, 2);
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB15;

}


extern void work_m_03656826707515395974_4241813833_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_03656826707515395974_4241813833", "isim/ext_tb_isim_beh.exe.sim/work/m_03656826707515395974_4241813833.didat");
	xsi_register_executes(pe);
}
