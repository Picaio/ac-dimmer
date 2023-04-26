
//Libraries
#include "dimmerESP32.h"

//Parameters
const int zeroCrossPin  = 35;
const int acdPin  = 12;
int MIN_POWER  = 0;
int MAX_POWER  = 85;

//Variables
int  outVal = 0;
int  dimmer = 0;
bool ON_Dimmer = HIGH;

//Objects
dimmerLampESP32 acd(acdPin,zeroCrossPin);

void setup(){
//Init Serial USB
Serial.begin(115200);
Serial.println(F("ESP32 System"));
acd.begin(NORMAL_MODE, ON);
Serial.print("% lampValue -> ");        
Serial.println(outVal);
acd.setPower(outVal); // setPower(0-100%);
}

void loop()
{
  if (Serial.available())
     { 
      int buf = Serial.parseInt();
      outVal = buf;  
      //dimmer = outVal;   
      Serial.print("% lampValue -> ");        
      Serial.println(outVal);
      dimmer = map(outVal, 0, 100, MIN_POWER , MAX_POWER);    
      }

  if (dimmer == 0)
     {
      ON_Dimmer = LOW;
      acd.begin(NORMAL_MODE, OFFD);
     }
  else
     {
      if (ON_Dimmer == LOW)
         {
          acd.begin(NORMAL_MODE, ON);
          ON_Dimmer = HIGH;
         }
      else
         {
          acd.setPower(dimmer); // setPower(0-100%);     
         }
     
     }
  
}
