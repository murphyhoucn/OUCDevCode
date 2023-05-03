// 引入头文件
#include "SSD1306Wire.h" 
#include "OLEDDisplayUi.h"

// 定义一个display设备，并且设置它的SDA为D3引脚，SCL为D5引脚
SSD1306Wire display(0x3c, D3, D5);

// 创建一个ui，并且把display传递给ui
OLEDDisplayUi ui(&display);

// 绘制Frame，这个函数最后由ui来调用，参数格式是给定的
void DrawFrame(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {
  // 设置绘制文字的方式为左对齐
  display->setTextAlignment(TEXT_ALIGN_LEFT);

  // 设置字体为ArialMT_Plain_10，并在屏幕（0，10）的位置绘制Hello World！
  display->setFont(ArialMT_Plain_10);
  display->drawString(0 + x, 10 + y, "Murphy Hou");

  // 设置字体为ArialMT_Plain_16，并在屏幕（0，20）的位置绘制Hello World！
  display->setFont(ArialMT_Plain_16);
  display->drawString(0 + x, 20 + y, "Hello World!");
  
  // 设置字体为ArialMT_Plain_16，并在屏幕（0，34）的位置绘制Hello World！
  display->setFont(ArialMT_Plain_24);
  display->drawString(0 + x, 34 + y, "Hello World!");
}

// 创建FrameCallback给ui使用，这里只有一个Frame，Frame的作用可以让ui来切换不同的frame绘制不同的画面
FrameCallback frames[] = {DrawFrame};
// 只有一个frame，所以frame count是1
int frameCount = 1;

void setup() {
  // 设置刷新率为30帧1秒
  ui.setTargetFPS(30);
  
  // 给ui传递frame信息
  ui.setFrames(frames, frameCount);

  // 关闭frame标签
  ui.disableAllIndicators();

  // 关闭自动切换frame功能
  ui.disableAutoTransition();

  // 初始化ui
  ui.init();

  // 翻转屏幕180度
  display.flipScreenVertically();

  // 设置ui绘制的当前frame为frames的第0个frame
  ui.switchToFrame(0);
}

void loop() {
  // 帧速率由ui控制，更新完ui后会返回下一帧需要等待的时间
  int remainingTimeBudget = ui.update();

  // 延迟对应的时间后可以再次更新屏幕
  if (remainingTimeBudget > 0) {
    delay(remainingTimeBudget);
  }
}
