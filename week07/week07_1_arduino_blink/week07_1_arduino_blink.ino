//week07_1_arduino_blink
//安裝好後 select board 要選剛剛裝置管理員的那個usb-serial
//com3 or com4 or com5 選好後 boards打字 arduino uno 選他
void setup() {
  pinMode(13,OUTPUT); // 把第13隻腳 能送出資料OUTPUT
}

void loop() {
  digitalWrite(13, HIGH); //發亮
  delay(500);
  digitalWrite(13, LOW); //發亮
  delay(500);
}
