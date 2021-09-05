/*
 * APP.c
 *
 * Created: 9/5/2021 1:28:43 AM
 *  Author: Mohamed El-Kholy
 */ 
#include  	 "../LIB/STD_TYPES.h"
#include "../MCAL/DIO/MDIO_interface.h"
#include "../MCAL/TIMER/Timer_interface.h"


void APP_init(void)
{
	/* Set Pin0 at PortA as output Pin */
	MDIO_voidSetPinDirection(GPIOA , PIN0 , HIGH) ;
	/* Initialize PIN0 at PORTA as LOW */
	MDIO_voidSetPinValue(GPIOA , PIN0 , LOW);
	/* CAll Timer Initialization With 
	* Timer 1 
	* 64 Prescaler
	* No Interrupt
	* Normal Mode */
	MTimer_voidInit();

}
