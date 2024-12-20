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
    work_m_17483870638691560187_1551134253_init();
    work_m_17051060427708190212_0060011589_init();
    work_m_08185406626123283195_3092946469_init();
    work_m_02918536670131681723_3370043334_init();
    work_m_05411199560832315971_0829669491_init();
    work_m_03269491721182383615_2663932823_init();
    work_m_03421581922454433709_1621229167_init();
    work_m_14952955809414573340_2242653460_init();
    work_m_10249597040712491796_2862431528_init();
    work_m_12665459400067707780_0847918546_init();
    work_m_07551027355182672078_4245161272_init();
    work_m_09028394621870146005_1882120724_init();
    work_m_00459773501102207730_3429823069_init();
    work_m_10386701579662670855_0007399329_init();
    work_m_07022987465313536497_0943453456_init();
    work_m_17682885553441732208_3136829769_init();
    work_m_10048493688111073923_2480407014_init();
    work_m_13283432718324744117_3086430786_init();
    work_m_08370694831540510507_4155652503_init();
    work_m_01558844913304513090_1361726223_init();
    work_m_08886563985825645967_3975733304_init();
    work_m_08077982602002729315_2356698774_init();
    work_m_01340902925575373865_1721285546_init();
    work_m_03805550273172056640_2301317647_init();
    work_m_03198437607969973725_3508565487_init();
    work_m_13636007564002342625_0156190743_init();
    work_m_03863648400811180981_0053799672_init();
    work_m_11037578179092535565_3877310806_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_11037578179092535565_3877310806");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
