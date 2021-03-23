 /********************************************************************************************************************
 *  File		: Int.h
 *	Module		: INT
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 *********************************************************************************************************************/
#ifndef INT_H_
#define INT_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include <avr/interrupt.h>
#include "Bit_Math.h"
#include "Int_Private.h"
#include "Int_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define INT0_SENSE_LOW_LEVEL   		    (0<<0)
#define INT0_SENSE_LOGIC_CHANGE     	(1<<0)
#define INT0_SENSE_FAILING_EDGE       	(2<<0)
#define INT0_SENSE_RISING_EDGE       	(3<<0)

#define INT1_SENSE_LOW_LEVEL   		    (0<<2)
#define INT1_SENSE_LOGIC_CHANGE     	(1<<2)
#define INT1_SENSE_FAILING_EDGE       	(2<<2)
#define INT1_SENSE_RISING_EDGE       	(3<<2)

#define INT2_SENSE_FAILING_EDGE       	(0<<6)
#define INT2_SENSE_RISING_EDGE       	(1<<6)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum {
	INT0_ID,
	INT1_ID,
	INT2_ID
}Int_ExtIntID;
/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void INT_GlobalEnable(void);
void INT_GlobalDisable(void);
void INT_ExtEnable(Int_ExtIntID IntId);
void INT0_SensCfg(void);
void INT1_SensCfg(void);
void INT2_SensCfg(void);

#endif  /* INT_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Int.h
 *********************************************************************************************************************/