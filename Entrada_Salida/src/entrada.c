/*
 * pulsadores.c
 *
 *  Created on: 18/11/2015
 *      Author: MarcosDario
 */

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif
#include "entrada.h"

void Init_Port_Entrada(int puerto, int pin)
{

    switch(puerto)
        {
            case  0: LPC_GPIO0->FIODIR &=~(1<<pin);
					break;
            case  1: LPC_GPIO1->FIODIR &=~(1<<pin);
					break;
            case  2: LPC_GPIO2->FIODIR &=~(1<<pin);
					break;
            case  3: LPC_GPIO3->FIODIR &=~(1<<pin);
					break;
            case  4: LPC_GPIO4->FIODIR &=~(1<<pin);
					break;
            default:
            		break;
	    }



}

uint32_t Estado_Pulsador(int puerto,int pin)	//Indaga si un pin de un puerto esta en alto nivel.
{
	uint32_t estado;
	switch(puerto)
	{
		case  0: estado = ((LPC_GPIO0->FIOPIN & (0x1<<pin))== 0);
				 break;
        case  1: estado =((LPC_GPIO1->FIOPIN & (0x1<<pin))== 0);
                 break;
        case  2: estado =((LPC_GPIO2->FIOPIN & (0x1<<pin))== 0);
	             break;
        case  3: estado =((LPC_GPIO3->FIOPIN & (0x1<<pin))== 0);
		         break;
        case  4: estado =((LPC_GPIO4->FIOPIN & (0x1<<pin))== 0);
		         break;
        default:
	             break;
	}
	return estado;
}

void Enviar_Dato_Puerto(int puerto,unsigned int dato) //Pone en alto el nivel de salida de un pin.
{
	switch(puerto)
	{
        case  0: LPC_GPIO0->FIOPIN = dato;
			     break;
	    case  1: LPC_GPIO1->FIOPIN = dato;
			     break;
	    case  2: LPC_GPIO2->FIOPIN = dato;
				 break;
	    case  3: LPC_GPIO3->FIOPIN = dato;
				 break;
	    case  4: LPC_GPIO4->FIOPIN = dato;
				 break;
	    default:
	    	     break;
	  }
}


