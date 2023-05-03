int FirstLED = 9; // 第一个输出口            
int LastLED  = 13; // 最后一个输出口
int timer    = 300; // 每个灯点亮的时间


void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = FirstLED; thisPin <= LastLED; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // 这里从9号灯到13号灯
  for (int thisPin = FirstLED; thisPin <= LastLED; thisPin++) {
    // 点亮
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // 熄灭
    digitalWrite(thisPin, LOW);
  }

  // 这里从13号灯到9号灯
  for (int thisPin = LastLED; thisPin >= FirstLED; thisPin--) {
    // 点亮
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // 熄灭
    digitalWrite(thisPin, LOW);
  }
}
