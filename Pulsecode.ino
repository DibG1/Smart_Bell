#define USE_ARDUINO_INTERRUPTS true 
#include <PulseSensorPlayground.h>   

const int PulseWire = 0;     
const int LED13 = 13;    
int Threshold = 550;    
int LED=2                               
PulseSensorPlayground pulseSensor; 

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pulseSensor.analogInput(PulseWire);   
  pulseSensor.blinkOnPulse(LED13);    
  pulseSensor.setThreshold(Threshold);   

}

void loop() {
  int myBPM = pulseSensor.getBeatsPerMinute();      
  int age=20;
  int weight=67;
  int gender=0;
  int t=30;
  int n=0;
  int sumBPM=0;
  if (pulseSensor.sawStartOfBeat()) {            
    Serial.print("BPM: ");
    Serial.println(myBPM);  
    n=n+1; 
    sumBPM=sumBPM+ myBPM;                    
    }
   if (myBPM>=180){
    digitalWrite(LED,HIGH);
   }
  delay(20);
  int avgBPM= sumBPM/n
  int cal=0;
  if (gender=0){
    cal=((-55.0969 + (0.6309 x avgBPM) + (0.1988 x weight) + (0.2017 x age))/4.184) x 60 x t
  }
  if (gender=1){
    cal= ((-20.4022 + (0.4472 x avgBPM) - (0.1263 x weight) + (0.074 x age))/4.184) x 60 x t
  }
  Serial.print("calories burnt: ");
  Serial.println(cal);
}
