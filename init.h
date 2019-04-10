/* 
 * File:   init.h
 * Author: jdoe8
 *
 * Created on February 7, 2019, 7:12 PM
 */

#include <xc.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#pragma config WDTE=OFF
#define _XTAL_FREQ 4000000


#ifndef INIT_H
#define	INIT_H

#ifdef	__cplusplus
extern "C" {
#endif


#ifdef	__cplusplus
}
#endif

#endif	/* INIT_H */



void BarGraphInit();
void BarGraphWrite(uint8_t numb);
void ADCinit();
uint16_t ADCgetValue();
