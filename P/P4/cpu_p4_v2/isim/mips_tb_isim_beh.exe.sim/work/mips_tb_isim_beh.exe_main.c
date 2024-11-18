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
    work_m_05403385799241246983_1733832700_init();
    work_m_05932492279243767533_3718137407_init();
    work_m_09583302453452943820_0467708899_init();
    work_m_01677645152735675593_1279674626_init();
    work_m_17714429358492184232_0730253591_init();
    work_m_11249117011185778202_0289115146_init();
    work_m_02294335602462720316_1621229167_init();
    work_m_06373202459154733892_3343731264_init();
    work_m_12880365771223173357_1458274580_init();
    work_m_15778127091133233308_0886308060_init();
    work_m_02084779493568877537_2924402094_init();
    work_m_09467337552148477010_2652014560_init();
    work_m_05459058270722824447_3877310806_init();
    work_m_05916939032839477016_0258635663_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05916939032839477016_0258635663");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
