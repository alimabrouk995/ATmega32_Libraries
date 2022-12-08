/*
 * EXTINT_config.h
 *
 * Created: 12/9/2022 12:31:15 AM
 *  Author: alima
 */ 


#ifndef EXTINT_CONFIG_H_
#define EXTINT_CONFIG_H_

/* External Interrupt 0 config */
/*
	options: EXT_LOW, EXT_LOGIC_CHANGE, EXT_FALLING_ED, EXT_RISING_ED
*/
#define EXTINT0_SRC	EXT_LOW


/* External Interrupt 1 config */
/*
	options: EXT_LOW, EXT_LOGIC_CHANGE, EXT_FALLING_ED, EXT_RISING_ED
*/
#define EXTINT1_SRC	EXT_LOW


/* External Interrupt 2 config */
/*
	options: EXT_FALLING_ED, EXT_RISING_ED
*/
#define EXTINT2_SRC	EXT_FALLING_ED

#endif /* EXTINT_CONFIG_H_ */