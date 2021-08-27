unsigned int *DPB = (unsigned int*)(0x24);
unsigned int *P13 = (unsigned int*)(0x25);


void setup() {
*DPB = 1<<5;
}

void loop() {
*P13 ^= 1<<5;
delay(1000);

}
