/* Get tilt angles on X and Y, and rotation angle on Z
 * Angles are given in degrees
 * 
 * License: MIT
 */

#include "Wire.h"
#include <MPU6050_light.h>
#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>

#define WIFI_SSID "KG"
#define WIFI_PASSWORD "randomthoughts@7274"

#define FIREBASE_HOST "smart-bell-417a3-default-rtdb.firebaseio.com"  
#define FIREBASE_AUTH "42QuGDrya4gwl5R0tKcPFmwSkBBbkqVLeMU4cxLl"  

MPU6050 mpu(Wire);
unsigned long timer = 0;
unsigned long timer1 = 0;
void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  byte status = mpu.begin();
  Serial.print(F("MPU6050 status: "));
  Serial.println(status);
  while(status!=0){ } // stop everything if could not connect to MPU6050
  
  Serial.println(F("Calculating offsets, do not move MPU6050"));
  delay(1000);
  // mpu.upsideDownMounting = true; // uncomment this line if the MPU6050 is mounted upside-down
  mpu.calcOffsets(); // gyro and accelero
  Serial.println("Done!\n");

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

float y=0;
int sum=0;
int count=0;
void loop() {
  mpu.update();
  
 if((millis()-timer1)>100){ // print data every 10ms
	//Serial.print("X : ");
	//Serial.print(mpu.getAngleX());
  if(abs(mpu.getAngleX())>3.25){
    
     Serial.println("Wrong Form");
    
  }
	/*Serial.print("\tY : ");
	Serial.print(mpu.getAngleY());
	Serial.print("\tZ : ");
	Serial.println(mpu.getAngleZ());*/

  }
  if(millis() - timer > 750){ // print data every second
   // Serial.print(F("TEMPERATURE: "));Serial.println(mpu.getTemp());
    float x=mpu.getAccX();
    if(abs(x-y)>0.1){
      sum++;
      if(sum>3){
        count++;
        Serial.println(count);
        Firebase.setFloat("number", count);  
        sum=0;
      }
      
    }
    else{y=x;}
    timer = millis();
  }
}
