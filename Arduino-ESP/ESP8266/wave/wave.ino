/* ESP8266
 * HC-SR04、US-015超声波模块测距示例
 */
 
#define TRIGGER 4   // NodeMCU Pin D2 > TRIGGER 
#define ECHO    5   //Pin D1 > ECHO
volatile long duration, distance;

void setup()
{  
    Serial.begin(9600);                       
    pinMode(ECHO, INPUT);                    
    pinMode(TRIGGER, OUTPUT);                   
}

void loop() {
  digitalWrite(TRIGGER, LOW);  
  delayMicroseconds(10);  
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIGGER, LOW);    //发一个20US的高脉冲去触发Trig 
  duration = pulseIn(ECHO, HIGH);
  distance  = duration*340/2/10000;           //计算cm距离 1：声速：340M/S  2：实际距离1/2声速距离 3：计数时钟为1US
  Serial.print("距离: ");
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance <=10)
  {//如果距离小于10厘米小灯亮起
    digitalWrite(LED_BUILTIN,HIGH);
  }//如果距离大于10厘米小灯熄灭
  else
    digitalWrite(LED_BUILTIN,LOW);
  delay(20);                                   //单次测离完成后加20mS的延时再进行下次测量。防止近距离测量时，测量到上次余波，导致测量不准确。
  delay(500);                                  //500mS测量一次
}
