/*****************************************************************************
 *
 * Filename:
 * ---------
 *   devinfo_emi.c
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the EMI (external memory interface) related setting.
 *
 * Author:
 * -------
 *  EMI auto generator V0.01
 *
 *   Memory Device database last modified on 2016/10/21
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!  It could be overwritten!
 * More information: 
 * This file is auto generated by emigen.pl;
 * Pls remake or new preloader to generate!
 * By shaohui mods 20140306 @ longcheer.shanghai
 *------------------------------------------------------------------------------
*********************************************************************************/

#include "devinfo_emi.h"

#define NUM_EMI_RECORD (6)

int num_of_emi_records = NUM_EMI_RECORD ;

EMI_SETTINGS emi_settings[] =
{
     
	//H9TQ17ABJTBCUR_KUM
	{
		0x0,		/* sub_version */
		0x0203,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x90,0x01,0x4a,0x48,0x41,0x47,0x34,0x61,0x32,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A052,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x559A45D6,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF0048483,		/* DRAMC_CONF1_VAL */
		0xC00641D1,		/* DRAMC_DDR2CTL_VAL */
		0xBF0B0401,		/* DRAMC_TEST2_3_VAL */
		0x0180AE50,		/* DRAMC_CONF2_VAL */
		0xD1644742,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0x88888888,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x11001330,		/* DRAMC_ACTIM1_VAL*/
		0x17800000,		/* DRAMC_MISCTL0_VAL*/
		0x00001420,		/* DRAMC_ACTIM05T_VAL*/
		{0x40000000,0x40000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		{{ /*shaohui add*/0x00C30001,		/* LPDDR3_MODE_REG1 */
		0x00080002,		/* LPDDR3_MODE_REG2 */
		0x00020003,		/* LPDDR3_MODE_REG3 */
		0x00000006,		/* LPDDR3_MODE_REG5 */
		0x00FF000A,		/* LPDDR3_MODE_REG10 */
		0x0000003F}} /*shaohui add*/,		/* LPDDR3_MODE_REG63 */
	} ,
	//H9TQ26ADFTBCUR_KUM
	{
		0x0,		/* sub_version */
		0x0203,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x90,0x01,0x4A,0x48,0x42,0x47,0x34,0x61,0x32,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A062,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x559A45D6,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF0048783,		/* DRAMC_CONF1_VAL */
		0xC00641D1,		/* DRAMC_DDR2CTL_VAL */
		0xBF0B0401,		/* DRAMC_TEST2_3_VAL */
		0x0180AE50,		/* DRAMC_CONF2_VAL */
		0xD1644742,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0x88888888,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x11001330,		/* DRAMC_ACTIM1_VAL*/
		0x17800000,		/* DRAMC_MISCTL0_VAL*/
		0x00001420,		/* DRAMC_ACTIM05T_VAL*/
		{0x80000000,0x40000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		{{ /*shaohui add*/0x00C30001,		/* LPDDR3_MODE_REG1 */
		0x00080002,		/* LPDDR3_MODE_REG2 */
		0x00020003,		/* LPDDR3_MODE_REG3 */
		0x00000006,		/* LPDDR3_MODE_REG5 */
		0x00FF000A,		/* LPDDR3_MODE_REG10 */
		0x0000003F}} /*shaohui add*/,		/* LPDDR3_MODE_REG63 */
	} ,
	//KMRE1000BM_B512
	{
		0x0,		/* sub_version */
		0x0203,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x15,0x01,0x00,0x52,0x45,0x31,0x42,0x4D,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A0A2,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x559A45D6,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF0048483,		/* DRAMC_CONF1_VAL */
		0xC00641D1,		/* DRAMC_DDR2CTL_VAL */
		0xBF0B0401,		/* DRAMC_TEST2_3_VAL */
		0x0180AE50,		/* DRAMC_CONF2_VAL */
		0xD1644742,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0x88888888,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x11001330,		/* DRAMC_ACTIM1_VAL*/
		0x17800000,		/* DRAMC_MISCTL0_VAL*/
		0x00001420,		/* DRAMC_ACTIM05T_VAL*/
		{0x60000000,0x60000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		{{ /*shaohui add*/0x00C30001,		/* LPDDR3_MODE_REG1 */
		0x00080002,		/* LPDDR3_MODE_REG2 */
		0x00020003,		/* LPDDR3_MODE_REG3 */
		0x00000001,		/* LPDDR3_MODE_REG5 */
		0x00FF000A,		/* LPDDR3_MODE_REG10 */
		0x0000003F}} /*shaohui add*/,		/* LPDDR3_MODE_REG63 */
	} ,
	//H9TQ17ADFTACUR_KUM
	{
		0x0,		/* sub_version */
		0x0203,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x90,0x01,0x4A,0x48,0x41,0x47,0x34,0x61,0x32,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A062,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x559A45D6,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF0048483,		/* DRAMC_CONF1_VAL */
		0xC00641D1,		/* DRAMC_DDR2CTL_VAL */
		0xBF0B0401,		/* DRAMC_TEST2_3_VAL */
		0x0180AE50,		/* DRAMC_CONF2_VAL */
		0xD1644742,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0x88888888,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x11001330,		/* DRAMC_ACTIM1_VAL*/
		0x17800000,		/* DRAMC_MISCTL0_VAL*/
		0x00001420,		/* DRAMC_ACTIM05T_VAL*/
		{0x80000000,0x40000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		{{ /*shaohui add*/0x00C30001,		/* LPDDR3_MODE_REG1 */
		0x00080002,		/* LPDDR3_MODE_REG2 */
		0x00020003,		/* LPDDR3_MODE_REG3 */
		0x00000006,		/* LPDDR3_MODE_REG5 */
		0x00FF000A,		/* LPDDR3_MODE_REG10 */
		0x0000003F}} /*shaohui add*/,		/* LPDDR3_MODE_REG63 */
	} ,
	//KMQE10013M_B318
	{
		0x0,		/* sub_version */
		0x0203,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x15,0x01,0x00,0x51,0x45,0x31,0x33,0x4D,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A052,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x559A45D6,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF0048483,		/* DRAMC_CONF1_VAL */
		0xC00641D1,		/* DRAMC_DDR2CTL_VAL */
		0xBF0B0401,		/* DRAMC_TEST2_3_VAL */
		0x0180AE50,		/* DRAMC_CONF2_VAL */
		0xD1644742,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0x88888888,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x11001330,		/* DRAMC_ACTIM1_VAL*/
		0x17800000,		/* DRAMC_MISCTL0_VAL*/
		0x00001420,		/* DRAMC_ACTIM05T_VAL*/
		{0x40000000,0x40000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		{{ /*shaohui add*/0x00C30001,		/* LPDDR3_MODE_REG1 */
		0x00080002,		/* LPDDR3_MODE_REG2 */
		0x00020003,		/* LPDDR3_MODE_REG3 */
		0x00000001,		/* LPDDR3_MODE_REG5 */
		0x00FF000A,		/* LPDDR3_MODE_REG10 */
		0x0000003F}} /*shaohui add*/,		/* LPDDR3_MODE_REG63 */
	} ,
	//KMRX1000BM_B614
	{
		0x0,		/* sub_version */
		0x0203,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x15,0x01,0x00,0x52,0x58,0x31,0x42,0x4D,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0x0002A0A2,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x559A45D6,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF0048483,		/* DRAMC_CONF1_VAL */
		0xC00641D1,		/* DRAMC_DDR2CTL_VAL */
		0xBF0B0401,		/* DRAMC_TEST2_3_VAL */
		0x0180AE50,		/* DRAMC_CONF2_VAL */
		0xD1644742,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0x88888888,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x11001330,		/* DRAMC_ACTIM1_VAL*/
		0x17800000,		/* DRAMC_MISCTL0_VAL*/
		0x00001420,		/* DRAMC_ACTIM05T_VAL*/
		{0x60000000,0x60000000,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
		{{ /*shaohui add*/0x00C30001,		/* LPDDR3_MODE_REG1 */
		0x00080002,		/* LPDDR3_MODE_REG2 */
		0x00020003,		/* LPDDR3_MODE_REG3 */
		0x00000001,		/* LPDDR3_MODE_REG5 */
		0x00FF000A,		/* LPDDR3_MODE_REG10 */
		0x0000003F}} /*shaohui add*/,		/* LPDDR3_MODE_REG63 */
	} ,
};
