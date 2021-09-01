#include "TIMER.h"


void setup() {
  Serial.begin(115200);
  TimerBegin();
}
void loop() {
  Serial.println(mills);
  Serial.println(sec);
  Serial.println(mins);
  Serial.println(hours);
  delay(100);


}




