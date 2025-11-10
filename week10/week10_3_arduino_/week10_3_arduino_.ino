//week10_3_arduino_analogRead_A3
//把joystick 的 y 的線 經由麵包板幫忙 接到maker uno 另一邊的A3
//(不能接其他的 因為要接有~ 小蟲符號 代表aralog訊號)
void setup() {
  pinMode(2, INPUT_PULLUP);
  //pinMode(3,INPUT);//有小蟲符號 代表analog訊號
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {
  int now = analogRead(A3);
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
