#include "led.h"

void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);//时钟使能
	
	GPIO_InitStructure.GPIO_Pin			=	GPIO_Pin_5;							//设置引脚
	GPIO_InitStructure.GPIO_Mode		=	GPIO_Mode_OUT;					//普通输出
	GPIO_InitStructure.GPIO_OType		=	GPIO_OType_PP;					//推挽式输出
	GPIO_InitStructure.GPIO_Speed		=	GPIO_Speed_100MHz;			//100MHz
	GPIO_InitStructure.GPIO_PuPd		=	GPIO_PuPd_UP;						//上拉
	GPIO_Init(GPIOF,&GPIO_InitStructure);											//初始化GPIO
	
	GPIO_SetBits(GPIOF, GPIO_Pin_5);
}

