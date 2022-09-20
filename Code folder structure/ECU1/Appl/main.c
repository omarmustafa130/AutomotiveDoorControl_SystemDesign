#include "../Common/Std_Types.h"
#include "../Common/Platform_Types.h"
#include "../Common/Bit_Math.h"
#include "../Common/Mcu_Hw.h"
#include "../MCAL/Inc/IntCtrl_types.h"
#include "../MCAL/Inc/IntCtrl.h"
#include "../MCAL/Inc/IntCtrl_types.h"
#include "../MCAL/Inc/Sys_Ctrl.h"
#include "../MCAL/Inc/ExternalInterrupts.h"
#include "../MCAL/Inc/Port.h"
#include "../MCAL/Inc/Dio.h"
#include "../MCAL/Inc/Sys_Tick.h"
#include "../Config/IntCtrl_Cfg.h"
#include "../Config/Sys_Ctrl_Cfg.h"
#include "../Config/Port_Cfg.h"
#include "../HAL/Inc/LED.h"
#include "../Config/LED_Cfg.h"

static u8 counter=0;

u8 on_counter = on_time/1;
u8 off_counter = (off_time/1);

int main()
{
	IntCtrl_Init();
	SYS_CTRL_INIT();
	PORT_init();
  SYS_TICK_init(1);
	while(1)
	{}
}

void SysTick_Handler(void)
{
	/*1,1*/
	
	if (counter<on_counter)
		led_state(PinF4, 1);
	else if (counter >=(off_counter+on_counter))
	{
		counter = 0;
		led_state(PinF4, 1);
	}
	else if (counter>=on_counter)
		led_state(PinF4, 0);
	counter++;
}

