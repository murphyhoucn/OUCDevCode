#include<ESP8266WiFi.h> 

const char *ssid = "Murphy";
const char *password = "123456789";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//启动串口通讯
  WiFi.softAP(ssid,password); //启动AP模式


  Serial.print("Acess Point:");
  Serial.println(ssid);

  Serial.print("IP address:");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
