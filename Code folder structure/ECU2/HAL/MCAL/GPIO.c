/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dio.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../Common/Std_Types.h"
#include "../Common/Bit_Math.h"
#include "../Common/Mcu_Hw.h"
#include "Inc/Port.h"
#include "Inc/Dio.h"

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

 u8 Dio_ReadChannel(Port_PinType ChannelID)
 {	
		u8 x=0;
    if (ChannelID <=7)
    {

        x=GET_BIT(GPIO_PORTA_GPIODATA->R,ChannelID);
    }
    else if (ChannelID>=8 && ChannelID<=15)
    {
        x=GET_BIT(GPIO_PORTB_GPIODATA->R,ChannelID);
    }
    else if (ChannelID>=16 && ChannelID<=23)
    {
        x=GET_BIT(GPIO_PORTC_GPIODATA->R,ChannelID);
    }

    else if (ChannelID>=24 && ChannelID<=31)
    {
        x=GET_BIT(GPIO_PORTD_GPIODATA->R,ChannelID);
    }  

    else if (ChannelID>=32 && ChannelID<=37)
    {
       x=GET_BIT(GPIO_PORTE_GPIODATA->R,ChannelID);
    }

    else if (ChannelID>=38 && ChannelID<=42)
    {
       x=GET_BIT(GPIO_PORTF_GPIODATA->R,ChannelID);
    } 
return x;		
 }
 void Dio_WriteChannel(Port_PinType ChannelID, Dio_LevelType Level)
 {
    if (ChannelID<=7)
    {
        if(Level == HIGH)           SET_BIT(GPIO_PORTA_GPIODATA->R, ChannelID);
        else if (Level==LOW)        CLR_BIT(GPIO_PORTA_GPIODATA->R, ChannelID);
    }
    else if (ChannelID>=8 && ChannelID<=15)
    {
        if(Level == HIGH)           SET_BIT(GPIO_PORTB_GPIODATA->R, ChannelID);
        else if (Level==LOW)        CLR_BIT(GPIO_PORTB_GPIODATA->R, ChannelID);
    }
    else if (ChannelID>=16 && ChannelID<=23)
    {
        if(Level == HIGH)           SET_BIT(GPIO_PORTC_GPIODATA->R, ChannelID);
        else if (Level==LOW)        CLR_BIT(GPIO_PORTC_GPIODATA->R, ChannelID);
    }

    else if (ChannelID>=24 && ChannelID<=31)
    {
        if(Level == HIGH)           SET_BIT(GPIO_PORTD_GPIODATA->R, ChannelID);
        else if (Level==LOW)        CLR_BIT(GPIO_PORTD_GPIODATA->R, ChannelID);
    }  

    else if (ChannelID>=32 && ChannelID<=37)
    {
        if(Level == HIGH)           SET_BIT(GPIO_PORTE_GPIODATA->R, ChannelID);
        else if (Level==LOW)        CLR_BIT(GPIO_PORTE_GPIODATA->R, ChannelID);
    }

    else if (ChannelID>=38 && ChannelID<=42)
    {
        if(Level == HIGH)           SET_BIT(GPIO_PORTF_GPIODATA->R, ChannelID);
        else if (Level==LOW)        CLR_BIT(GPIO_PORTF_GPIODATA->R, ChannelID);
    }  
 }

 u8 Dio_ReadPort(PortType Port)
 {
    switch (Port)
    {
    case PORTA:
        return (GPIO_PORTA_GPIODATA->R);
    case PORTB:
        return (GPIO_PORTB_GPIODATA->R);
    case PORTC:
        return (GPIO_PORTC_GPIODATA->R);
    case PORTD:
        return (GPIO_PORTD_GPIODATA->R);
    case PORTE:
        return (GPIO_PORTE_GPIODATA->R);
    case PORTF:
        return (GPIO_PORTF_GPIODATA->R);
    }
		return 0;
 }
 void Dio_WritePort(PortType Port, Dio_PortLevelType Level)
 {
    switch (Port)
    {
    case PORTA:
        GPIO_PORTA_GPIODATA->R=Level;
        break;
    case PORTB:
        GPIO_PORTB_GPIODATA->R=Level;
        break;
    case PORTC:
        GPIO_PORTC_GPIODATA->R=Level;
        break;
    case PORTD:
        GPIO_PORTD_GPIODATA->R=Level;
        break;
    case PORTE:
        GPIO_PORTE_GPIODATA->R=Level;
        break;
    case PORTF:
        GPIO_PORTF_GPIODATA->R=Level;
        break;
    }   
 }

 void Dio_FlipChannel(u8 ChannelID)
 {
    if ( ChannelID<=7)
    {
        TOG_BIT(GPIO_PORTA_GPIODATA->R,ChannelID);
    }
    else if (ChannelID>=8 && ChannelID<=15)
    {
        TOG_BIT(GPIO_PORTB_GPIODATA->R,ChannelID);
    }
    else if (ChannelID>=16 && ChannelID<=23)
    {
        TOG_BIT(GPIO_PORTC_GPIODATA->R,ChannelID);
    }

    else if (ChannelID>=24 && ChannelID<=31)
    {
        TOG_BIT(GPIO_PORTD_GPIODATA->R,ChannelID);
    }  

    else if (ChannelID>=32 && ChannelID<=37)
    {
       TOG_BIT(GPIO_PORTE_GPIODATA->R,ChannelID);
    }

    else if (ChannelID>=38 && ChannelID<=42)
    {
        TOG_BIT(GPIO_PORTF_GPIODATA->R,ChannelID);
    }     
}

/**********************************************************************************************************************
 *  END OF FILE: Dio.c
 *********************************************************************************************************************/
