#ifndef __USART_H__
#define __USART_H__

#include "stdio.h"
#include "stm32f4xx_conf.h"
#include "sys.h"

#define USART_REC_LEN		200	//定义最大接收字节为200
#define EN_USART1_RX			1	//1  使能	0 禁止

extern uint8_t USART_RX_BUF[USART_REC_LEN];
extern uint16_t USART_RX_STA;

extern void uart_init(uint32_t baud);
#endif //__USART_H__
