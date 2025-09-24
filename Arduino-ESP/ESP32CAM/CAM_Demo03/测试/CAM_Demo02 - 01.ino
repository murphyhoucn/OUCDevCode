// https://www.cnblogs.com/codeit/p/15580267.html

#include "esp_camera.h"
#include "FS.h"
#include <SPI.h>
#include <SD.h>
#include "SD_MMC.h"
#include <time.h> 
#include <WiFi.h>
#include "string.h"

const char* ntpServer = "cn.pool.ntp.org";  //pool.ntp.org为获取时间得接口，可以尝试更多得接口。比如微软的time.windows.com，美国国家标准与技术研究院的time.nist.gov
const long  gmtOffset_sec = 8*60*60;//这里采用UTC计时，中国为东八区，就是 8*60*60
const int   daylightOffset_sec = 0*60*60;

struct tm timeinfo;  //创建一个结构体用于存储时间
char * path = "/2020_6_18_TIME_19_0_47.jpg";
char timr_str[40] = "test.jpg";

/* 
    *******************
    ***** 网络部分 *****
    *******************
*/

//以下是WIFI的链接用户名和密码
#define ssid "MERCURY"
#define password "11235813" 
// 网络链接
void connectToNetwork(){
  WiFi.begin(ssid,password);
  WiFi.setAutoReconnect(true);
  while (WiFi.status()!= WL_CONNECTED) {
    delay(1000);
    Serial.println("try to connecting ...");
  }
  Serial.println("Connectedto network");
}

void wifi_connect(){
  connectToNetwork();//链接到wifi
  Serial.println(WiFi.macAddress());    //打印出mac地址
  Serial.println(WiFi.localIP());    //打印出本地ip地址
  Serial.println("wifi连接成功");    //打印出本地ip地址
}

/* 
    ***************************
    ***** 摄像头初始化参数 *****
    ***************************
*/

static camera_config_t camera_config = {
    .pin_pwdn = 32,
    .pin_reset = -1,
    .pin_xclk = 0,
    .pin_sscb_sda = 26,
    .pin_sscb_scl = 27,
    
    .pin_d7 = 35,
    .pin_d6 = 34,
    .pin_d5 = 39,
    .pin_d4 = 36,
    .pin_d3 = 21,
    .pin_d2 = 19,
    .pin_d1 = 18,
    .pin_d0 = 5,
    .pin_vsync = 25,
    .pin_href = 23,
    .pin_pclk = 22,
    
    .xclk_freq_hz = 20000000,
    .ledc_timer = LEDC_TIMER_0,
    .ledc_channel = LEDC_CHANNEL_0,
    
    .pixel_format = PIXFORMAT_JPEG,  //YUV422,GRAYSCALE,RGB565,JPEG
    .frame_size = FRAMESIZE_UXGA,   // FRAMESIZE_ + QVGA|CIF|VGA|SVGA|XGA|SXGA|UXGA
    
    .jpeg_quality = 10, //0-63 lower number means higher quality
    .fb_count = 1 //if more than one, i2s runs in continuous mode. Use only with JPEG

};

esp_err_t camera_init() {
    //initialize the camera
    esp_err_t err = esp_camera_init(&camera_config);
    if (err != ESP_OK) {
        Serial.print("Camera Init Failed");
        return err;
    }
    sensor_t * s = esp_camera_sensor_get();
    //initial sensors are flipped vertically and colors are a bit saturated
    if (s->id.PID == OV2640_PID) {
    //        s->set_vflip(s, 1);//flip it back
    //        s->set_brightness(s, 1);//up the blightness just a bit
    //        s->set_contrast(s, 1);
    }
    Serial.print("Camera Init OK");
    return ESP_OK;
}

/* 
    ***************************
    ***** SD卡路径操作函数 *****
    **** 列出路径，创建路径，删除路径******
    ***************************
*/

// 列出路径
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

// 创建路径
void createDir(fs::FS &fs, const char * path){
    Serial.printf("Creating Dir: %s\n", path);
    if(fs.mkdir(path)){
        Serial.println("Dir created");
    } else {
        Serial.println("mkdir failed");
    }
}

// 删除路径
void removeDir(fs::FS &fs, const char * path){
    Serial.printf("Removing Dir: %s\n", path);
    if(fs.rmdir(path)){
        Serial.println("Dir removed");
    } else {
        Serial.println("rmdir failed");
    }
}


/* 
    ***************************
    ***** SD卡文件操作 *****
    **** 读取，写入，添加，删除，重命名******
    ***************************
*/


void readFile(fs::FS &fs, const char * path){
    Serial.printf("Reading file: %s\n", path);

    File file = fs.open(path);    
    if(!file){
        Serial.println("Failed to open file for reading");
        return;
    }

    Serial.print("Read from file: ");
    while(file.available()){
        //这里就是读取出来的内容通过串口打印出来，我们也就可以在这里加入自己的逻辑，
        //比如读取出来存储到一个字符串里面，然后用我之前博文里面切割字符串的类似方法摄取文件里面实际的信息
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



/* 
    ***************************
    ***** SD卡初始化参数 *****
    ***************************
*/

void sd_init()
{
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

  //***************  调用SD卡的 路径操作函数  **********************************************************************
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
  //*************************调用SD卡的 文件操作函数************************************************
  createDir(SD_MMC, "/demo");
  writeFile(SD_MMC, "/demo/demo.txt", "Hello ");  //在这个路径下写入demo.txt文件，内容是hello 
  appendFile(SD_MMC, "/demo/demo.txt", "World!\n");  //在这个文件中添加内容，添加内容就是world
  readFile(SD_MMC, "/demo/demo.txt");
  //deleteFile(SD_MMC, "/demo/demo.txt");  //删除文件
  //renameFile(SD_MMC, "/demo/demo.txt", "/demo/demo_1.txt");  //重命名文件
  //*************************************************************************

  }


/* 
    ***************************
    ***** 获取当前时间作为返回的函数部分 *****
    ***************************
*/

void get_time_path()  //获取目前时间返回字符串
{
    memset(timr_str, 0, sizeof(timr_str));
    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
    if(!getLocalTime(&timeinfo))
    {
      Serial.println("Failed to obtain time");
      sprintf(timr_str, "/TIME_get_failed.jpg");
    }
    else
    {
      //Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
      Serial.print("现在时间是：");
      Serial.print("年份是：");Serial.println(timeinfo.tm_year + 1900);
      Serial.print("月份是：");Serial.println(timeinfo.tm_mon + 1);
      Serial.print("号数是：");Serial.println(timeinfo.tm_mday);
      Serial.print("小时数是：");Serial.println(timeinfo.tm_hour );  //中国区
      Serial.print("分钟数是：");Serial.println(timeinfo.tm_min);
      Serial.print("秒数是：");Serial.println(timeinfo.tm_sec);
      sprintf(timr_str, "/%d_%d_%d_TIME_%d_%d_%d.jpg",timeinfo.tm_year+1900,timeinfo.tm_mon + 1,timeinfo.tm_mday,timeinfo.tm_hour,timeinfo.tm_min,timeinfo.tm_sec);
      }
  }

/* 
    ***************************
    ***** 主函数部分 *****
    ***************************
*/
void setup() {
    Serial.begin(115200);
    wifi_connect();
    camera_init();  //摄像头初始化
    sd_init();  //SD卡初始化
}


void loop() 
{
   //拍照并且把图片保存到SD卡当中，而照片名字就保存为目前的时间
   
    delay(2000);  // 延时摄影，时间间隔:60 000 ms
    
    Serial.println("即将进行拍照!!!");
    camera_fb_t * fb = esp_camera_fb_get();
    get_time_path();
    Serial.print("存入的图片名称为:");Serial.println(timr_str);
    path = timr_str;    
    if(fb == NULL)
    {
      Serial.println( "get picture failed");  //代表获取图片失败
    }else{ 
       //char * path = time_str;
       fs::FS &fs = SD_MMC;
       Serial.printf("Writing file: %s\n", path);
       File file = fs.open(path, FILE_WRITE);
       if (!file) 
       {
         Serial.println("文件创建失败");
        }
       else
       {
         file.write(fb->buf , fb->len); //payload , lengte vd payload
         Serial.println("成功写入照片");
       }
       //return the frame buffer back to the driver for reuse
       esp_camera_fb_return(fb);
    }
}
