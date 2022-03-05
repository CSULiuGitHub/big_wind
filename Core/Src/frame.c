/**
  ******************************************************************************
  * @file  frame.c
  * @author liuming
  * @brief  做出六帧动画
  * @date  2022/3/6
  ******************************************************************************
  * @attention 
  *
  * Copyright (c) CSU_RM_FYT.
  * All rights reserved.
  *
  ******************************************************************************
  */

#include "frame.h"


/**
  * @brief 第1帧
  * @param  void
  * @retval void
  * @attention 
  */

void first(void)
{
	int period_count=1;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =7;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =6;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =2;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =6;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =7;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =1;
				}
				else period_count ++;
	  }	
}

/**
  * @brief 第二帧
  * @param  void
  * @retval void
  * @attention 
  */

void second(void)
{
	int period_count=7;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =1;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =5;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =3;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =5;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =1;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =7;
				}
				else period_count ++;
	  }	
}


void third(void)
{
	int period_count=6;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =2;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =4;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =4;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =4;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =2;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =6;
				}
				else period_count ++;
	  }	
}

void forth(void)
{
	int period_count=5;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =3;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =3;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =5;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =3;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =3;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =5;
				}
				else period_count ++;
	  }	
}

void fifth(void)
{
	int period_count=4;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =5;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =2;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =6;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =2;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =4;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =4;
				}
				else period_count ++;
	  }	
}

void sixth(void)
{
	int period_count=3;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =6;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =1;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =7;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =1;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =5;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =3;
				}
				else period_count ++;
	  }	
}

void sevth(void)
{
	int period_count=2;
	int count=1;
  while(count <= TOTAL2)
		{
			if (period_count ==8)period_count =1;
			if(period_count>=5) color?RGB_LED2_Write_24Bits(0x00,0X00,0Xff):RGB_LED2_Write_24Bits(0x00,0Xff,0X00);
			else RGB_LED2_Write_24Bits(0x00,0X00,0X00);
				count++;
				if(count == MAX_NUM + 1)
				{
					period_count =7;	
				}
				else if(count == 2*MAX_NUM + 1)
				{
					period_count =7;
				}		
				else if(count == 3*MAX_NUM + 1)
				{
					period_count =1;
				}
				else if(count == 4*MAX_NUM + 1)
				{
					period_count =7;
				}
				else if(count == 5*MAX_NUM + 1)
				{
					period_count =6;
				}
				else if(count == 6*MAX_NUM + 1)
				{
					period_count =2;
				}
				else period_count ++;
	  }	
}

