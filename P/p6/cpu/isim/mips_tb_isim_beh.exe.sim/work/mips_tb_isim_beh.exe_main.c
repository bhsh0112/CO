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
    work_m_02534363476673928406_1551134253_init();
    work_m_10754359708643078922_0060011589_init();
    work_m_01125802653758396438_2133536858_init();
    work_m_07613598132588256603_3370043334_init();
    work_m_02788005671627968790_0829669491_init();
    work_m_02304869009959801368_1917969920_init();
    work_m_03269491721182383615_2663932823_init();
    work_m_03421581922454433709_1621229167_init();
    work_m_14952955809414573340_2242653460_init();
    work_m_10249597040712491796_2862431528_init();
    work_m_16912094062204685042_0847918546_init();
    work_m_08919049609798114744_4245161272_init();
    work_m_00459773501102207730_3429823069_init();
    work_m_04198094447507089737_3925125743_init();
    work_m_10386701579662670855_0007399329_init();
    work_m_06867945575333286017_0943453456_init();
    work_m_10227975104430168446_3136829769_init();
    work_m_18403474373150011350_0495241494_init();
    work_m_16062023630069880124_4026064017_init();
    work_m_17497529593958388721_4155652503_init();
    work_m_01558844913304513090_1361726223_init();
    work_m_13567189834212234282_2356698774_init();
    work_m_02601351323438614069_0165140748_init();
    work_m_06609847031913853403_1721285546_init();
    work_m_03805550273172056640_2301317647_init();
    work_m_06193723719769582253_3877310806_init();
    work_m_05916939032839477016_0258635663_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05916939032839477016_0258635663");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
