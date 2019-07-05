PFont myfont1;
PFont myfont2;

String str = "this is a ...";

void setup(){
  size(600,600);
  myfont1 = createFont("Arial",24);
  myfont2 = createFont("微软雅黑",24);
}


void draw(){
  background(255);
  fill(0);
  textAlign(CENTER,CENTER);
  textFont(myfont1);
  textSize(60);
  text("this is a...",width/2,300);
  textFont(myfont2);
  textSize(12);
  text("这是一个",width/2,360);
  stroke(255,0,0);
  point(50,300);
}
