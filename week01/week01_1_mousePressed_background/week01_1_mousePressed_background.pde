//week01_1_mousePressed_background
void setup(){
  size(500,500);
}
void draw(){
//用mouse來互動
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
