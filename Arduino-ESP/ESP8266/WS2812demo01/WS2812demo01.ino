#include <FastLED.h>

#define LED_PIN     8     //我的LED信号线IN接在8引脚
#define NUM_LEDS    8    //我的灯带一共级联了12颗LED
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(20);  //可以设置全局亮度，调低亮度不刺眼
}

void loop() {
  // 显示一下粉色
  leds[0] = CRGB::HotPink;
  FastLED.show();
  delay(1000);
  // 显示一下黑色，黑色就是熄灭
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(1000);
}
