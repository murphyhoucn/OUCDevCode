#include <Servo.h>

Servo myServo;  // 定义Servo对象来控制
int pos = 0;    // 角度存储变量

void setup() {
  myServo.attach(14); //D5
  pinMode(LED_BUILTIN,OUTPUT);
     
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(10); 
  
  for (pos = 0; pos <= 180; pos ++) { // 0°到180°
    // in steps of 1 degree
    myServo.write(pos);              // 舵机角度写入
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(10);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(10); 
  }
  
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  delay(100);
  
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  delay(100);
  
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  delay(100);
  
}
