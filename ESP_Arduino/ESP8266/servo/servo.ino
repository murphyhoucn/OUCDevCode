#include <Servo.h>

Servo myServo;  // 定义Servo对象来控制
int pos = 0;    // 角度存储变量

void setup() {
  myServo.attach(14); //D5
  pinMode(LED_BUILTIN,OUTPUT);
     
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
  
  for (pos = 0; pos <= 180; pos ++) { // 0°到180°
    // in steps of 1 degree
    myServo.write(pos);              // 舵机角度写入
    delay(5);                       // 等待转动到指定角度
  }
  delay(1000);//延时1s
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 

  for (pos = 180; pos >= 0; pos --) { // 从180°到0°
    Serial.println("duoji");
    myServo.write(pos);              // 舵机角度写入
    // delay(15);                       // 等待转动到指定角度
  }
  delay(1000);//延时2s 


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
