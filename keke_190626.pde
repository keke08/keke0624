Ball theBall;


void setup(){
  size(600,600);
  PVector theBallloc = new PVector(width/2,height/2);
  float theBallDia = 50;
  float theBallDia2 = 70;
  theBall = new Ball(theBallloc,theBallDia);
  theBall = new Ball(theBallloc,theBallDia2);
}


void draw(){
  background(0);
  fill(#55D630);
  theBall.show();


}
