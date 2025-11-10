//week_5_arduino_serial_joystick_to_processing
//修改自week10_4_arduino_serial_monitor_joystick_Serial_Println
//
void setup() {
  Serial.begin(9600);//開啟usb傳輸
  pinMode(2, INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {//一秒鐘 會跑1000Hz 太快了 要慢一點點
  delay(30);//慢一點 避免Processing來不急處理
  int now = analogRead(A3) / 4;//小心 要除以4 才能順利由serial.write()送出
  Serial.write(now);//把0~255的數值送出去
  if(now > 200) tone(8, 784, 100);
  if(now < 50) tone(8, 523, 100);
}
