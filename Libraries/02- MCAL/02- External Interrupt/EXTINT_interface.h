/*
 * EXTINT_interface.h
 *
 * Created: 12/9/2022 12:30:35 AM
 *  Author: alima
 */ 


#ifndef EXTINT_INTERFACE_H_
#define EXTINT_INTERFACE_H_

/* Function Prototypes */

/* External Interrupt 0 */

/* External Interrupt 0 Enable */
void MExtInterrupt0_voidEnable(void);

/* External Interrupt 0 Disable */
void MExtInterrupt0_voidDisable(void);

/* Read External Interrupt 0 Flag */
u8 MExtInterrupt0_ReadINTFlag(void);




/* External Interrupt 1 */

/* External Interrupt 1 Enable */
void MExtInterrupt1_voidEnable(void);

/* External Interrupt 1 Disable */
void MExtInterrupt1_voidDisable(void);

/* Read External Interrupt 1 Flag */
u8 MExtInterrupt1_ReadINTFlag(void);





/* External Interrupt 2 */

/* External Interrupt 2 Enable */
void MExtInterrupt2_voidEnable(void);

/* External Interrupt 2 Disable */
void MExtInterrupt2_voidDisable(void);

/* Read External Interrupt 2 Flag */
u8 MExtInterrupt2_ReadINTFlag(void);


#endif /* EXTINT_INTERFACE_H_ */