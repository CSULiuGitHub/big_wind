#ifndef _WINDMILL_H
#define _WINDMILL_H

#include "main.h"
#include "ws2812.h"
#include "frame.h"

#define color 0  //参数为零代红色，为一代表蓝色
#define MAX_NUM 62   //中间每排灯珠数
#define TOTAL1 144 //上边灯数128+16
#define TOTAL2 62*7 //中间边灯数433
#define TOTAL3 (130)  //下边灯数130
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
