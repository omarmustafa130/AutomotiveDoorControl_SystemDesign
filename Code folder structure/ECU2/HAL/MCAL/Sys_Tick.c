#include "../Common/Std_Types.h"
#include "../Common/Bit_Math.h"
#include "../Common/Platform_Types.h"
#include "../Common/Mcu_Hw.h"
#include "Inc/Sys_Tick.h"
#include "../Config/Sys_Tick_Cfg.h"


void SYS_TICK_init(f32 time)
{
		u32 Reload = ( time / (1/16000000)) - 1;
    SYSTICK_REGISTER->STCTRL.R|=(SYSTICK_COUNTER)|(SYSTICK_INTERRUPT<<1)|(SYSTICK_CLKSRC<<2);
    SYSTICK_REGISTER->STRELOAD.R=Reload;
}
/*
void SYS_TICK_SetCallback(void (*LocalCallBack)(void))
{
    GlobalCallback = LocalCallBack;
}
*/
/*
#define SYSTICK_COUNTER         ENABLE
#define SYSTICK_INTERRUPT       ENABLE
#define SYSTICK_CLKSRC          SYSTICK_CLK_SRC_SYSCLK
*/
