 /********************************************************************************************************************
 *  File		: Eeprom14C16.h
 *	Module		: EEPROM14C16
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 *********************************************************************************************************************/
#ifndef EEPROM14C16_H_
#define EEPROM14C16_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "I2c.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

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
void Eeprom14C32_Init(void);
void Eeprom14C32_WriteByte(u8 addr, u8 data);
u8 Eeprom14C32_ReadByte(u8 addr);
 
#endif  /* EEPROM14C32_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Eeprom14C16.h
 *********************************************************************************************************************/