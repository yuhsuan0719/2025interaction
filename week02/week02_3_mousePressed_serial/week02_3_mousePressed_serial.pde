//week02_3_mousePressed_serial
import processing.serial.*; // 第1行 使用USB 的 serial
Serial myPort;//第2行 宣告USB 的 Serial 變數 myPort
void mousePressed(){
  myPort.write(' ');//第3行 mouse按下時,就送' '出去
}

void setup(){
  size(400,400);
  myPort = new Serial(this,"COM4", 9600);// 第3行 準備好
}//剛剛你在Arduino裡設定COM多少 就多少
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
