#ifndef _WINDMILL_H
#define _WINDMILL_H

#include "main.h"
#include "ws2812.h"
#include "frame.h"

#define color 0  //����Ϊ�����ɫ��Ϊһ������ɫ
#define MAX_NUM 62   //�м�ÿ�ŵ�����
#define TOTAL1 144 //�ϱߵ���128+16
#define TOTAL2 62*7 //�м�ߵ���433
#define TOTAL3 (130)  //�±ߵ���130
#define TOTAL4  68 //for armour

void change_lamp(int i);
void WS2812_reset(void);
void ws2812_test(int i);
void armour(void);
void Run_led(void);
void hit(void);
void Get_next_lamp(void);
void finish(void);



#endif
