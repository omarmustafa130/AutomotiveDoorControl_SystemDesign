/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Sys_Ctrl.h>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef SYS_CTRL_H
#define SYS_CTRL_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define UDMA_EN_CLK             0
#define HIB_EN_CLK              0
#define USB_EN_CLK              0
#define CAN0_EN_CLK             0
#define CAN1_EN_CLK             1
#define ADC0_EN_CLK             0
#define ADC1_EN_CLK             1
#define AnalogComp_EN_CLK       0
#define PWM0_EN_CLK             0
#define PWM1_EN_CLK             1
#define QEI0_EN_CLK             0
#define QEI1_EN_CLK             1
#define EEPROM_EN_CLCK          0

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum{
    SYS_CLOCK_UNDEVIDED,
    SYS_CLOCK_DEVIDED
}USESYSDIV;

typedef enum{
    USE_SYS_CLOCK,
    USE_PWM_CLOCK_DIV
}USEPWMDIV;


typedef enum{
    SYSCTL_SYSDIV_1,
    SYSCTL_SYSDIV_2,
    SYSCTL_SYSDIV_3,
    SYSCTL_SYSDIV_4,
    SYSCTL_SYSDIV_5,
    SYSCTL_SYSDIV_6,
    SYSCTL_SYSDIV_7,
    SYSCTL_SYSDIV_8,
    SYSCTL_SYSDIV_9,
    SYSCTL_SYSDIV_10,
    SYSCTL_SYSDIV_11,
    SYSCTL_SYSDIV_12,
    SYSCTL_SYSDIV_13,
    SYSCTL_SYSDIV_14,
    SYSCTL_SYSDIV_15,
    SYSCTL_SYSDIV_16
}SysDiv;

typedef enum{
    SYSCTL_PWMDIV_2,
    SYSCTL_PWMDIV_4,
    SYSCTL_PWMDIV_8,
    SYSCTL_PWMDIV_16,
    SYSCTL_PWMDIV_32,
    SYSCTL_PWMDIV_64=7
}PWMDIV;

typedef enum{
    SYSCLK_PLLOUT_DIVIDED,
    SYSCLK_OSC_DIVIDED
}PLL_EN;



typedef enum{
    PLL_Normal,
    PLL_PWR_DWN
}PLL_BYPASS;



typedef enum{
    APB_A,
    AHB_A
}PORTA_BUS;
typedef enum{
    APB_B,
    AHB_B
}PORTB_BUS;
typedef enum{
    APB_C,
    AHB_C
}PORTC_BUS;
typedef enum{
    APB_D,
    AHB_D
}PORTD_BUS;
typedef enum{
    APB_E,
    AHB_E
}PORTE_BUS;
typedef enum{
    APB_F,
    AHB_F
}PORTF_BUS;

/**********************************************************************************/

typedef enum{
    WD0_EN_CLK,
    WD1_EN_CLK
}WatchDog_CLOCK;

typedef enum{
    Module0,
    Module1,
    Module2,
    Module3,
    Module4,
    Module5
}Timer16_32Bit_CLOCK;

typedef enum{
    GPIOA_EN_CLK,
    GPIOB_EN_CLK,
    GPIOC_EN_CLK,
    GPIOD_EN_CLK,
    GPIOE_EN_CLK,
    GPIOF_EN_CLK
}GPIO_CLOCK;

typedef enum{
    UART0_EN_CLK,
    UART1_EN_CLK,
    UART2_EN_CLK,
    UART3_EN_CLK,
    UART4_EN_CLK,
    UART5_EN_CLK,
    UART6_EN_CLK,
    UART7_EN_CLK
}UART_CLOCK;

typedef enum{
    SSI0_EN_CLK,
    SSI1_EN_CLK,
    SSI2_EN_CLK,
    SSI3_EN_CLK
}SSI_CLOCK;

typedef enum{
    I2C0_EN_CLK,
    I2C1_EN_CLK,
    I2C2_EN_CLK,
    I2C3_EN_CLK
}I2C_CLOCK;

typedef enum{
    Module0_32_64,
    Module1_32_64,
    Module2_32_64,
    Module3_32_64,
    Module4_32_64,
    Module5_32_64
}Timer32_64Bit_CLOCK;

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void SYS_CTRL_INIT(void);

#endif  /* SYS_CTRL_H */

/**********************************************************************************************************************
 *  END OF FILE: Sys_Ctrl.h
 *********************************************************************************************************************/
