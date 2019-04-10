#include "init.h"


void BarGraphInit(){
    ANSELC=0x00;
    TRISC=0x00;
    LATC=0x00;
} 

void BarGraphWrite(uint8_t numb){
    uint8_t i;
    uint8_t valuePort=0xFF;
    uint8_t shift;
    
    shift=8-numb;    
    valuePort=valuePort>>shift;    
    
    LATC=valuePort;
}

void ADCinitB7(){
    TRISB7=1;     
    ANSB7=1;
    ADPCH=0b001111;   //sets B7 to analog converter
    ADCON0bits.FM=1;   //right justify
    ADCON0bits.CS=1;    //sets clock, don't know what to use so followed example
    ADCON0bits.ON=1;   //turns ADC on
}

uint16_t ADCgetValue(){
    uint16_t high=0x0000;
    uint16_t low=0x0000;
    uint16_t result;
    while(1){
        ADCON0bits.GO=1;  //start conversion
        while(ADCON0bits.GO);
        high=ADRESH;
        low=ADRESL;
        high=high<<8;
        result=high|low;
        
        return(result);
    }
}

      