/*
 * EXT_Interrupt.c
 *
 * Created: 12/9/2022 12:29:48 AM
 *  Author: alima
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXTINT_private.h"
#include "EXTINT_config.h"
#include "EXTINT_interface.h"

/* External Interrupt 0 Initialization */
void MExtInterrupt0_voidEnable(void)
{
	/* Enable External Interrupt 0 */
	SET_BIT(EXTINT_GICR,6);
	
	/* Select Triggering source for External Interrupt 0 */
	#if EXTINT0_SRC == EXT_LOW
		EXTINT_MCUCR |= 0b00;					/* Trigger source : Low Level */
	#elif EXTINT0_SRC == EXT_LOGIC_CHANGE
		EXTINT_MCUCR |= 0b01;					/* Trigger source : Logic change */
	#elif EXTINT0_SRC == EXT_FALLING_ED
		EXTINT_MCUCR |= 0b10;					/* Trigger source : falling edge */
	#elif EXTINT0_SRC == EXT_RISING_ED
		EXTINT_MCUCR |= 0b11;					/* Trigger source : rising edge */
	#endif
	
	
}

/* External Interrupt 0 Disable */
void MExtInterrupt0_voidDisable(void)
{
	/* Disable External Interrupt 0 */
	CLEAR_BIT(EXTINT_GICR,6);
}

/* Read External Interrupt 0 Flag */
u8 MExtInterrupt0_ReadINTFlag(void)
{
/* return EXT INT0 Flag */
return GET_BIT(EXTINT_GIFR,6);
}




/* External Interrupt 1 */

/* External Interrupt 1 Initialization */
void MExtInterrupt1_voidEnable(void)
{
	/* Enable External Interrupt 1 */
	SET_BIT(EXTINT_GICR,7);
	
	/* Select Triggering source for External Interrupt 1 */
	#if EXTINT1_SRC == EXT_LOW
	EXTINT_MCUCR |= 0b00 << 2 ;					/* Trigger source : Low Level */
	#elif EXTINT1_SRC == EXT_LOGIC_CHANGE
	EXTINT_MCUCR |= 0b01 << 2 ;					/* Trigger source : Logic change */
	#elif EXTINT1_SRC == EXT_FALLING_ED
	MCUCR |= 0b10 << 2 ;					/* Trigger source : falling edge */
	#elif EXTINT1_SRC == EXT_RISING_ED
	EXTINT_MCUCR |= 0b11 << 2 ;					/* Trigger source : rising edge */
	#endif
	
	
}


/* External Interrupt 1 Disable */
void MExtInterrupt1_voidDisable(void)
{
	/* Disable External Interrupt 1 */
	CLEAR_BIT(EXTINT_GICR,7);
}


/* Read External Interrupt 1 Flag */
u8 MExtInterrupt1_ReadINTFlag(void)
{
	/* return EXT INT1 Flag */
	return GET_BIT(EXTINT_GIFR,7);
}


/* External Interrupt 2 */

/* External Interrupt 2 Initialization */
void MExtInterrupt2_voidEnable(void)
{
	/* Enable External Interrupt 2 */
	SET_BIT(EXTINT_GICR,5);
	
	
	/* Select Triggering source for External Interrupt 2 */
	#if EXTINT2_SRC == EXT_FALLING_ED
	CLEAR_BIT(EXTINT_MCUCSR,6);				/* Trigger source : falling edge */
	#elif EXTINT2_SRC == EXT_RISING_ED
	SET_BIT(EXTINT_MCUCSR,6) ;				/* Trigger source : rising edge */
	#endif
	
	
}

/* External Interrupt 2 Disable */
void MExtInterrupt2_voidDisable(void)
{
	/* Disable External Interrupt 2 */
	CLEAR_BIT(EXTINT_GICR,5);
}
/* Read External Interrupt 2 Flag */
u8 MExtInterrupt2_ReadINTFlag(void)
{
	/* return EXT INT2 Flag */
	return GET_BIT(EXTINT_GIFR,5);
}
