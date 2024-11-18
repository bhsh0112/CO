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
static const char *ng0 = "/home/co-eda/Desktop/homework/P/P5/cpu_v4/D_EXT.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {14, 0};



static void Cont_29_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t10[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t8) = t17;
    xsi_vlog_mul_concat(t7, 14, 1, t5, 1U, t10, 1);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t7, 14, t6, 16, t2, 2);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t3, 32, t4, 32);
    t19 = (t0 + 3664);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 8);
    xsi_driver_vfirst_trans(t19, 0, 31);
    t24 = (t0 + 3568);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 28);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 28);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t6, 4, t5, 26, t2, 2);
    t15 = (t0 + 3728);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 3584);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_03269491721182383615_2663932823_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_03269491721182383615_2663932823", "isim/mips_tb_isim_beh.exe.sim/work/m_03269491721182383615_2663932823.didat");
	xsi_register_executes(pe);
}
