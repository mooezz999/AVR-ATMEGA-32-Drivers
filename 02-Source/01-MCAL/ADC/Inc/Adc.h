 /********************************************************************************************************************
 *  File		: Adc.h
 *	Module		: ADC
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 *********************************************************************************************************************/
#ifndef ADC_H
#define ADC_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Adc_Private.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define REF           ((u8) 1<<6)
#define AVCC5V_REF    1
#define INTERNAL_REF  3

#define ADC_LEFT_ADJUST_RESULT   ((u8)1<<5)     //ADC left adjust result

#define ADC_ENABLE				 ((u8)1<<7)     //ADC Enable
#define ADC_START_CONVERSION     ((u8)1<<6)     //ADC start conversion
#define ADC_INTERRUPT_ENABLE     ((u8)1<<3)     //ADC interrupt enable
/*					ADC prescaler			*/
/*ADC frequancy must be between 50KHZ and 200KHZ*/
#define ADCPS_2         (1)
#define ADCPS_4         (2)
#define ADCPS_8         (3)
#define ADCPS_16        (4)
#define ADCPS_32        (5)
#define ADCPS_64        (6)
#define ADCPS_128       (7)
#define ADIF_BIT_NO		(4)
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
    {
	  CH0=0,
	  CH1=1,
	  CH2=2,
	  CH3=3,
	  CH4=4,
	  CH5=5,
	  CH6=6,
	  CH7=7
   }adcChanel_t;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void adcInit(void);
u16 adcRead(adcChanel_t chnl);
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Adc.h
 *********************************************************************************************************************/
