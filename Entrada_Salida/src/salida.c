/*
 * leds.c
 *
 *  Created on: 27/10/2015
 *      Author: MarcosDario
 */
#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include "salida.h"

void Init_Port_Salida(int puerto, int pin)
{

	switch(puerto)
	{
	  case  0: LPC_GPIO0->FIODIR |= (1<<pin);
	   		   break;
	  case  1: LPC_GPIO1->FIODIR |= (1<<pin);
	   		   break;
	  case  2: LPC_GPIO2->FIODIR |= (1<<pin);
	   		   break;
	  case  3: LPC_GPIO3->FIODIR |= (1<<pin);
	   		   break;
	  case  4: LPC_GPIO4->FIODIR |= (1<<pin);
	   		   break;
	  default:
	   		   break;
     }
}

void Output_High(int puerto,int pin) //Pone en alto el nivel de salida de un pin.
{
	switch(puerto)
	{
	  case  0: LPC_GPIO0->FIOSET |= (1<<pin);
	           break;
	  case  1: LPC_GPIO1->FIOSET |= (1<<pin);
	           break;
	  case  2: LPC_GPIO2->FIOSET |= (1<<pin);
	           break;
	  case  3: LPC_GPIO3->FIOSET |= (1<<pin);
	           break;
	  case  4: LPC_GPIO4->FIOSET |= (1<<pin);
	           break;
	  default:
		  	   break;
	 }
}
void Output_Low(int puerto,int pin)//Pone a bajo el nivel de salida de un pin.
{
	switch(puerto)
	{
	   case  0: LPC_GPIO0->FIOCLR |= (1<<pin);
	            break;
	   case  1: LPC_GPIO1->FIOCLR |= (1<<pin);
	            break;
	   case  2: LPC_GPIO2->FIOCLR |= (1<<pin);
	            break;
	   case  3: LPC_GPIO3->FIOCLR |= (1<<pin);
	            break;
	   case  4: LPC_GPIO4->FIOCLR |= (1<<pin);
	            break;
	   default:
		   	   	break;
	}
}
void Toggle(int puerto,int pin)//Invierte el nivel de salida de un pin.
{
	switch(puerto)
	{
	    case  0: LPC_GPIO0->FIOPIN ^= (1<<pin);
	             break;
	    case  1: LPC_GPIO1->FIOPIN ^= (1<<pin);
	             break;
	    case  2: LPC_GPIO2->FIOPIN ^= (1<<pin);
	             break;
	    case  3: LPC_GPIO3->FIOPIN ^= (1<<pin);
	             break;
	    case  4: LPC_GPIO4->FIOPIN ^= (1<<pin);
	             break;
	    default:
	             break;
	}
}
