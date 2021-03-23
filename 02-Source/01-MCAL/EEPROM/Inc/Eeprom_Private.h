 /********************************************************************************************************************
 *  File		: Eeprom_Private.h
 *	Module		: EEPROM
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 *********************************************************************************************************************/
#ifndef EEPROM_PRIVATE_H
#define EEPROM_PRIVATE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define EEPROM_ARH_REG				(*(volatile u8*)0x3F)
#define EEPROM_ARL_REG				(*(volatile u8*)0x3E)
#define EEPROM_DR_REG				(*(volatile u8*)0x3D)
#define EEPROM_CR_REG				(*(volatile u8*)0x3C)
#define EERE				(0u)
#define EEWE             	(1u)
#define EEMWE				(2u)
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


#endif  /* EEPROM_PRIVATE_H */

/**********************************************************************************************************************
 *  END OF FILE: Eeprom_Private.h
 *********************************************************************************************************************/