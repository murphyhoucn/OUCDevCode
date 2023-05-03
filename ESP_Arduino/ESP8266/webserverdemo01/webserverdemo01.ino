//网络服务器

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WebServer.h>

ESP8266WiFiMulti wifimulti;

ESP8266WebServer espserver(80);   //对象，80：htpp端口号


void setup(void){
  Serial.begin(9600);

  wifimulti.addAP("MERCURY","11235813");
  wifimulti.addAP("HUAWEI","");


  int i = 0;
  while (wifimulti.run() != WL_CONNECTED){
    delay(1000);
    Serial.print(i++);
    Serial.println(' ');
  }

  Serial.println(' ');
  Serial.print("Connected to:");
  Serial.println(WiFi.SSID());
  Serial.print("IP Address:");
  Serial.println(WiFi.localIP());


  espserver.begin();  //启动网络服务器

  espserver.on("/",handleRoot);  //网站提供的服务，‘/’，网站首页，根目录
  espserver.onNotFound(handleNotFound);   //

  Serial.println("HTTP espwebserver started!");
}

void handleRoot(){
  espserver.send(200, "text/plain", "I am Shengzi's father!");
  
}
void handleNotFound(){
  espserver.send(404, "text/plain", "404: Not Found");
  
}

void loop()
{
  espserver.handleClient();
}
