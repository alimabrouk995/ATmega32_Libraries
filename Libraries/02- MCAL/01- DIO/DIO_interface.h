#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "STD_TYPES.h"


/* Ports */
#define DIO_PORTA	0
#define DIO_PORTB	1
#define DIO_PORTC	2
#define DIO_PORTD	3



/* Pin Number */
#define PIN0	0
#define PIN1	1
#define PIN2	2
#define PIN3	3
#define PIN4	4
#define PIN5	5
#define PIN6	6
#define PIN7	7



/*DIO Configurations */
typedef struct {
	
	u8 mode;
	u8 pull_type;
	
	}Pinx_Config;

/* Pin Mode */
enum 
{
	INPUT=0,
	OUTPUT=1
	};

/* Pull-up/down direction */
enum
{
	PULL_UP=0,
	FLOAT=1
};


/* Output values */
enum{
	LOW=0,
	HIGH=1
	
	
	};

/* Function Prototypes */

/* Set Pin Configuration */
void MDIO_voidSetPinxConfiguration (u8 copy_u8Port,u8 copy_u8Pin,Pinx_Config *config_ptr);

/* Set Pin Value */
void MDIO_SetPinxValue(u8 copy_u8port,u8 copy_u8pin,u8 copy_u8value);


/* Read Pin Value */
u8 MDIO_ReadPinxValue(u8 copy_u8port,u8 copy_u8pin);


#endif /* DIO_INTERFACE_H_ */