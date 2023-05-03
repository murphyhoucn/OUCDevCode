#include "FS.h"
#include "SD_MMC.h"
#include "SPI.h"
#include <time.h> 
#include <WiFi.h>
#include "cJSON.h"

#define ssid "b123"
#define password "cx123456" 

//  https://blog.csdn.net/LinQiPing233/article/details/83615058  --  这个是时区的详情
const char* ntpServer = "cn.pool.ntp.org";  //pool.ntp.org为获取时间得接口，可以尝试更多得接口。比如微软的time.windows.com，美国国家标准与技术研究院的time.nist.gov
const long  gmtOffset_sec = 8*60*60;//这里采用UTC计时，中国为东八区，就是 8*60*60
const int   daylightOffset_sec = 0*60*60;

struct tm timeinfo;  //创建一个结构体用于存储时间

//***********************************************************************************************************************    SD卡路径操作，包括列出路径，创建路径，删除路径
void listDir(fs::FS &fs, const char * dirname, uint8_t levels){
    Serial.printf("Listing directory: %s\n", dirname);

    File root = fs.open(dirname);
    if(!root){
        Serial.println("Failed to open directory");
        return;
    }
    if(!root.isDirectory()){
        Serial.println("Not a directory");
        return;
    }

    File file = root.openNextFile();
    while(file){
        if(file.isDirectory()){
            Serial.print("  DIR : ");
            Serial.print (file.name());
            time_t t= file.getLastWrite();
            struct tm * tmstruct = localtime(&t);
            Serial.printf("  LAST WRITE: %d-%02d-%02d %02d:%02d:%02d\n",(tmstruct->tm_year)+1900,( tmstruct->tm_mon)+1, tmstruct->tm_mday,tmstruct->tm_hour , tmstruct->tm_min, tmstruct->tm_sec);
            if(levels){
                listDir(fs, file.name(), levels -1);
            }
        } else {
            Serial.print("  FILE: ");
            Serial.print(file.name());
            Serial.print("  SIZE: ");
            Serial.print(file.size());
            time_t t= file.getLastWrite();
            struct tm * tmstruct = localtime(&t);
            Serial.printf("  LAST WRITE: %d-%02d-%02d %02d:%02d:%02d\n",(tmstruct->tm_year)+1900,( tmstruct->tm_mon)+1, tmstruct->tm_mday,tmstruct->tm_hour , tmstruct->tm_min, tmstruct->tm_sec);
        }
        file = root.openNextFile();
    }
}

void createDir(fs::FS &fs, const char * path){
    Serial.printf("Creating Dir: %s\n", path);
    if(fs.mkdir(path)){
        Serial.println("Dir created");
    } else {
        Serial.println("mkdir failed");
    }
}

void removeDir(fs::FS &fs, const char * path){
    Serial.printf("Removing Dir: %s\n", path);
    if(fs.rmdir(path)){
        Serial.println("Dir removed");
    } else {
        Serial.println("rmdir failed");
    }
}
//***********************************************************************************************************************    SD卡文件操作，包括读取，写入，添加，删除，重命名
void readFile(fs::FS &fs, const char * path){
    Serial.printf("Reading file: %s\n", path);

    File file = fs.open(path);    
    if(!file){
        Serial.println("Failed to open file for reading");
        return;
    }

    Serial.print("Read from file: ");
    while(file.available()){
        //这里就是读取出来的内容通过串口打印出来，我们也就可以在这里加入自己的逻辑，比如读取出来存储到一个字符串里面，然后用我之前博文里面切割字符串的类似方法摄取文件里面实际的信息
        Serial.write(file.read());
    }
    file.close();
}

void writeFile(fs::FS &fs, const char * path, const char * message){
    Serial.printf("Writing file: %s\n", path);

    File file = fs.open(path, FILE_WRITE);
    if(!file){
        Serial.println("Failed to open file for writing");
        return;
    }
    if(file.print(message)){
        Serial.println("File written");
    } else {
        Serial.println("Write failed");
    }
    file.close();
}

void appendFile(fs::FS &fs, const char * path, const char * message){
    Serial.printf("Appending to file: %s\n", path);

    File file = fs.open(path, FILE_APPEND);
    if(!file){
        Serial.println("Failed to open file for appending");
        return;
    }
    if(file.print(message)){
        Serial.println("Message appended");
    } else {
        Serial.println("Append failed");
    }
    file.close();
}

void renameFile(fs::FS &fs, const char * path1, const char * path2){
    Serial.printf("Renaming file %s to %s\n", path1, path2);
    if (fs.rename(path1, path2)) {
        Serial.println("File renamed");
    } else {
        Serial.println("Rename failed");
    }
}

void deleteFile(fs::FS &fs, const char * path){
    Serial.printf("Deleting file: %s\n", path);
    if(fs.remove(path)){
        Serial.println("File deleted");
    } else {
        Serial.println("Delete failed");
    }
}
//***********************************************************************************************************************    wifi连接
String translateEncryptionType(wifi_auth_mode_t encryptionType) {   //获取wifi的特性
  switch (encryptionType){
    case (WIFI_AUTH_OPEN):
      return "Open";
    case (WIFI_AUTH_WEP):
      return "WEP";
    case (WIFI_AUTH_WPA_PSK):
      return "WPA_PSK";
    case (WIFI_AUTH_WPA2_PSK):
      return "WPA2_PSK";
    case (WIFI_AUTH_WPA_WPA2_PSK):
      return "WPA_WPA2_PSK";
    case (WIFI_AUTH_WPA2_ENTERPRISE):
      return "WPA2_ENTERPRISE";
  }
}  

void scanNetworks(){    //搜索附近的WIFI源并打印出来
  int numberOfNetworks= WiFi.scanNetworks();
  Serial.print("Numberof networks found: ");
  Serial.println(numberOfNetworks);
  for (int i = 0; i< numberOfNetworks; i++) {
    Serial.print("Networkname: ");
    Serial.println(WiFi.SSID(i));
    Serial.print("Signalstrength: ");
    Serial.println(WiFi.RSSI(i));
    Serial.print("MACaddress: ");
    Serial.println(WiFi.BSSIDstr(i));
    Serial.print("Encryptiontype: ");
    String encryptionTypeDescription = translateEncryptionType(WiFi.encryptionType(i));
    Serial.println(encryptionTypeDescription);
    Serial.println("-----------------------");
    }
  }
  
void connectToNetwork(){
  WiFi.begin(ssid,password);
  while (WiFi.status()!= WL_CONNECTED) {
    delay(1000);
    Serial.println("try to connecting ...");
  }
  Serial.println("Connectedto network");
}
  
void wifi_connect(){
  scanNetworks();    //搜索附近的wifi信号并且打印出来
  connectToNetwork();    //链接到wifi
  Serial.println(WiFi.macAddress());    //打印出mac地址
  Serial.println(WiFi.localIP());    //打印出本地ip地址
  Serial.println("wifi连接成功");    //打印出本地ip地址
  //WiFi.disconnect(true);    //断开wifi
  //Serial.println(WiFi.localIP());    
  }
//**************************************************************************************************************************************

void setup() {
  int i = 3;
  Serial.begin(115200);
  Serial.println("尝试进行WIFI连接!!!");
  wifi_connect();
  while(i--)
  {
    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
    delay(5000);
    if(!getLocalTime(&timeinfo))
      Serial.println("Failed to obtain time");
    Serial.print("现在时间是：");
    //Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
    Serial.print("年份是：");
    Serial.println(timeinfo.tm_year + 1900);
    Serial.print("月份是：");
    Serial.println(timeinfo.tm_mon + 1);
    Serial.print("号数是：");
    Serial.println(timeinfo.tm_mday);
    Serial.print("小时数是：");
    Serial.println(timeinfo.tm_hour );  //中国区
    Serial.print("分钟数是：");
    Serial.println(timeinfo.tm_min);
    Serial.print("分钟数是：");
    Serial.println(timeinfo.tm_sec);
  }
  //*************************************************************************************  SD  卡的初始化
  if(!SD_MMC.begin()){
    Serial.println("Card Mount Failed");
    return;
  }
  uint8_t cardType = SD_MMC.cardType();
  if(cardType == CARD_NONE){
    Serial.println("No SD card attached");
    return;
  }
  Serial.print("SD Card Type: ");
  if(cardType == CARD_MMC){
    Serial.println("MMC");
    } 
  else if(cardType == CARD_SD){  Serial.println("SDSC");  }
  else if(cardType == CARD_SDHC){  Serial.println("SDHC");  } 
  else {  Serial.println("UNKNOWN");  }
  
  uint64_t cardSize = SD_MMC.cardSize() / (1024 * 1024);    //获取SD卡大小，大小单位是MB
  Serial.printf("SD 卡容量大小: %lluMB\n", cardSize);  
  //*************************************************************************************  SD卡的 路径操作
  Serial.println("现在列出目前SD卡内部根目录下所有的路径：");
  listDir(SD_MMC, "/", 0);
  Serial.println("现在在SD卡内部根目录下创建一个名为demo的路径：");
  createDir(SD_MMC, "/demo");
  Serial.println("现在列出目前SD卡更新后根目录下所有的路径：");
  listDir(SD_MMC, "/", 0);
  Serial.println("现在删除之前我们创建的名为demo的路径：");
  removeDir(SD_MMC, "/demo");
  Serial.println("现在列出目前SD卡删除demo路径后根目录下所有的路径：");
  listDir(SD_MMC, "/", 0);
  //*************************************************************************
  createDir(SD_MMC, "/demo");
  writeFile(SD_MMC, "/demo/demo.txt", "Hello ");  //在这个路径下写入demo.txt文件，内容是hello 
  appendFile(SD_MMC, "/demo/demo.txt", "World!\n");  //在这个文件中添加内容，添加内容就是world
  readFile(SD_MMC, "/demo/demo.txt");
  //deleteFile(SD_MMC, "/demo/demo.txt");  //删除文件
  //renameFile(SD_MMC, "/demo/demo.txt", "/demo/demo_1.txt");  //重命名文件
  //*************************************************************************
}

void loop() {


}
