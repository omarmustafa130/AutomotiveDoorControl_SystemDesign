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
#include "Inc/IntCtrl_types.h"

#include "../Common/Std_Types.h"
#include "../Common/Platform_Types.h"

#include "../Common/Mcu_Hw.h"
#include "../Config/IntCtrl_Cfg.h"
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
void IntCtrl_Init(void)
{
    if (GPIO_PORTA_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_0=Enable;
    if (GPIO_PORTB_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_1=Enable;
    if (GPIO_PORTC_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_2=Enable;
    if (GPIO_PORTD_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_3=Enable;
    if (GPIO_PORTE_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_4=Enable;
    if (GPIO_PORTF_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_30=Enable;
	/*Configure groups and subgrous with APINT*/
    SCB_REG->APINT.R|= (APINTKEY<<16)|(Int_Group_and_Subgroup_config<<8);


    /*Assign group\subgroup priority in NVIC_PRIx Nvic and SCB_SUSPRIx regs*/
    /***********************************PRIx***********************************/
    NVIC_REGISTER_PRI->N0.R|=(PRI_GPIO_PORTA<<5)|(PRI_GPIO_PORTB<<13)|(PRI_GPIO_PORTC<<21)|(PRI_GPIO_PORTD<<29);
    NVIC_REGISTER_PRI->N1.R|=(PRI_GPIO_PORTE<<5u)|(PRI_UART0<<13u)|(PRI_UART1<<21u);
    NVIC_REGISTER_PRI->N2.R|=(PRI_I2C0<<5)|(PRI_PWM0_Fault<<13)|(PRI_PWM0_Generator0<<21)|(PRI_PWM0_Generator1<<29);
    NVIC_REGISTER_PRI->N3.R|=(PRI_PWM0_Generator2<<5)|(PRI_QEI0<<13)|(PRI_ADC0_Sequence0<<21);
    NVIC_REGISTER_PRI->N4.R|=(PRI_ADC0_Sequence2<<5)|(PRI_ADC0_Sequence3<<13)|(PRI_Watchdog_Timers0and1<<21)|(PRI_Timer0A_16or32Bit<<29);
    NVIC_REGISTER_PRI->N5.R|=(PRI_Timer0B_16or32Bit<<5)|(PRI_Timer1A_16or32Bit<<13)|(PRI_Timer1B_16or32Bit<<21)|(PRI_Timer2A_16or32Bit<<29);
    NVIC_REGISTER_PRI->N6.R|=(PRI_Timer2B_16or32Bit<<5)|(PRI_Analog_Comparator0<<13)|(PRI_Analog_Comparator1<<21);
    NVIC_REGISTER_PRI->N7.R|=(PRI_SystemControl<<5)|(PRI_FMCAndEEPROMC<<13)|(PRI_GPIO_PortF<<21);
    NVIC_REGISTER_PRI->N8.R|=(PRI_UART2<<13)|(PRI_SSI1<<21)|(PRI_Timer3A_16or32Bit<<29);
    NVIC_REGISTER_PRI->N9.R|=(PRI_Timer3B_16or32Bit<<5)|(PRI_I2C1<<13)|(QEI1_<<21);
    NVIC_REGISTER_PRI->N10.R|=(PRI_CAN1<<5)|(PRI_HibernationModule<<13);
    NVIC_REGISTER_PRI->N11.R|=(PRI_USB<<5)|(PRI_PWM0_Generator3<<13)|(PRI_uDMA_Software<<21);
    NVIC_REGISTER_PRI->N12.R|=(PRI_ADC1_Sequence0<<5)|(PRI_ADC1_Sequence1<<13)|(PRI_ADC1_Sequence2<<21);
    NVIC_REGISTER_PRI->N14.R|=(PRI_SSI2<<13)|(PRI_SSI3<<21);
    NVIC_REGISTER_PRI->N15.R|=(PRI_UART4<<5)|(PRI_UART5<<13)|(PRI_UART6<<21);
    NVIC_REGISTER_PRI->N17.R|=(PRI_I2C2<<5)|(PRI_I2C3<<13)|(PRI_Timer4A_16or32Bit<<21)|(PRI_Timer4B_16or32Bit<<29);
    NVIC_REGISTER_PRI->N23.R|=(PRI_Timer5A_16or32Bit<<5)|(PRI_Timer5B_16or32Bit<<13)|(PRI_Timer0A_32or64Bit<<21)|(PRI_Timer0B_32or64Bit<<29);
    NVIC_REGISTER_PRI->N24.R|=(PRI_Timer1A_32or64Bit<<5)|(PRI_Timer1B_32or64Bit<<13)|(PRI_Timer2A_32or64Bit<<21)|(PRI_Timer2B_32or64Bit<<29);
    NVIC_REGISTER_PRI->N25.R|=(PRI_Timer3A_32or64Bit<<5)|(PRI_Timer3B_32or64Bit<<13)|(PRI_Timer4A_32or64Bit<<21)|(PRI_Timer4B_32or64Bit<<29);
    NVIC_REGISTER_PRI->N26.R|=(PRI_Timer5A_32or64Bit<<5)|(PRI_Timer5B_32or64Bit<<13)|(PRI_SystemException<<21);
    NVIC_REGISTER_PRI->N33.R|=(PRI_PWM1_Generator0<<21)|(PRI_PWM1_Generator1<<29);
    NVIC_REGISTER_PRI->N34.R|=(PRI_PWM1_Generator2<<5)|(PRI_PWM1_Generator3<<13)|(PRI_PWM1_Fault<<21);

    /************************************************************************************************************/
    /*******************************************SYSPRIx**********************************************************/
    SCB_REG->SYSPRI1.R|=(SYSPRI_MEM<<5)|(SYSPRI_BUS<<13)|(SYSPRI_USAGE<<21);
    SCB_REG->SYSPRI2.R|=(SYSPRI_SVC<<29);
    SCB_REG->SYSPRI3.R|=(SYSPRI_DEBUG<<5)|(SYSPRI_PENDSV<<21)|(SYSPRI_TICK<<21);

    /*Enable\disable using user configs in NVIC_ENx and SCB_Sys regs.*/
    


    if (UART0_Int_State==Enable)   	                NVIC_REGISTER_EN->N0.bit_5=Enable;
    if (UART1_Int_State==Enable)   	                NVIC_REGISTER_EN->N0.bit_6=Enable;
    if (UART2_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_1=Enable;
    if (UART3_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_27=Enable;
    if (UART4_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_28=Enable;
    if (UART5_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_29=Enable;
    if (UART6_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_30=Enable;
    if (UART7_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_31=Enable;

    if (SSI0_Int_State==Enable)   	                NVIC_REGISTER_EN->N0.bit_7=Enable;
    if (SSI1_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_2=Enable;
    if (SSI2_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_25=Enable;
    if (SSI3_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_26=Enable;

    if (I2C0_Int_State==Enable)   	                NVIC_REGISTER_EN->N0.bit_8=Enable;
    if (I2C1_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_5=Enable;
    if (I2C2_Int_State==Enable)   	                NVIC_REGISTER_EN->N2.bit_4=Enable;
    if (I2C3_Int_State==Enable)   	                NVIC_REGISTER_EN->N2.bit_5=Enable;

    if (PWM0_Fault_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_9=Enable;
    if (PWM0_Generator0_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_10=Enable;
    if (PWM0_Generator1_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_11=Enable;
    if (PWM0_Generator2_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_12=Enable;
    if (PWM0_Generator3_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_13=Enable;

    if (PWM1_Fault_Int_State==Enable)   	        NVIC_REGISTER_EN->N4.bit_10=Enable;
    if (PWM1_Generator0_Int_State==Enable)   	    NVIC_REGISTER_EN->N4.bit_6=Enable;
    if (PWM1_Generator1_Int_State==Enable)   	    NVIC_REGISTER_EN->N4.bit_7=Enable;
    if (PWM1_Generator2_Int_State==Enable)   	    NVIC_REGISTER_EN->N4.bit_8=Enable;
    if (PWM1_Generator3_Int_State==Enable)   	    NVIC_REGISTER_EN->N4.bit_9=Enable;

    if (QEI0_Int_State==Enable)   	                NVIC_REGISTER_EN->N0.bit_13=Enable;
    if (QEI1_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_6=Enable;

    if (ADC0_Sequence0_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_14=Enable;
    if (ADC0_Sequence1_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_15=Enable;
    if (ADC0_Sequence2_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_16=Enable;
    if (ADC0_Sequence3_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_17=Enable;
    if (ADC1_Sequence0_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_21=Enable;
    if (ADC1_Sequence1_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_22=Enable;
    if (ADC1_Sequence2_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_23=Enable;
    if (ADC1_Sequence3_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_24=Enable;


    if (Watchdog_Timers0and1_Int_State==Enable)   	NVIC_REGISTER_EN->N0.bit_18=Enable;

    if (Timer0A_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_19=Enable;
    if (Timer0B_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_20=Enable;
    if (Timer1A_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_21=Enable;
    if (Timer1B_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_22=Enable;
    if (Timer2A_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_23=Enable;
    if (Timer2B_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N0.bit_24=Enable;
    if (Timer3A_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_3=Enable;
    if (Timer3B_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_4=Enable;
    if (Timer4A_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N2.bit_6=Enable;
    if (Timer4B_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N2.bit_7=Enable;
    if (Timer5A_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N2.bit_28=Enable;
    if (Timer5B_16or32Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N2.bit_29=Enable;
    if (Timer0A_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N2.bit_30=Enable;
    if (Timer0B_32or64Bit_Int_State==Enable)    	NVIC_REGISTER_EN->N2.bit_31=Enable;

    if (Timer1A_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_1=Enable;
    if (Timer1B_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_2=Enable;
    if (Timer2A_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_3=Enable;
    if (Timer2B_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_4=Enable;
    if (Timer3A_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_5=Enable;
    if (Timer3B_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_6=Enable;
    if (Timer4A_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_7=Enable;
    if (Timer4B_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_8=Enable;
    if (Timer5A_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_9=Enable;
    if (Timer5B_32or64Bit_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_10=Enable;

    if (Analog_Comparator0_Int_State==Enable)   	NVIC_REGISTER_EN->N0.bit_25=Enable;
    if (Analog_Comparator1_Int_State==Enable)   	NVIC_REGISTER_EN->N0.bit_26=Enable;

    if (SystemControl_Int_State==Enable)   	        NVIC_REGISTER_EN->N0.bit_28=Enable;
    if (FMC_and_EEPROMC_Int_state==Enable)   	    NVIC_REGISTER_EN->N0.bit_29=Enable;
    if (CAN0_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_7=Enable;
    if (CAN1_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_8=Enable;
    if (HibernationModule_Int_State==Enable)   	    NVIC_REGISTER_EN->N1.bit_11=Enable;
    if (USB_Int_State==Enable)   	                NVIC_REGISTER_EN->N1.bit_12=Enable;
    if (UDMA_Software_Int_State==Enable)   	        NVIC_REGISTER_EN->N1.bit_14=Enable;
    if (UDMA_Error_Int_State==Enable)   	        NVIC_REGISTER_EN->N1.bit_15=Enable;
    if (SystemException_Int_State==Enable)   	    NVIC_REGISTER_EN->N3.bit_11=Enable;

    /***********************************SCB_SYS****************************************/
    SCB_REG->SYSHNDCTRL.R|=(MEMA_State<<MEMA)|(BUS_State<<BUSA)|(USGA_State<<USGA)|(SVCA_State<<SVCA)|(MON_State<<MON)|(PNDSV_State<<PNDSV)|(TICK_State<<TICK)|(USAGEP_State<<USAGEP)|(MEMP_State<<MEMP)|(BUSP_State<<BUSP)|(SVC_State<<SVC)|(MEM_State<<MEM)|(BUS_State<<BUS)|(USAGE_State<<USAGE);
		SCB_REG->INTCTRL.B.bit_26=1;
}

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl.c
 *********************************************************************************************************************/
