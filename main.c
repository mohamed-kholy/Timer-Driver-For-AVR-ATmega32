/*
 * Timer Task.c
 *
 * Created: 9/5/2021 1:26:39 AM
 * Author : Mohamed El-Kholy
 */ 

#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"
#include "MCAL/DIO/MDIO_interface.h"
#include "EUCAL/LED/LED_interface.h"
#include "MCAL/TIMER/Timer_interface.h"
/* define CPU Clock Cycle o 2 MHZ */
#define F_CPU 2000000

int main(void)
{
    /* Call APP Initialization Function */
	APP_init();
    while (1) 
    {
		/* First Turn ON LED at PORTA */
		EULED_voidLedON(GPIOA,PIN0);
		/* Adjust TCNT Register to Overflow after 300 ms */
		MTimer_s8SetTCNT(56161);
		/* Check if the Overflow Flag raised */
		MTimer_s8CheckFlag(OVERFLOW);
		/* Clear overflow flag */
		MTimer_voidClearFlag();
		/* After 300 ms Turn OFF The Led */
		EULED_voidLedOFF(GPIOA,PIN0);
		/* Adjust TCNT Register to Overflow after 500 ms */
		MTimer_s8SetTCNT(49911);
		/* Check if the Overflow Flag raised */
		MTimer_s8CheckFlag(OVERFLOW);
		/* Clear overflow flag */
		MTimer_voidClearFlag();
    }
}

