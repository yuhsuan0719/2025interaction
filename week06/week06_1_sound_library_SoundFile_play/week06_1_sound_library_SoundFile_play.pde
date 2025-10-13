//week06_1_sound_library_SoundFile-play
//File-Preference 字型改大
//Sketch-Library-ManageLibraries,找Sound安裝他
//File-Examples-Libraries核心函式庫Sound-soundfile-SimplePlayback
//參考這個範例有聲音、有相關的函式可學習參考
import processing.sound.*;//使用聲音的外掛模組
SoundFile sound;//宣告SoundFile物件變數
void setup(){
  size(500,400);//視窗大小
  sound = new SoundFile(this,"music.mp3");
  //老師把music.mp3傳給你 你把他拉到程式裡
  sound.play();
}
void draw(){
  
}
