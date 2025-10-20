//week07_3_arduino_blink_blink_blink_blink
//修改自 week07_2_arduino_blink 只是再多t插2隻LED
//使用麵包板 每5洞是 一板 所以用GND接之後
//小心 有一隻腳要接地GND 另一隻腳要接13
//小心 有一隻腳要接地GND 另一隻腳要接12
//小心 有一隻腳要接地GND 另一隻腳要接11
//小心 有一隻腳要接地GND 另一隻腳要接10
void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);// 把第12隻腳 能送出資料OUTPUT
  pinMode(13,OUTPUT); // 把第13隻腳 能送出資料OUTPUT
}

void loop() {
  for(int i=10; i<=13; i++){
    digitalWrite(13, LOW);//暗掉
    digitalWrite(i-1, LOW); //發亮
    digitalWrite(i, HIGH);//發亮
    delay(500);
  }
}
