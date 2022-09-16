#include <UniversalTelegramBot.h> //library telegram messanger 
#include <WiFi.h> //library wifi 
#include <WiFiClientSecure.h> //library wifi client 
#include "esp_camera.h" //library esp camera 
#include <Ultrasonic.h> //library untuk ultrasonic

String chat_id= "938706040";; //chat id
#define BOTtoken "5448248617:AAEaAPEyTya0sJQ1L_GngbiCYiN_CcxzjFM" //token telegram messanger
const char* ssid = "Dilios"; //nama hotspot
const char* password = "Dilios18"; //nama password
config.pixel_format = PIXFORMAT_JPEG;

void setup(){
int jarak=ultrasonic.Ranging(CM);
if(jarak<=20){
  digitalWrite(pinEnabled, HIGH);
  delay(500); //delay 500 ms
  digitalWrite(pinEnabled, LOW);
  }
}

void loop() {
  WiFi.mode(WIFI_STA);
  Serial.println("");
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  long int StartTime=millis();
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    if ((StartTime+10000) < millis()) 
   break;
  }
}
