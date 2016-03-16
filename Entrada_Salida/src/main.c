/*
===============================================================================
 Name        : main.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <cr_section_macros.h>

#include "salida.h"
#include "entrada.h"
// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void) {

    // TODO: insert code here
	Init_Port_Salida(0,22);
	//Init_Port_Salida(2,11);
	//Init_Port_Salida(2,12);
	Init_Port_Entrada(2,12);

    // Enter an infinite loop, just incrementing a counter
    while(1) {
    	if(Estado_Pulsador(2,12) == 1){
    		while(!Estado_Pulsador(2,12)); // <-----ANTIREBOTE AQUI!!!
    		Output_High(0,22);
    	}
    	Output_Low(0,22);
    	/*Toggle(0,22);
    	for(i=0;i<1000000;i++);
    	Toggle(2,11);
    	for(i=0;i<1000000;i++);
    	Toggle(2,12);
    	for(i=0;i<1000000;i++);*/

    }
    return 0 ;
}
