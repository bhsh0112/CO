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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_16685661874628672123_3016065818_init();
    work_m_13334039488668915388_1452706411_init();
    work_m_03303169682692423535_0060011589_init();
    work_m_10253093738066726057_2133536858_init();
    work_m_08770329856748263213_0985893689_init();
    work_m_03440613055969981163_2484743739_init();
    work_m_09259497973481316279_2663932823_init();
    work_m_07622337358485451099_2862431528_init();
    work_m_13086276030769296167_2740441305_init();
    work_m_09573980868528763808_1312845761_init();
    work_m_03760116334469824721_4245161272_init();
    work_m_01951707229530110411_1096388036_init();
    work_m_13331891158053754946_0495241494_init();
    work_m_00172556219930735443_2988975366_init();
    work_m_04941471404750605048_3877310806_init();
    work_m_05916939032839477016_0258635663_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05916939032839477016_0258635663");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
