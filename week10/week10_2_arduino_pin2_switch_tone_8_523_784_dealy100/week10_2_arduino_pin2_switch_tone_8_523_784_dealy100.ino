//week10_2_arduino_pin2_switch_tone_8_523_784_dealy100
void setup() {
  pinMode(2,INPUT_PULLUP);//拉高 變成5v 真的按下去 變ov(gnd接地)
  pinMode(8,OUTPUT);
}//pin 2 變成按鈕 可以high高(沒按)可以low低(按)

void loop() {
  if (digitalRead(2)==LOW){//如果pin2有按下去
    tone(8,523,100);//發出 523 的 do
    delay(100);
    tone(8,784,100);//發出784 的 so
    delay(100);
  }

}
