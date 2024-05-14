
#ifndef DRIVER_STM_H_
#define DRIVER_STM_H_

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Ifx_Types.h"
#include "IfxStm.h"
#include "IfxCpu_Irq.h"
/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*-------------------------------------------------Data Structures---------------------------------------------------*/
/*********************************************************************************************************************/
 typedef struct
 {
         uint8 u8nuScheduling1msFlag;
         uint8 u8nuScheduling10msFlag;
         uint8 u8nuScheduling50msFlag;
         uint8 u8nuScheduling100msFlag;
         uint8 u8nuScheduling500msFlag;
 }SchedulingFlag;
/*********************************************************************************************************************/
/*--------------------------------------------Private Variables/Constants--------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/

extern SchedulingFlag stSchedulingInfo;

void Driver_Stm_Init(void);

#endif /* DRIVER_STM_H_ */