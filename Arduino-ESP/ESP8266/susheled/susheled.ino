#define BLINKER_WIFI
#define BLINKER_PRINT Serial
#define BLINKER_MIOT_LIGHT

#include <Blinker.h>
#include <Servo.h>

char auth[] = "Blinker设备密钥";
char ssid[] = "你的wifi名称";
char pswd[] = "你的wifi密码";
BlinkerButton Button1("ddl1"); //blinker按键键名
BlinkerButton Button2("ddl2"); //blinker按键键名
Servo servo_16;   //舵机输出口 GIPO16
bool oState = false;

//按键1按下后执行该函数
void button1_callback(const String & state) {
    BLINKER_LOG("get button state: ", state);
   // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    servo_16.write(45);  //舵机旋转角度 具体参数需要结合自身情况修改
    delay(1);           //给一个小延时
    delay(1000);   //舵机动作后延时一会回到初始位置
    servo_16.write(95); //设置该角度方便手动开关灯 就是开完灯舵机归位
}

//按键2按下执行该函数
void button2_callback(const String & state) {
    BLINKER_LOG("get button state: ", state);
    servo_16.write(135);  //同上一样的思路
    delay(1);
    delay(1000);
    servo_16.write(95);  
}

//小爱电源回调函数
//里面同样设置舵机的动作
void miotPowerState(const String & state)
{
    BLINKER_LOG("need set power state: ", state);
    if (state == BLINKER_CMD_ON) {
       // digitalWrite(LED_BUILTIN, HIGH);
         servo_16.write(45  );
         delay(1);
         delay(1000);
         servo_16.write(95);
        BlinkerMIOT.powerState("on");
        BlinkerMIOT.print();
    }
    else if (state == BLINKER_CMD_OFF) {
      //  digitalWrite(LED_BUILTIN, LOW);
        servo_16.write(135);
         delay(1);
         delay(1000);
         servo_16.write(95);
        BlinkerMIOT.powerState("off");
        BlinkerMIOT.print();
    }
}



void miotQuery(int32_t queryCode)
{
    BLINKER_LOG("MIOT Query codes: ", queryCode);

    switch (queryCode)
    {
        case BLINKER_CMD_QUERY_ALL_NUMBER :
            BLINKER_LOG("MIOT Query All");
            BlinkerMIOT.powerState(oState ? "on" : "off");
            BlinkerMIOT.print();
            break;
        case BLINKER_CMD_QUERY_POWERSTATE_NUMBER :
            BLINKER_LOG("MIOT Query Power State");
            BlinkerMIOT.powerState(oState ? "on" : "off");
            BlinkerMIOT.print();
            break;
        default :
            BlinkerMIOT.powerState(oState ? "on" : "off");
            BlinkerMIOT.print();
            break;
    }
}

void dataRead(const String & data)
{
    BLINKER_LOG("Blinker readString: ", data);

    Blinker.vibrate();

    uint32_t BlinkerTime = millis();
    Blinker.print(BlinkerTime);
    Blinker.print("millis", BlinkerTime);
}


void setup()
{
    Serial.begin(115200);

    BLINKER_DEBUG.stream(Serial);

    // 初始化有LED的IO
    //这里初始话后没有调用板子自带的led
    pinMode(LED_BUILTIN, OUTPUT);
    servo_16.attach(16);
   
    
    digitalWrite(LED_BUILTIN, HIGH);
    // 初始化blinker
    Blinker.begin(auth, ssid, pswd);
    BlinkerMIOT.attachQuery(miotQuery);
    Blinker.attachData(dataRead);
    BlinkerMIOT.attachPowerState(miotPowerState);
    Button1.attach(button1_callback);
    Button2.attach(button2_callback);  
}

void loop()
{
    Blinker.run();
}
