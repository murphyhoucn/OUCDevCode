#include <ESP8266WiFi.h>

const char* ssid = "MERCURY";
const char* passwd = "11235813";

void setup(){
  Serial.begin(9600);

  WiFi.begin(ssid,passwd);
  Serial.print("Connect to:");
  Serial.print(ssid);
  Serial.println("......");


  int i = 0;
  while (WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(i++);
    Serial.println(' ');
  }

  Serial.println(' ');

  Serial.println("Connection established");
  Serial.print("IP address:");
  Serial.println(WiFi.localIP());

  

}

 void loop(){
  
 }
