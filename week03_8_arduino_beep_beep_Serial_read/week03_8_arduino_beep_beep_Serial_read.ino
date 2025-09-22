//week03_8_arduino_beep_beep_Serial_read
void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}
int beep = 1;//一開始會beep逼逼叫
void serialEvent(){
  while (Serial.available()) {
    char now = Serial.read();
    if(now==' ') beep = 0;
    if(now=='b') beep = 1;
  }
}
void loop() {
  if(beep==1){
    tone(8,800,200);
    delay(1000);
  }
}
