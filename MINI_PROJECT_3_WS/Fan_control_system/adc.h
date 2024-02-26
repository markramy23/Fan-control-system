/*
 * ADC.h
 * Description : Header file for the adc driver
 *  Created on: Oct 13, 2023
 *      Author: Mark
 */

#ifndef ADC_H_
#define ADC_H_
#include "std_types.h"
/*************************************************************************
 *                            DEFINITIONS                                *
 *************************************************************************/
#define ADC_MAXIMUM_VALUE 1023
#define ADC_REF_VOLT_VALUE 2.56
#define adc0 0
/*************************************************************************
 *                           TYPE DECLARATION                            *
 *************************************************************************/

/* enum to choose the reference voltage source for the adc*/
typedef enum{
	ADC_AREF,ADC_AVCC,ADC_INTERNAL_REF=3
}ADC_ReferenceVoltage;



/*enum to choose the prescaler of the adc clock*/
typedef enum{
	ADC_DIV_2=1,ADC_DIV_4,ADC_DIV_8,ADC_DIV_16,ADC_DIV_32,ADC_DIV_64,ADC_DIV_128
}ADC_Prescaler;



/* config struct to be sent to initialize the adc with the preferred settings*/
typedef struct{
ADC_ReferenceVoltage ref_volt;
ADC_Prescaler prescaler;
}ADC_ConfigType;

/*adc channel numbers */
typedef enum{
	ADC0,ADC1,ADC2,ADC3,ADC4,ADC5,ADC6,ADC7
}ADC_ChannelNmber;


/*************************************************************************
 *                         FUNCTIONS DECLARATION                         *
 *************************************************************************/


/*
 * this function takes a pointer to struct of type ADC_ConfigType
 * that contain the required prescaler and reference voltage for
 * the acd to be initialized with then it enables the adc
 */
void ADC_init(const ADC_ConfigType* Config_Ptr);





/*
 * this function takes input of type ADC_ChannelNumber which contains
 * the number of the adc channel desired to be read and starts conversion
 * then wait for the convedrsion to end and return with the results
 */
uint16 ADC_readChannel(ADC_ChannelNmber channel_num);
#endif /* ADC_H_ */
