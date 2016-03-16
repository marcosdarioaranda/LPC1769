/*
 * leds.h
 *
 *  Created on: 27/10/2015
 *      Author: MarcosDario
 */

#ifndef LEDS_H_
#define LEDS_H_

#define PIN_3    3
#define PIN_0    0
#define PIN_1    1
#define PIN_2    2
#define PIN_4    4
#define PIN_5    5
#define PIN_7    7
#define PIN_6    6
#define PIN_8    8
#define PIN_9    9
#define PIN_10   10
#define PIN_11   11
#define PIN_12   12
#define PIN_22   22
#define PIN_27   27
#define PIN_28   28
#define PIN_13   13
#define PTO_0    0
#define PTO_2    2
#define SALIDA   1
#define ALTO     1
#define BAJO     0
#define SI       1
#define NO       0
void Init_Port_Salida(int puerto,int pin);    //Inicializa un pin de un puerto.
void Output_High(int puerto,int pin);         //Pone en alto el nivel de salida de un pin.
void Output_Low(int puerto,int pin);          //Pone a bajo el nivel de salida de un pin.
void Toggle(int puerto,int pin);             //Invierte el nivel de salida de un pin.

#endif /* LEDS_H_ */
