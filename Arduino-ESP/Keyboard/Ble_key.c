#include <BleKeyboard.h>

BleKeyboard bleKeyboard("name","Espressif",100);//其中“ESP32蓝牙键盘”为键盘名称；"Espressif"为制造商

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}
 
void loop() {
  if(bleKeyboard.isConnected()) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50);

//    bleKeyboard.press(KEY_LEFT_GUI);
//    bleKeyboard.press('d');
//    delay(50); 
//    bleKeyboard.releaseAll();
    
    bleKeyboard.press(KEY_LEFT_ALT);
    bleKeyboard.press(KEY_F4);
    bleKeyboard.releaseAll();
    bleKeyboard.press(KEY_RETURN);

  }
}
