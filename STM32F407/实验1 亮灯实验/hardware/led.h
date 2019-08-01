#ifndef __LED_H__
#define __LED_H__

#include "sys.h"

#define LED0	PFout(5)
#define LED1	PFout(9)

extern void LED_Init(void);

#endif //__LED_H__

