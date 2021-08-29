#include<avr/interrupt.h>
#include <avr/io.h>


uint32_t  mills = 0;
uint8_t  sec = 0;
uint32_t mins = 0 ;
uint32_t hours = 0 ;


void setup() {
  Serial.begin(115200);
  TCCR0B = 0;
  TCCR0A |= 1 << WGM01;
  OCR0A |= 250;
  TIMSK0 |= 1 << OCIE0A;
  sei();
  TCCR0B = 1 <<  CS01 | 1 << CS00;
}
void loop() {
  Serial.println(mills);
  Serial.println(sec);
    Serial.println(mins);
  Serial.println(hours);
  delay(100);


}



ISR(TIMER0_COMPA_vect) {

  mills++;

  if (mills > 999) {
    mills = 0;
    sec++;
  }
  if (sec > 59) {
    sec = 0;
    mins++;
  }
  if (mins > 59) {
    mins = 0;
    hours++;
  }
}

