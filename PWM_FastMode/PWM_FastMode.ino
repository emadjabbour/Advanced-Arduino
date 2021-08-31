void setup() {
pinMode(3,1);
TCCR2A = 1 << WGM21 | 1<< WGM20;
TCCR2B = 1;
Serial.begin(115200);
Serial.println(TCCR2A,BIN);
}

void loop() {
analogWrite(3,127);


}
