/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_PSADSG.h
 *     Workspace:  C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea3/PSADSG-nz2999/PSADSG/autosar
 *     SW-C Type:  Ap_PSADSG
 *  Generated at:  Tue Feb  6 14:46:10 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_PSADSG> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_PSADSG_H
# define _RTE_AP_PSADSG_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_PSADSG, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DampingCmd_MtrNm_f32 ((Float)0)
# define Rte_InitValue_HwTorque_HwNm_f32 ((Float)0)
# define Rte_InitValue_PsaDampgCmd_MtrNm_f32 ((Float)0)
# define Rte_InitValue_VehicleSpeed_Kph_f32 ((Float)0)



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_PSADSG_Per1_DampingCmd_MtrNm_f32() \
  (Rte_Inst_Ap_PSADSG->PSADSG_Per1_DampingCmd_MtrNm_f32->value)

# define Rte_IRead_PSADSG_Per1_HwTorque_HwNm_f32() \
  (Rte_Inst_Ap_PSADSG->PSADSG_Per1_HwTorque_HwNm_f32->value)

# define Rte_IRead_PSADSG_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_PSADSG->PSADSG_Per1_VehicleSpeed_Kph_f32->value)

# define Rte_IWrite_PSADSG_Per1_PsaDampgCmd_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_PSADSG->PSADSG_Per1_PsaDampgCmd_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_PSADSG_Per1_PsaDampgCmd_MtrNm_f32() \
  (&Rte_Inst_Ap_PSADSG->PSADSG_Per1_PsaDampgCmd_MtrNm_f32->value)




# define RTE_START_SEC_AP_PSADSG_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PSADSG_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Float Rte_IRead_PSADSG_Per1_DampingCmd_MtrNm_f32(void)
 *   Float Rte_IRead_PSADSG_Per1_HwTorque_HwNm_f32(void)
 *   Float Rte_IRead_PSADSG_Per1_VehicleSpeed_Kph_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_PSADSG_Per1_PsaDampgCmd_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_PSADSG_Per1_PsaDampgCmd_MtrNm_f32(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PSADSG_APPL_CODE) PSADSG_Per1(void);

# define RTE_STOP_SEC_AP_PSADSG_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1517917282
#    error "The magic number of the generated file <C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea3/PSADSG-nz2999/PSADSG/tools/contract/Ap_PSADSG/Rte_Ap_PSADSG.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1517917282
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_PSADSG_H */
