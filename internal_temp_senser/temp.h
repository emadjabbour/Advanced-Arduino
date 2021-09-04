double GetTemp(void)
{
  unsigned int wADC;
  double t;


  ADMUX = (1<<(REFS1) | 1<<(REFS0) |1<<(MUX3));
  ADCSRA |= 1<<(ADEN); 

  delay(20);           

  ADCSRA |= 1<<(ADSC);  

  while (bit_is_set(ADCSRA,ADSC));

  wADC = ADCW;

  t = (wADC - 317 ) / 1.22;

  return (t);
}
