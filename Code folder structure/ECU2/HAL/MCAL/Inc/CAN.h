/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Dio.h>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef DIO_H
#define DIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../../Common/Platform_Types.h"
#include "../../Common/Std_Types.h"
#include "Port.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define DIO_INPUT   0
#define DIO_OUTPUT  1

typedef u32         Dio_PortLevelType;


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum {
   DIO_LOW,
   DIO_HIGH
}Dio_LevelType;

typedef enum {
   PORTA,
   PORTB,
   PORTC,
   PORTD,
   PORTE,
   PORTF
}PortType;



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
 u8 Dio_ReadChannel(Port_PinType pinType);
 void Dio_WriteChannel(Port_PinType pinType, Dio_LevelType level);
 u8 Dio_ReadPort(PortType port);
 void Dio_WritePort(PortType port, Dio_PortLevelType level);
 void Dio_FlipChannel(u8 pinType);

#endif  /* DIO_H */

/**********************************************************************************************************************
 *  END OF : Dio.h
 *********************************************************************************************************************/


/* Steps from datasheet:

To configure the GPIO pins of a particular port, follow these steps:

    1. Enable the clock to the port by setting the appropriate bits in the RCGCGPIO register (see
       page 340). In addition, the SCGCGPIO and DCGCGPIO registers can be programmed in the
       same manner to enable clocking in Sleep and Deep-Sleep modes.

    2. Set the direction of the GPIO port pins by programming the GPIODIR register. A write of a 1
       indicates output and a write of a 0 indicates input.

    3. Configure the GPIOAFSEL register to program each bit as a GPIO or alternate pin. If an alternate
       pin is chosen for a bit, then the PMCx field must be programmed in the GPIOPCTL register for
       the specific peripheral required. There are also two registers, GPIOADCCTL and GPIODMACTL,
       which can be used to program a GPIO pin as a ADC or μDMA trigger, respectively.

    4. Set the drive strength for each of the pins through the GPIODR2R, GPIODR4R, and GPIODR8R
       registers.

    5. Program each pad in the port to have either pull-up, pull-down, or open drain functionality through
       the GPIOPUR, GPIOPDR, GPIOODR register. Slew rate may also be programmed, if needed, through the GPIOSLR register.

    6. To enable GPIO pins as digital I/Os, set the appropriate DEN bit in the GPIODEN register. To
       enable GPIO pins to their analog function (if available), set the GPIOAMSEL bit in the GPIOAMSEL register.

    7. Program the GPIOIS, GPIOIBE, GPIOEV, and GPIOIM registers to configure the type, event,
       and mask of the interrupts for each port.
       Note: To prevent false interrupts, the following steps should be taken when re-configuring
       GPIO edge and interrupt sense registers:
            a. Mask the corresponding port by clearing the IME field in the GPIOIM register.
            b. Configure the IS field in the GPIOIS register and the IBE field in the GPIOIBE register.
            c. Clear the GPIORIS register.
            d. Unmask the port by setting the IME field in the GPIOIM register.

    8. Optionally, software can lock the configurations of the NMI and JTAG/SWD pins on the GPIO
       port pins, by setting the LOCK bits in the GPIOLOCK register.
       */
			 

