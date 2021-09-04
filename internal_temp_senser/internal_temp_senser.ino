#include "temp.h"

void setup()
{
  Serial.begin(9600);

  Serial.println(F("Internal Temperature Sensor"));
}

void loop()
{
  Serial.println(GetTemp(),1);
  delay(1000);
}


