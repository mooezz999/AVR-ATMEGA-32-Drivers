 /********************************************************************************************************************
 *  File		: Int_Private.h
 *	Module		: INT
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:      
 *********************************************************************************************************************/
#ifndef INT_PRIVATE_H_
#define INT_PRIVATE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define INT_GICR_REG				(*(volatile u8*)0x5B)
#define INT0_Enable_BIT_NO							(6u)
#define INT1_Enable_BIT_NO							(7u)
#define INT2_Enable_BIT_NO							(5u)


#define INT_MCUCR_REG				(*(volatile u8*)0x55)
#define INT_MCUCSR_REG         		(*(volatile u8*)0x54)
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* INT_PRIVATE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Int_Private.h
 *********************************************************************************************************************/