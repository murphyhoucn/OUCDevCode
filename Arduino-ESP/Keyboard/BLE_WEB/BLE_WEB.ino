#include <BleKeyboard.h>
#include <WiFi.h>
 
BleKeyboard bleKeyboard("Dell Device","Espressif",100);//其中“ESP32蓝牙键盘”为键盘名称；"Espressif"为制造商
#define BUTTON_1 27       // 我把按钮接在开发板的27号引脚，可根据自己情况修改
unsigned int preState = HIGH;
void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}
 
void loop() {
  if(bleKeyboard.isConnected()) {
      if (bleKeyboard.isConnected()) {
    // 读取按钮电平状态，但不用电平触发，使用边沿触发，更加稳定可靠
      int buttonState = digitalRead(BUTTON_1);
    
      if (buttonState == LOW && preState == HIGH) {
        Serial.println("按（踩）下按键");
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(100);                       // wait for a second
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
        delay(100);                       // wait for a second
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(100);                       // wait for a second
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
        delay(100);                       // wait for a second
        preState = LOW;
        delay(20);
      }
  
      
      else if (buttonState == HIGH && preState == LOW) {
        Serial.println("释放按键");
        preState = HIGH;
      }
  }

  delay(100);
    
  }
  else{
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(2000);
  }
}
