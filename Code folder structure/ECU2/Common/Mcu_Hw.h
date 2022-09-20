/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Mcu_Hw.h>
 *       Module:  Mcu
 *
 *  Description:  <This file contains the declarations of registers>     
 *  
 *********************************************************************************************************************/
#ifndef Mcu_Hw_H
#define Mcu_Hw_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Platform_Types.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define CORTEXM4_PRIV_PERIPH_BASE_ADDR                  0xE000E000
#define CORTEXM4_SYSCTRL_BASE_ADDR                      0x400FE000
/* *************************************SYSTICK REGISTERS*************************************************/

#define SYSTICK_REGISTER                                ((volatile SYSTICK_REG*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x010))
/* *************************************NVIC REGISTERS*************************************************/
#define NVIC_REGISTER_EN                                ((volatile NVIC_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x100))
#define NVIC_REGISTER_DIS                               ((volatile NVIC_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x180))
#define NVIC_REGISTER_PEND                              ((volatile NVIC_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x200))
#define NVIC_REGISTER_UNPEND                            ((volatile NVIC_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x280))
#define NVIC_REGISTER_ACTIVE                            ((volatile NVIC_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x180))
#define NVIC_REGISTER_PRI                               ((volatile NVIC_PRI_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x400))
#define NVIC_REGISTER_SWTRIG                            ((volatile NVIC_REG_NO*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0xF00))


/*************************************SCB REGISTERS*************************************************/

#define SCB_REG_ACTLR                                   (volatile INT_CTRL_TAG*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0x008)
#define SCB_REG                                         ((volatile SCB_REG_TYPE*)(CORTEXM4_PRIV_PERIPH_BASE_ADDR + 0xD00))

/**********************************************************************************************************************/


/*************************************SYSCTRL REGISTERS*************************************************/
#define SYSCTRL_RCC_REG                                 ((volatile INT_CTRL_TAG*)(CORTEXM4_SYSCTRL_BASE_ADDR + 0x060))
#define SYSCTRL_GPIOHBCTL_REG                           ((volatile INT_CTRL_TAG*)(CORTEXM4_SYSCTRL_BASE_ADDR + 0x06C))
#define SYSCTRL_REG_SET1                                ((volatile SYSCTR_SET1*)(CORTEXM4_SYSCTRL_BASE_ADDR + 0x600))
#define SYSCTR_RCGCUSB_REG                              ((volatile INT_CTRL_TAG*)(CORTEXM4_SYSCTRL_BASE_ADDR + 0x628))
#define SYSCTRL_REG_SET2                                ((volatile SYSCTR_SET2*)(CORTEXM4_SYSCTRL_BASE_ADDR + 0x634))
#define SYSCTRL_REG_SET3                                ((volatile SYSCTR_SET3*)(CORTEXM4_SYSCTRL_BASE_ADDR + 0x658))

/**************************************GPIO REGISTERS*************************************************/
#define GPIO_PORTA_GPIODATA                                  ((volatile INT_CTRL_TAG*)(0x400583FC))
#define GPIO_PORTB_GPIODATA                                  ((volatile INT_CTRL_TAG*)(0x400593FC))
#define GPIO_PORTC_GPIODATA                                  ((volatile INT_CTRL_TAG*)(0x4005A3FC))
#define GPIO_PORTD_GPIODATA                                  ((volatile INT_CTRL_TAG*)(0x4005B3FC))
#define GPIO_PORTE_GPIODATA                                  ((volatile INT_CTRL_TAG*)(0x4005C3FC))
#define GPIO_PORTF_GPIODATA                                  ((volatile INT_CTRL_TAG*)(0x4005D3FC))

#define GPIO_PORTA_REG_SET1                                  ((volatile GPIO_REG_SET1*)(0x40058000+0x400))
#define GPIO_PORTB_REG_SET1                                  ((volatile GPIO_REG_SET1*)(0x40059000+0x400))
#define GPIO_PORTC_REG_SET1                                  ((volatile GPIO_REG_SET1*)(0x4005A000+0x400))
#define GPIO_PORTD_REG_SET1                                  ((volatile GPIO_REG_SET1*)(0x4005B000+0x400))
#define GPIO_PORTE_REG_SET1                                  ((volatile GPIO_REG_SET1*)(0x4005C000+0x400))
#define GPIO_PORTF_REG_SET1                                  ((volatile GPIO_REG_SET1*)(0x4005D000+0x400))

#define GPIO_PORTA_REG_SET2                                  ((volatile GPIO_REG_SET2*)(0x40058000+0x500))
#define GPIO_PORTB_REG_SET2                                  ((volatile GPIO_REG_SET2*)(0x40059000+0x500))
#define GPIO_PORTC_REG_SET2                                  ((volatile GPIO_REG_SET2*)(0x4005A000+0x500))
#define GPIO_PORTD_REG_SET2                                  ((volatile GPIO_REG_SET2*)(0x4005B000+0x500))
#define GPIO_PORTE_REG_SET2                                  ((volatile GPIO_REG_SET2*)(0x4005C000+0x500))
#define GPIO_PORTF_REG_SET2                                  ((volatile GPIO_REG_SET2*)(0x4005D000+0x500))
	
/***************************************GPT Registers**************************************************/
#define TIMER0_16_32_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40030000+0x000))
#define TIMER1_16_32_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40031000+0x000))
#define TIMER2_16_32_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40032000+0x000))
#define TIMER3_16_32_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40033000+0x000))
#define TIMER4_16_32_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40034000+0x000))
#define TIMER5_16_32_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40034000+0x000))

#define TIMER0_16_32_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40030000+0x018))
#define TIMER1_16_32_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40031000+0x018))
#define TIMER2_16_32_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40032000+0x018))
#define TIMER3_16_32_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40033000+0x018))
#define TIMER4_16_32_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40034000+0x018))
#define TIMER5_16_32_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40035000+0x018))

#define TIMER0_32_64_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40036000+0x000))
#define TIMER1_32_64_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x40037000+0x000))
#define TIMER2_32_64_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x4003C000+0x000))
#define TIMER3_32_64_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x4003D000+0x000))
#define TIMER4_32_64_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x4003E000+0x000))
#define TIMER5_32_64_REG_SET1                                  ((volatile GPT_REG_SET1*)(0x4003F000+0x000))

#define TIMER0_32_64_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40036000+0x018))
#define TIMER1_32_64_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x40037000+0x018))
#define TIMER2_32_64_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x4003C000+0x018))
#define TIMER3_32_64_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x4003D000+0x018))
#define TIMER4_32_64_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x4003E000+0x018))
#define TIMER5_32_64_REG_SET2                                  ((volatile GPT_REG_SET2*)(0x4003F000+0x018))
/*************************************************************************************************************/
typedef struct 
{
    u32 bit_0       :1;
    u32 bit_1       :1;
    u32 bit_2       :1;
    u32 bit_3       :1;
    u32 bit_4       :1;
    u32 bit_5       :1;
    u32 bit_6       :1;
    u32 bit_7       :1;
    u32 bit_8       :1;
    u32 bit_9       :1;
    u32 bit_10      :1;
    u32 bit_11      :1;
    u32 bit_12      :1;
    u32 bit_13      :1;
    u32 bit_14      :1;
    u32 bit_15      :1;
    u32 bit_16      :1;
    u32 bit_17      :1;
    u32 bit_18      :1;
    u32 bit_19      :1;
    u32 bit_20      :1;
    u32 bit_21      :1;
    u32 bit_22      :1;
    u32 bit_23      :1;
    u32 bit_24      :1;
    u32 bit_25      :1;
    u32 bit_26      :1;
    u32 bit_27      :1;
    u32 bit_28      :1;
    u32 bit_29      :1;
    u32 bit_30      :1;
    u32 bit_31      :1;
}REG32_BF;

typedef enum 
{
     bit0,      
     bit1,       
     bit2,       
     bit3,       
     bit4,       
     bit5,       
     bit6,      
     bit7,      
     bit8,   
     bit9,      
     bit10,    
     bit11,     
     bit12,     
     bit13, 
     bit14,   
     bit15,   
     bit16,    
     bit17,  
     bit18,
     bit19,   
     bit20,     
     bit21,     
     bit22,      
     bit23,      
     bit24,    
     bit25,     
     bit26,      
     bit27,     
     bit28,     
     bit29,      
     bit30,      
     bit31      
	 } BIT_NO;

typedef union 
{
    u32 R;
    REG32_BF B;
}INT_CTRL_TAG;


typedef struct 
{
    INT_CTRL_TAG STCTRL;
    INT_CTRL_TAG STRELOAD;
    INT_CTRL_TAG STCURRENT;
}SYSTICK_REG;

typedef struct 
{
    REG32_BF N0;
    REG32_BF N1;
    REG32_BF N2;
    REG32_BF N3;
    REG32_BF N4;
}NVIC_REG_NO;

typedef struct 
{
    INT_CTRL_TAG N0;
    INT_CTRL_TAG N1;
    INT_CTRL_TAG N2;
    INT_CTRL_TAG N3;
    INT_CTRL_TAG N4;
    INT_CTRL_TAG N5;
    INT_CTRL_TAG N6;
    INT_CTRL_TAG N7;
    INT_CTRL_TAG N8;
    INT_CTRL_TAG N9;
    INT_CTRL_TAG N10;
    INT_CTRL_TAG N11;
    INT_CTRL_TAG N12;
    INT_CTRL_TAG N13;
    INT_CTRL_TAG N14;
    INT_CTRL_TAG N15;
    INT_CTRL_TAG N16;
    INT_CTRL_TAG N17;
    INT_CTRL_TAG N18;
    INT_CTRL_TAG N19;
    INT_CTRL_TAG N20;
    INT_CTRL_TAG N21;
    INT_CTRL_TAG N22;
    INT_CTRL_TAG N23;
    INT_CTRL_TAG N24;
    INT_CTRL_TAG N25;
    INT_CTRL_TAG N26;
    INT_CTRL_TAG N27;
    INT_CTRL_TAG N28;
    INT_CTRL_TAG N29;
    INT_CTRL_TAG N30;
    INT_CTRL_TAG N31;
    INT_CTRL_TAG N32;
    INT_CTRL_TAG N33;
    INT_CTRL_TAG N34;
}NVIC_PRI_REG_NO;


typedef struct 
{
    INT_CTRL_TAG CPUID;
    INT_CTRL_TAG INTCTRL;
    INT_CTRL_TAG VTABLE;
    INT_CTRL_TAG APINT;
    INT_CTRL_TAG SYSCTRL;
    INT_CTRL_TAG CFGCTRL;
    INT_CTRL_TAG SYSPRI1;
    INT_CTRL_TAG SYSPRI2;
    INT_CTRL_TAG SYSPRI3;
    INT_CTRL_TAG SYSHNDCTRL;
    INT_CTRL_TAG FAULTSTAT;
    INT_CTRL_TAG HFAULTSTAT;
    INT_CTRL_TAG MMADDR;
    INT_CTRL_TAG FAULTADDR;
}SCB_REG_TYPE;


typedef struct 
{
    INT_CTRL_TAG RCGCWD;
    INT_CTRL_TAG RCGCTIMER;
    INT_CTRL_TAG RCGCGPIO;
    INT_CTRL_TAG RCGCDMA;
    INT_CTRL_TAG RCGCHIB;
    INT_CTRL_TAG RCGCUART;
    INT_CTRL_TAG RCGCSSI;
    INT_CTRL_TAG RCGCI2C;
}SYSCTR_SET1;

typedef struct 
{
    INT_CTRL_TAG RCGCCAN;
    INT_CTRL_TAG RCGCADC;
    INT_CTRL_TAG RCGCACMP;
    INT_CTRL_TAG RCGCPWM;
    INT_CTRL_TAG RCGCQEI;
}SYSCTR_SET2;

typedef struct 
{
    INT_CTRL_TAG RCGCEEPROM;
    INT_CTRL_TAG RCGCWTIMER;
}SYSCTR_SET3;


typedef struct 
{
    INT_CTRL_TAG GPIODIR;
    INT_CTRL_TAG GPIOIS;
    INT_CTRL_TAG GPIOIBE;    
    INT_CTRL_TAG GPIOIEV;
    INT_CTRL_TAG GPIOIM;    
    INT_CTRL_TAG GPIORIS;
    INT_CTRL_TAG GPIOMIS;    
    INT_CTRL_TAG GPIOICR;
    INT_CTRL_TAG GPIOAFSEL; 
}GPIO_REG_SET1;

typedef struct 
{
    INT_CTRL_TAG GPIODR2R;
    INT_CTRL_TAG GPIODR4R;
    INT_CTRL_TAG GPIODR8R;
    INT_CTRL_TAG GPIOODR;
    INT_CTRL_TAG GPIOPUR;
    INT_CTRL_TAG GPIOPDR;    
    INT_CTRL_TAG GPIOSLR;
    INT_CTRL_TAG GPIODEN;    
    INT_CTRL_TAG GPIOLOCK;
    INT_CTRL_TAG GPIOCR;    
    INT_CTRL_TAG GPIOAMSEL;
    INT_CTRL_TAG GPIOPCTL;    
    INT_CTRL_TAG GPIOADCCTL;
    INT_CTRL_TAG GPIODMACTL;
}GPIO_REG_SET2;




typedef struct 
{
    INT_CTRL_TAG GPTMCFG;
    INT_CTRL_TAG GPTMTAMR;
    INT_CTRL_TAG GPTMTBMR;    
    INT_CTRL_TAG GPTMCTL;
    INT_CTRL_TAG GPTMSYNC;    
}GPT_REG_SET1;

typedef struct 
{
    INT_CTRL_TAG GPTMIMR;
    INT_CTRL_TAG GPTMRIS;
    INT_CTRL_TAG GPTMMIS;
    INT_CTRL_TAG GPTMICR;
    INT_CTRL_TAG GPTMTAILR;
    INT_CTRL_TAG GPTMTBILR;    
    INT_CTRL_TAG GPTMTAMATCHR;
    INT_CTRL_TAG GPTMTBMATCHR;    
    INT_CTRL_TAG GPTMTAPR;
    INT_CTRL_TAG GPTMTBPR;    
    INT_CTRL_TAG GPTMTAPMR;
    INT_CTRL_TAG GPTMTBPMR;    
    INT_CTRL_TAG GPTMTAR;
    INT_CTRL_TAG GPTMTBR;
    INT_CTRL_TAG GPTMTAV;
    INT_CTRL_TAG GPTMTBV;    
    INT_CTRL_TAG GPTMRTCPD;
    INT_CTRL_TAG GPTMTAPS;    
    INT_CTRL_TAG GPTMTBPS;
    INT_CTRL_TAG GPTMTAPV;    
    INT_CTRL_TAG GPTMTBPV;
    INT_CTRL_TAG GPTMPP;
}GPT_REG_SET2;
/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 #endif  /* Mcu_Hw_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/
