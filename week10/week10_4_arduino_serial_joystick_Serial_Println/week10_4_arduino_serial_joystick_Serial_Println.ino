//week10_4_arduino_serial_joystick_Serial_Println
//修改自 week10_3_arduino_analogRead_A3
//把joystick 的 y 的線 經由麵包板幫忙 接到maker uno 另一邊的A3
//(不能接其他的 因為要接有~ 小蟲符號 代表aralog訊號)
void setup() {
  Serial.begin(9600);//開啟usb傳輸
  pinMode(2, INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {//一秒鐘 會跑1000Hz 太快了 要慢一點點
  delay(100);//慢一點 避免Processing來不急處理
  int now = analogRead(A3);
  Serial.println(now);
  //想利用 Serial Monitor

  if(now > 800){ //變高
    tone(8,523,100);//發出 523 的 do
    delay(100);
    tone(8,784,100);//發出784 的 so
    delay(200);//等久一點
  }else if( now < 200){//變低
    tone(8,784,100);//發出784的so
    delay(100);
    tone(8,523,100);//發出523的do
    delay(200);
  }

}
