/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <IntCtrl_types.h>
 *       Module:  NVIC_driver
 *
 *  Description:  <This file contains the NVIC driver interrupts types>     
 *  
 *********************************************************************************************************************/
#ifndef IntCtrl_types_H
#define IntCtrl_types_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum{
    GPIO_PORTA,
    GPIO_PORTB,
    GPIO_PORTC,
    GPIO_PORTD,
    GPIO_PORTE,
    UART0,
    UART1,
    SSI0,
    I2C0,
    PWM0_Fault,
    PWM0_Generator0,
    PWM0_Generator1,
    PWM0_Generator2,
    QEI0,
    ADC0_Sequence0,
    ADC0_Sequence1,
    ADC0_Sequence2,
    ADC0_Sequence3,
    Watchdog_Timers0and1,
    Timer0A_16or32Bit,
    Timer0B_16or32Bit,
    Timer1A_16or32Bit,
    Timer1B_16or32Bit,
    Timer2A_16or32Bit,
    Timer2B_16or32Bit,
    Analog_Comparator0,
    Analog_Comparator1,
    SystemControl=28,
    FlashMemoryControlAndEEPROMControl,
    GPIO_PortF,
    UART2=33,
    SSI1,
    Timer3A_16or32Bit,
    Timer3B_16or32Bit,
    I2C1,
    QEI1,
    CAN0,
    CAN1,
    HibernationModule=43,
    USB,
    PWM0_Generator3,
    UDMA_Software,
    UDMA_Error,
    ADC1_Sequence0,
    ADC1_Sequence1,
    ADC1_Sequence2,
    ADC1_Sequence3,
    SSI2=57,
    SSI3,
    UART3,
    UART4,
    UART5,
    UART6,
    UART7,
    I2C2=68,
    I2C3,
    Timer4A_16or32Bit, 
    Timer4B_16or32Bit,
    Timer5A_16or32Bit=92,
    Timer5B_16or32Bit,
    Timer0A_32or64Bit, 
    Timer0B_32or64Bit, 
    Timer1A_32or64Bit,
    Timer1B_32or64Bit,
    Timer2A_32or64Bit,
    Timer2B_32or64Bit,
    Timer3A_32or64Bit,
    Timer3B_32or64Bit, 
    Timer4A_32or64Bit, 
    Timer4B_32or64Bit, 
    Timer5A_32or64Bit, 
    Timer5B_32or64Bit, 
    SystemException,
    PWM1_Generator0=134,
    PWM1_Generator1,
    PWM1_Generator2,
    PWM1_Generator3,
    PWM1_Fault
}IntCtrl_InterruptType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 #endif  /* IntCtrl_types_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_types.h
 *********************************************************************************************************************/
