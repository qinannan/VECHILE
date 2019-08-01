#ifndef __DELAY_H__
#define	__DELAY_H__
#include "sys.h"

extern void delay_init(u8 SYSCLK);
extern void delay_ms(u16 nms);
extern void delay_us(u32 nus);
#endif	//__DELAY_H__
