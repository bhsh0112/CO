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
    work_m_00163586462942601518_1551134253_init();
    work_m_10754359708643078922_0060011589_init();
    work_m_01125802653758396438_2133536858_init();
    work_m_07613598132588256603_3370043334_init();
    work_m_02788005671627968790_0829669491_init();
    work_m_12174878969169680553_3092946469_init();
    work_m_03269491721182383615_2663932823_init();
    work_m_04316336197047475972_1621229167_init();
    work_m_11639020708992389209_2242653460_init();
    work_m_02238100737251532084_2862431528_init();
    work_m_09544026073308591596_0847918546_init();
    work_m_15501157307989680566_4245161272_init();
    work_m_00459773501102207730_3429823069_init();
    work_m_12977956266070820799_0007399329_init();
    work_m_16608992086197625106_0943453456_init();
    work_m_14513031475093192625_3136829769_init();
    work_m_18403474373150011350_0495241494_init();
    work_m_04533276456624061778_4155652503_init();
    work_m_16353541210210479038_1361726223_init();
    work_m_14150792950065693663_2356698774_init();
    work_m_00358944752668910344_1721285546_init();
    work_m_03805550273172056640_2301317647_init();
    work_m_17293649670762929449_3877310806_init();
    work_m_05916939032839477016_0258635663_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05916939032839477016_0258635663");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
