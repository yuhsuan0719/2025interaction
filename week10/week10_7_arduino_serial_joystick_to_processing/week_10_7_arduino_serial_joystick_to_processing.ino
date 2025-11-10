//week_10_7_arduino_serial_joystick_to_processing
//修改自week10_5_arduino_serial_joystick_to_processing
void setup() {
  Serial.begin(9600);//開啟usb傳輸
  pinMode(2, INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音
}

void loop() {//一秒鐘 會跑1000Hz 太快了 要慢一點點
  delay(30);//慢一點 避免Processing來不急處理
  int x = analogRead(A2);
  int y = analogRead(A3);//小心 要除以4 才能順利由serial.write()送出
  Serial.write(x/4);
  Serial.write(y/4);
  if(x>900) tone(8, 784, 100);
  if(x<100) tone(8, 523, 100);
  if(y>900) tone(8, 659, 100);
  if(y<100) tone(8, 500, 100);
}
