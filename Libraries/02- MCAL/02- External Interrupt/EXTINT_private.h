/*
 * EXTINT_private.h
 *
 * Created: 12/9/2022 12:30:58 AM
 *  Author: alima
 */ 


#ifndef EXTINT_PRIVATE_H_
#define EXTINT_PRIVATE_H_

/* Registers definitions */
 
#define EXTINT_MCUCR  *((volatile u8*) 0x55)
#define EXTINT_MCUCSR *((volatile u8*) 0x54)
#define EXTINT_GICR   *((volatile u8*) 0x5B)
#define EXTINT_GIFR   *((volatile u8*) 0x5A)

/* Triggering source for External Interrupt */
enum{
	
	EXT_LOW=0,
	EXT_LOGIC_CHANGE=1,
	EXT_FALLING_ED=2,
	EXT_RISING_ED=3
	
	
	};

#endif /* EXTINT_PRIVATE_H_ */