#include <Servo.h>

Servo myServo;  // 定义Servo对象来控制
int pos = 0;    // 角度存储变量

void setup() {
  myServo.attach(14); //D5   
}

void loop() { 
 for (pos = 0; pos <= 180; pos ++) { // 0°到180°
    // in steps of 1 degree
    myServo.write(pos);              // 舵机角度写入
    delay(15);                       // 等待转动到指定角度
  } 
  delay(2000);//延时2s
  for (pos = 180; pos >= 0; pos --) { // 从180°到0°
    myServo.write(pos);              // 舵机角度写入
    delay(15);                       // 等待转动到指定角度
  }
  delay(2000);//延时2s 
}
