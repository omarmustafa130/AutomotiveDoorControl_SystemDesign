/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  IntCtrl.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Inc/IntCtrl.h"

#include "../Common/Std_Types.h"
#include "../Common/Mcu_Hw.h"
#include "Inc/Sys_Ctrl.h"
#include "../Config/Sys_Ctrl_Cfg.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void IntCtrl_Init(void)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : void
*******************************************************************************/
void SYS_CTRL_INIT(void)
{

    SYSCTRL_RCC_REG->R|=(0x078E3AD1)|(SYS_DIV_OPTION<<23)|(SYSCLK_DIVISION<<22)|(PWMCLK_DIVISION<<20)|(PWM_DIV_OPTION<<17)|(PLL_DIV_OPTION<<13)|(PLL_BYPASS_OPTION<<11);
    SYSCTRL_GPIOHBCTL_REG->R|=(0x00007E00)|(PORTA_BUS_CFG<<0)|(PORTB_BUS_CFG<<1)|(PORTC_BUS_CFG<<2)|(PORTD_BUS_CFG)<<3|(PORTE_BUS_CFG<<4)|(PORTF_BUS_CFG<<5);

    SYSCTRL_REG_SET1->RCGCWD.R|=(WD0_CLK_GATE<<WD0_EN_CLK)|(WD1_CLK_GATE<<WD1_EN_CLK);
    SYSCTRL_REG_SET1->RCGCTIMER.R|=(TMR0_16_32_CLK_GATE<<Module0)|(TMR1_16_32_CLK_GATE<<Module1)|(TMR2_16_32_CLK_GATE<<Module2)|(TMR3_16_32_CLK_GATE<<Module3)|(TMR4_16_32_CLK_GATE<<Module4)|(TMR5_16_32_CLK_GATE<<Module5);
    SYSCTRL_REG_SET1->RCGCGPIO.R|=(GPIOA_CLK_GATE<<GPIOA_EN_CLK)|(GPIOB_CLK_GATE<<GPIOB_EN_CLK)|(GPIOC_CLK_GATE<<GPIOC_EN_CLK)|(GPIOD_CLK_GATE<<GPIOD_EN_CLK)|(GPIOE_CLK_GATE<<GPIOE_EN_CLK)|(GPIOF_CLK_GATE<<GPIOF_EN_CLK);
    SYSCTRL_REG_SET1->RCGCDMA.R|=(UDMA_CLK_GATE<<UDMA_EN_CLK);
    SYSCTRL_REG_SET1->RCGCHIB.R|=(HIB_CLK_GATE<<HIB_EN_CLK);
    SYSCTRL_REG_SET1->RCGCUART.R|=(UART0_CLK_GATE<<UART0_EN_CLK)|(UART1_CLK_GATE<<UART1_EN_CLK)|(UART2_CLK_GATE<<UART2_EN_CLK)|(UART3_CLK_GATE<<UART3_EN_CLK)|(UART4_CLK_GATE<<UART4_EN_CLK)|(UART5_CLK_GATE<<UART5_EN_CLK)|(UART6_CLK_GATE<<UART6_EN_CLK)|(UART7_CLK_GATE<<UART7_EN_CLK);
    SYSCTRL_REG_SET1->RCGCSSI.R|=(SSI0_CLK_GATE<<SSI0_EN_CLK)|(SSI1_CLK_GATE<<SSI1_EN_CLK)|(SSI3_CLK_GATE<<SSI3_EN_CLK);
    SYSCTRL_REG_SET1->RCGCI2C.R|=(I2C0_CLK_GATE<<I2C0_EN_CLK)|(I2C1_CLK_GATE<<I2C1_EN_CLK)|(I2C2_CLK_GATE<<I2C1_EN_CLK)|(I2C3_CLK_GATE<<I2C3_EN_CLK);
    SYSCTR_RCGCUSB_REG->R|=(USB_CLK_GATE<<USB_EN_CLK);
    SYSCTRL_REG_SET2->RCGCCAN.R|=(CAN0_CLK_GATE<<CAN0_EN_CLK)|(CAN1_CLK_GATE<<CAN1_EN_CLK);
    SYSCTRL_REG_SET2->RCGCACMP.R|=(AnalogComp_CLK_GATE<<AnalogComp_EN_CLK);
    SYSCTRL_REG_SET2->RCGCPWM.R|=(PWM0_CLK_GATE<<PWM0_EN_CLK)|(PWM1_CLK_GATE<<PWM1_EN_CLK);
    SYSCTRL_REG_SET2->RCGCQEI.R|=(QEI0_CLK_GATE<<QEI0_EN_CLK)|(QEI1_CLK_GATE<<QEI1_EN_CLK);
    SYSCTRL_REG_SET3->RCGCEEPROM.R|=(EEPROM_CLK_GATE<<EEPROM_EN_CLCK);
    SYSCTRL_REG_SET3->RCGCWTIMER.R|=(TMR0_32_64_CLK_GATE<<Module0_32_64)|(TMR1_32_64_CLK_GATE<<Module1_32_64)|(TMR2_32_64_CLK_GATE<<Module2_32_64)|(TMR3_32_64_CLK_GATE<<Module3_32_64)|(TMR4_32_64_CLK_GATE<<Module4_32_64)|(TMR5_32_64_CLK_GATE<<Module5_32_64);


}   


/**********************************************************************************************************************
 *  END OF FILE: Sys_Ctrl.c
 *********************************************************************************************************************/
