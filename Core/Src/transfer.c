/**
  ******************************************************************************
  * @file  transfer.h
  * @author 	liuming
  * @brief 	Get the desired lighting effect
  * @date   2022/3/6
  ******************************************************************************
  * @attention  
  *
  * Copyright (c) CSU_RM_FYT.
  * All rights reserved.
  *
  ******************************************************************************
  */

#include "tansfer.h"



/**
  * @brief 将灯指向我想要的地方
  * @param  void
  * @retval void
  * @attention 
  */

void change_lamp(int i)
{	 
	switch(i){
		 case 1:
		 {
			 LED_PORT_1 = Lamp1_1_GPIO_Port;
			 LED_PORT_2 = Lamp1_2_GPIO_Port;
			 LED_PORT_3 = Lamp1_3_GPIO_Port;
			 LED_Pin_1  = Lamp1_1_Pin;
			 LED_Pin_2  = Lamp1_2_Pin;
			 LED_Pin_3  = Lamp1_3_Pin;
		 };break;
		 case 2:
		 {
			 LED_PORT_1 = Lamp2_1_GPIO_Port;
			 LED_PORT_2 = Lamp2_2_GPIO_Port;
			 LED_PORT_3 = Lamp2_3_GPIO_Port;
			 LED_Pin_1  = Lamp2_1_Pin;
			 LED_Pin_2  = Lamp2_2_Pin;
			 LED_Pin_3  = Lamp2_3_Pin;
		 };break;
		 case 3:
		 {
			 LED_PORT_1 = Lamp3_1_GPIO_Port;
			 LED_PORT_2 = Lamp3_2_GPIO_Port;
			 LED_PORT_3 = Lamp3_3_GPIO_Port;
			 LED_Pin_1  = Lamp3_1_Pin;
			 LED_Pin_2  = Lamp3_2_Pin;
			 LED_Pin_3  = Lamp3_3_Pin;
		 };break;
		 case 4:
		 {
			 LED_PORT_1 = Lamp4_1_GPIO_Port;
			 LED_PORT_2 = Lamp4_2_GPIO_Port;
			 LED_PORT_3 = Lamp4_3_GPIO_Port;
			 LED_Pin_1  = Lamp4_1_Pin;
			 LED_Pin_2  = Lamp4_2_Pin;
			 LED_Pin_3  = Lamp4_3_Pin;
		 };break;
		 case 5:
		 {
			 LED_PORT_1 = Lamp5_1_GPIO_Port;
			 LED_PORT_2 = Lamp5_2_GPIO_Port;
			 LED_PORT_3 = Lamp5_3_GPIO_Port;
			 LED_Pin_1  = Lamp5_1_Pin;
			 LED_Pin_2  = Lamp5_2_Pin;
			 LED_Pin_3  = Lamp5_3_Pin;
		 };break;
	 }
}

/**
  * @brief 所有灯的复位,将他指向第一个扇叶
  * @param  void
  * @retval void
  * @attention 
  */

void WS2812_reset(void)
{
	for(int i = 1; i < 6; i++)
	{
		change_lamp(i);
		int count1 = 1,count2 = 1,count3 = 1;
		while(count1 <= TOTAL3)
		{
			RGB_LED1_Write_24Bits(0x00,0X00,0X00);
			count1++;
		}
		while(count2 <= TOTAL2) {
			RGB_LED2_Write_24Bits(0x00,0X00,0X00);
			count2++;
		}
		while(count3 <= TOTAL1)
		{
			RGB_LED3_Write_24Bits(0x00,0X00,0X00);
			count3++;
		}
  }

	LED_PORT_1 = Lamp1_1_GPIO_Port;
	LED_PORT_2 = Lamp1_2_GPIO_Port;
	LED_PORT_3 = Lamp1_3_GPIO_Port;
	LED_Pin_1  = Lamp1_1_Pin;
	LED_Pin_2  = Lamp1_2_Pin;
	LED_Pin_3  = Lamp1_3_Pin;
}

/**
  * @brief 测试各个io的ws2812数量
  * @param  void
  * @retval void
  * @attention 
  */

void ws2812_test(int i)
{
	WS2812_reset();
	int cnt=1;
	while(cnt <= i)
		{
			RGB_LED3_Write_24Bits(0x00,0Xff,0Xff);
			cnt++;
		}
	HAL_Delay (1000000000);
}



/**
  * @brief 做出装甲板周围灯效
  * @param  void
  * @retval void
  * @attention 
  */

void armour(void)
{
	int count1 = 1,count2 = 1 ;
	while(count1 <= TOTAL3)
	{ 
		if(count1 <= TOTAL4 )
	  {
			RGB_LED1_Write_24Bits(0x00,0X00,0X00);
		}
		else 
		{
			color?RGB_LED1_Write_24Bits(0x00,0X00,0Xff):RGB_LED1_Write_24Bits(0x00,0Xff,0X00);
		}
		count1++;
	}

	
	while(count2 <= TOTAL1)
	{
		if(count2 <= TOTAL4 )
    {
			RGB_LED3_Write_24Bits(0x00,0X00,0X00);
		}
		else 
		{
			color?RGB_LED3_Write_24Bits(0x00,0X00,0Xff):RGB_LED3_Write_24Bits(0x00,0Xff,0X00);
		}
		count2++;
	}
}	

/**
  * @brief 做出流水灯
  * @param  void  
  * @retval void
  * @attention 一共想做六帧，第一帧认为第一个箭头全部显露
  */

void Run_led(void)
{
	first();
	HAL_Delay (100);
	second();
	HAL_Delay (100);
	third();
	HAL_Delay (100);
	forth();
	HAL_Delay (100);
	fifth();
	HAL_Delay (100);
	sixth();
	HAL_Delay (100);
	sevth();
	HAL_Delay (100);
}
/**
  * @brief 
  * @param  void
  * @retval void
  * @attention 
  */

  uint8_t  target;
  uint8_t  cnt1=1;
  uint8_t number[] = {3,4,2,5,7};

void Get_next_lamp(void)
{
	target = number[cnt1];
	cnt1++;
switch(target)
	{
		 case 1:
		 {
			 LED_PORT_1 = Lamp1_1_GPIO_Port;
			 LED_PORT_2 = Lamp1_2_GPIO_Port;
			 LED_PORT_3 = Lamp1_3_GPIO_Port;
			 LED_Pin_1  = Lamp1_1_Pin;
			 LED_Pin_2  = Lamp1_2_Pin;
			 LED_Pin_3  = Lamp1_3_Pin;
		 };break;
		 case 2:
		 {
			 LED_PORT_1 = Lamp2_1_GPIO_Port;
			 LED_PORT_2 = Lamp2_2_GPIO_Port;
			 LED_PORT_3 = Lamp2_3_GPIO_Port;
			 LED_Pin_1  = Lamp2_1_Pin;
			 LED_Pin_2  = Lamp2_2_Pin;
			 LED_Pin_3  = Lamp2_3_Pin;
		 };break;
		 case 3:
		 {
			 LED_PORT_1 = Lamp3_1_GPIO_Port;
			 LED_PORT_2 = Lamp3_2_GPIO_Port;
			 LED_PORT_3 = Lamp3_3_GPIO_Port;
			 LED_Pin_1  = Lamp3_1_Pin;
			 LED_Pin_2  = Lamp3_2_Pin;
			 LED_Pin_3  = Lamp3_3_Pin;
		 };break;
		 case 4:
		 {
			 LED_PORT_1 = Lamp4_1_GPIO_Port;
			 LED_PORT_2 = Lamp4_2_GPIO_Port;
			 LED_PORT_3 = Lamp4_3_GPIO_Port;
			 LED_Pin_1  = Lamp4_1_Pin;
			 LED_Pin_2  = Lamp4_2_Pin;
			 LED_Pin_3  = Lamp4_3_Pin;
		 };break;
		 case 5:
		 {
			 LED_PORT_1 = Lamp5_1_GPIO_Port;
			 LED_PORT_2 = Lamp5_2_GPIO_Port;
			 LED_PORT_3 = Lamp5_3_GPIO_Port;
			 LED_Pin_1  = Lamp5_1_Pin;
			 LED_Pin_2  = Lamp5_2_Pin;
			 LED_Pin_3  = Lamp5_3_Pin;
		 };break;
		 case 7:
		 {
			finish();
			HAL_Delay (100);
			WS2812_reset();
			HAL_Delay (100);
			finish();
			HAL_Delay (100);
			WS2812_reset();
			HAL_Delay (100);
			finish();
			HAL_Delay (100);
			WS2812_reset();
			HAL_Delay (100);
			while(1)
			{
			  WS2812_reset();
			}
		 };
	 }
 }
	 
/**
  * @brief 击中装甲板后
  * @param  void
  * @retval void
  * @attention 
  */

void hit(void)
{
		int count1 = 1,count2 = 1,count3 = 1;
		while(count1 <= TOTAL1)
		{
			color?RGB_LED1_Write_24Bits(0x00,0X00,0Xff):RGB_LED1_Write_24Bits(0x00,0Xff,0X00);
			count1++;
		}
		while(count2 <= TOTAL2) {
			color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			count2++;
		}
		while(count3 <= TOTAL3)
		{
			color?RGB_LED3_Write_24Bits(0x00,0X00,0Xff):RGB_LED3_Write_24Bits(0x00,0Xff,0X00);
			count3++;
		}
		Get_next_lamp ();
}
		
		

/**
  * @brief 结束灯效
  * @param  void
  * @retval void
  * @attention 
  */

void finish(void)
{
  for(int i = 1; i < 6; i++)
	{
		change_lamp(i);
		int count1 = 1,count2 = 1,count3 = 1;
		while(count1 <= TOTAL1)
		{
			color?RGB_LED1_Write_24Bits(0x00,0X00,0Xff):RGB_LED1_Write_24Bits(0x00,0Xff,0X00);
			count1++;
		}
		while(count2 <= TOTAL2) {
			color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			count2++;
		}
		while(count3 <= TOTAL3)
		{
			color?RGB_LED3_Write_24Bits(0x00,0X00,0Xff):RGB_LED3_Write_24Bits(0x00,0Xff,0X00);
			count3++;
		}
	}
}	
	
