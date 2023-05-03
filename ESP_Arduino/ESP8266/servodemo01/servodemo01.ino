#include <Servo.h>

Servo myservo;  // 定义Servo对象来控制
int pos = 90;    // 角度存储变量

void setup() {
  myservo.attach(14);  
}

void kaideng(){
  myservo.write(pos);
  delay(2000);
  myservo.write(pos+45);
  delay(1000);
}

void guandeng(){
  myservo.write(pos);
  delay(2000);
  myservo.write(pos-45);
  delay(1000);

}
void loop() {
  Serial.println("duoji");
  kaideng();
  guandeng();
}
