#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_private.h"
#include "DIO_config.h"
#include "DIO_interface.h"

/* Pin Mode */
static void DIO_voidSetPinxMode (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8Mode);

/* Pull-up/down direction */
static void DIO_voidSetPinxPullType (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8PullType);

/* Set Pin Configuration */
void MDIO_voidSetPinxConfiguration (u8 copy_u8Port,u8 copy_u8Pin,Pinx_Config *config_ptr)
{
	/* Pin Mode */
	DIO_voidSetPinxMode (copy_u8Port,copy_u8Pin,config_ptr->mode);
	
	/* Pull-up/down direction */
	DIO_voidSetPinxPullType (copy_u8Port,copy_u8Pin,config_ptr->pull_type);
	
	
	
}

static void DIO_voidSetPinxMode (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8Mode)
{
	switch (copy_u8Mode)
	{
		/* Set to Input */
		case INPUT:
		
		switch (copy_u8Port)
		{
			case DIO_PORTA: CLEAR_BIT(DDRA,copy_u8Pin); break;	 /* Port A */
			case DIO_PORTB: CLEAR_BIT(DDRB,copy_u8Pin); break;	 /* Port B */
			case DIO_PORTC: CLEAR_BIT(DDRC,copy_u8Pin); break;	 /* Port C */
			case DIO_PORTD: CLEAR_BIT(DDRD,copy_u8Pin); break;   /* Port D */
			
		}
		break;
		
		/* Set to Output */
		case OUTPUT:
		switch (copy_u8Port)
		{
			case DIO_PORTA: SET_BIT(DDRA,copy_u8Pin); break;	/* Port A */
			case DIO_PORTB: SET_BIT(DDRB,copy_u8Pin); break;	/* Port B */
			case DIO_PORTC: SET_BIT(DDRC,copy_u8Pin); break;	/* Port C */
			case DIO_PORTD: SET_BIT(DDRD,copy_u8Pin); break;	/* Port D */
			
		}
		break;
		
		
		
		
	}
	
	
	
	
	
}

static void DIO_voidSetPinxPullType (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8PullType)
{
	switch (copy_u8PullType)
	{
		/* Enable Pull-up resistance */
		case PULL_UP:
		
		switch (copy_u8Port)
		{
			case DIO_PORTA: SET_BIT(PORTA,copy_u8Pin); break;	/* Port A */
			case DIO_PORTB: SET_BIT(PORTB,copy_u8Pin); break;	/* Port B */
			case DIO_PORTC: SET_BIT(PORTC,copy_u8Pin); break;	/* Port C */
			case DIO_PORTD: SET_BIT(PORTD,copy_u8Pin); break;	/* Port D */
			
		}
		break;
		
		/* Float */
		case FLOAT:
		switch (copy_u8Port)
		{
			case DIO_PORTA: CLEAR_BIT(PORTA,copy_u8Pin); break;  /* Port A */
			case DIO_PORTB: CLEAR_BIT(PORTB,copy_u8Pin); break;  /* Port B */
			case DIO_PORTC: CLEAR_BIT(PORTC,copy_u8Pin); break;  /* Port C */
			case DIO_PORTD: CLEAR_BIT(PORTD,copy_u8Pin); break;  /* Port D */
			
		}
		break;
		
		
		
		
	}
	
	
	
	
	
}


/* Set Pin Value */
void MDIO_SetPinxValue(u8 copy_u8port,u8 copy_u8pin,u8 copy_u8value)
{
	
	switch (copy_u8port)
	{
		case DIO_PORTA: PORTA |=copy_u8value << copy_u8pin; break;	/* Port A */
		case DIO_PORTB: PORTB |=copy_u8value << copy_u8pin; break;	/* Port B */
		case DIO_PORTC: PORTC |=copy_u8value << copy_u8pin; break;	/* Port C */
		case DIO_PORTD: PORTD |=copy_u8value << copy_u8pin; break;	/* Port D */
	}
	
	
	
}
/* Read Pin Value */
u8 MDIO_ReadPinxValue(u8 copy_u8port,u8 copy_u8pin)
{
	u8 local_u8value;
	
	switch (copy_u8port)
	{
		case DIO_PORTA: local_u8value=GET_BIT(PINA,copy_u8pin); break;	/* Port A */
		case DIO_PORTB: local_u8value=GET_BIT(PINB,copy_u8pin); break;	/* Port B */
		case DIO_PORTC: local_u8value=GET_BIT(PINC,copy_u8pin); break;	/* Port C */
		case DIO_PORTD: local_u8value=GET_BIT(PIND,copy_u8pin); break;	/* Port D */
	}
	
	/* return local variable value */
	return local_u8value;
}