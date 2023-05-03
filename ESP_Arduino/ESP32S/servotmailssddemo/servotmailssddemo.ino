// 天猫精灵控制舵机实现开关灯
// 5V-红线
// gnd-棕线
// GPIO16-橙

// ssd1306
// 3.3v-vcc
// gnd-gnd
// GPIO21-scl
// GPIO22-sda


#define BLINKER_WIFI
#define BLINKER_ALIGENIE_MULTI_OUTLET

#include <Blinker.h>
#include <ESP32Servo.h>
#include <Wire.h>
#include "SSD1306.h" 

#define SDA 21
#define SCL 22
// SSD 引脚设置
SSD1306 display(0x3c, SDA, SCL);


Servo myservo;  // 定义Servo对象来控制
int pos = 90;    // 角度存储变量


// 定义开关灯函数
void kaideng(){
  myservo.write(pos);
  delay(2000);
  myservo.write(pos+45);
  delay(1000);
  myservo.write(pos);
  delay(2000);
}

void guandeng(){
  myservo.write(pos);
  delay(2000);
  myservo.write(pos-45);
  delay(1000);
  myservo.write(pos);
  delay(2000);
}


char auth[] = "9a664e80a171";
char ssid[] = "MERCURY";
char pswd[] = "11235813";

bool oState[5] = { false };

void aligeniePowerState(const String & state, uint8_t num)
{
    BLINKER_LOG("need set outlet: ", num, ", power state: ", state);

    if (state == BLINKER_CMD_ON) {
        digitalWrite(LED_BUILTIN, HIGH);

        BlinkerAliGenie.powerState("on", num);
        kaideng();
        BlinkerAliGenie.print();

        oState[num] = true;
    }
    else if (state == BLINKER_CMD_OFF) {
        digitalWrite(LED_BUILTIN, LOW);

        BlinkerAliGenie.powerState("off", num);
        guandeng();
        BlinkerAliGenie.print();

        oState[num] = true;

        if (num == 0)
        {
            for (uint8_t o_num = 0; o_num < 5; o_num++)
            {
                oState[o_num] = false;
            }
        }
    }
}

void aligenieQuery(int32_t queryCode, uint8_t num)
{
    BLINKER_LOG("AliGenie Query outlet: ", num,", codes: ", queryCode);

    switch (queryCode)
    {
        case BLINKER_CMD_QUERY_ALL_NUMBER :
            BLINKER_LOG("AliGenie Query All");
            BlinkerAliGenie.powerState(oState[num] ? "on" : "off", num);
            BlinkerAliGenie.print();
            break;
        case BLINKER_CMD_QUERY_POWERSTATE_NUMBER :
            BLINKER_LOG("AliGenie Query Power State");
            BlinkerAliGenie.powerState(oState[num] ? "on" : "off", num);
            BlinkerAliGenie.print();
            break;
        default :
            BlinkerAliGenie.powerState(oState[num] ? "on" : "off", num);
            BlinkerAliGenie.print();
            break;
    }
}

void dataRead(const String & data)
{
    BLINKER_LOG("Blinker readString: ", data);

    Blinker.vibrate();
    
    uint32_t BlinkerTime = millis();
    
    Blinker.print("millis", BlinkerTime);
}

void setup()
{
    Serial.begin(115200);
    BLINKER_DEBUG.stream(Serial);

    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);

    Blinker.begin(auth, ssid, pswd);
    Blinker.attachData(dataRead);
    
    BlinkerAliGenie.attachPowerState(aligeniePowerState);
    BlinkerAliGenie.attachQuery(aligenieQuery);

    // 设置舵机信号线
    myservo.attach(16);  // GPIO16
    ssdinit();
}

void ssdinit(){

  // 128*64
  display.init();
 
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 0, "Hello World");
 
  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 10, "Hello World");
 
  display.setFont(ArialMT_Plain_24);
  display.drawString(0, 25, "Hello World");
 
  display.display();
}



  
void loop()
{
    Blinker.run();
}
