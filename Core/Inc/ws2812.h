/**
  ******************************************************************************
  * @file  ws2812.h
  * @author 	liuming
  * @brief 	
  * @date     
  ******************************************************************************
  * @attention
  *
  * Copyright (c) CSU_RM_FYT.
  * All rights reserved.
  *
  ******************************************************************************
  */


#ifndef _WS2812_H
#define _WS2812_H

#include "main.h"

#define     RGB_LED1_HIGH    (HAL_GPIO_WritePin(LED_PORT_1, LED_Pin_1, GPIO_PIN_SET))
#define     RGB_LED1_LOW     (HAL_GPIO_WritePin(LED_PORT_1, LED_Pin_1, GPIO_PIN_RESET))
#define     RGB_LED2_HIGH    (HAL_GPIO_WritePin(LED_PORT_2, LED_Pin_2, GPIO_PIN_SET))
#define     RGB_LED2_LOW     (HAL_GPIO_WritePin(LED_PORT_2, LED_Pin_2, GPIO_PIN_RESET))
#define     RGB_LED3_HIGH    (HAL_GPIO_WritePin(LED_PORT_3, LED_Pin_3, GPIO_PIN_SET))
#define     RGB_LED3_LOW     (HAL_GPIO_WritePin(LED_PORT_3, LED_Pin_3, GPIO_PIN_RESET))

extern GPIO_TypeDef* LED_PORT_1;
extern GPIO_TypeDef* LED_PORT_2;
extern GPIO_TypeDef* LED_PORT_3;
extern uint16_t LED_Pin_1,LED_Pin_2,LED_Pin_3;

void RGB_LED1_Write_24Bits(uint8_t green,uint8_t red,uint8_t blue);
void RGB_LED2_Write_24Bits(uint8_t green,uint8_t red,uint8_t blue);
void RGB_LED3_Write_24Bits(uint8_t green,uint8_t red,uint8_t blue);

#endif
