/*
 * pulsadores.h
 *
 *  Created on: 18/11/2015
 *      Author: MarcosDario
 */

#ifndef PULSADORES_H_
#define PULSADORES_H_
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
#define ENTRADA  0
#define ALTO     1
#define BAJO     0
#define SI       1
#define NO       0
/*Inicializa un pin de un puerto como entrada*/
void Init_Port_Entrada(int puerto,int pin);
/*Indaga si un pin de un puerto esta en alto nivel*/
uint32_t Estado_Pulsador(int puerto,int pin);
void Enviar_Dato_Puerto(int puerto,unsigned int dato);

#endif /* PULSADORES_H_ */
