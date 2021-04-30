/**
 * @file activitytwo.h
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief headerfile for activitytwo.c containing function declerations and macros
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

//Header guards


#ifndef _ACTIVITYTWO__H_
    #define _ACTIVITYTWO__h_

#include <avr/io.h>
#include <util/delay.h>

#define VoltageReference (1<<REFS0)
#define EnableADC (1<<ADEN)
#define PreScalor (7<<ADPS0)
#define SelectMUX &=0xf8
#define SelectChannel ch&0b00000111
#define ADCSelect ADCSRA
#define StartConversion (1<<ADSC)
#define ConversionCompletes (!(ADCSRA&(1<<ADIF)))
#define EndConversion (1<<ADIF)




/**
 * @brief declaring ADC inititialising function
 * 
 */
void InitADC();

/**
 * @brief declaring ADC read function 
 * 
 * @param ch channel selection - decides which channel is being used to do ADC
 * @return uint16_t returns ADC value
 */
uint16_t ReadADC(uint8_t ch);

#endif