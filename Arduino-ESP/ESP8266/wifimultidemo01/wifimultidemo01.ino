//写入多个WiFi，自动选择一个最好的wifi进行连接

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;  //对象

void setup(){
   Serial.begin(9600);

  wifiMulti.addAP("MECURY","11235813");
  wifiMulti.addAP("OUC-WIFI","");
  wifiMulti.addAP("OUC-AUTO","");

  Serial.println("Connecting ....");
  int i = 0;
  while(wifiMulti.run() != WL_CONNECTED){
    delay(1000);

    Serial.print('.');
  }

  Serial.println(' ');

  Serial.print("Connected to ");
  Serial.println(WiFi.SSID());
  Serial.print("IP address:");
  Serial.println(WiFi.localIP());
}



void loop(){
  
}
