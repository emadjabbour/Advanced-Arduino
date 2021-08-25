#include<avr/interrupt.h>

int EX = 0;

int main () {

  DDRB |= 1 << 5;
  
  TCCR0A |= 1 << WGM01;
  
  OCR0A |= 61;
  
  TIMSK0 |= 1 << OCIE0A;
  
  sei();
  
  TCCR0B = 1 << CS02 | 1 << CS00;

  while (1) {


  }

}

ISR(TIMER0_COMPA_vect) {
  EX++;
  if (EX > 256) {
    PORTB ^= 1 << 5;
    EX = 0;
  }

}

