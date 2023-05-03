#include "Freenove_WS2812_Lib_for_ESP32.h"

#define LEDS_COUNT  8    //彩灯数目
#define LEDS_PIN  2    //ESP32控制ws2812的引脚
#define CHANNEL   0    //控制通道，最多8路

Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);//申请一个彩灯控制对象

void setup() {
  strip.begin();      //初始化彩灯控制引脚
}

void loop() {
  for (int j = 0; j < 255; j += 2) 
  {
    for (int i = 0; i < LEDS_COUNT; i++) 
    {
      strip.setLedColorData(i, strip.Wheel((i * 256 / LEDS_COUNT + j) & 255));//设置彩灯颜色数据
    }
    
    strip.show();//显示颜色
    delay(5);
  }  
}
