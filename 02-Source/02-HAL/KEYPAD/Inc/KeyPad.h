 /********************************************************************************************************************
 *  File		: KeyPad.h
 *	Module		: KEYPAD
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 *********************************************************************************************************************/
#ifndef KEYPAD_H_
#define KEYPAD_H_
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#define F_CPU 16000000UL
#include "Dio.h"
#include "KeyPad_Cfg.h"
#include <util/delay.h>
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
void KeyPad_Init(void);
u8 KeyPad_Scan(void);
u8 KeyPad_GetKey(void);
#endif  /* KEYPAD_H_ */

/**********************************************************************************************************************
 *  END OF FILE: KeyPad.h
 *********************************************************************************************************************/
