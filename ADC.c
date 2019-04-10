/* 
 * File:   ADC.c
 * Author: jdoe8
 *
 * Created on February 7, 2019, 6:59 PM
 */
#include "init.h"


//PART 1
void main(){    
    uint8_t x;
    
    BarGraphInit();
    for(x=0; x<=8; x++){
        BarGraphWrite(x);
        __delay_ms(1000);
    }
  
}


/*
 //     PART 3
 void main(){
    uint16_t ADCvalue;
    uint16_t conversion;
    int conversionFactor=510;
    
    BarGraphInit();
    ADCinitB7();
    
    while(1){
        ADCvalue=ADCgetValue();
        conversion=ADCvalue/conversionFactor;     
        BarGraphWrite(conversion);
        __delay_ms(100);
    }
 }  
 */

