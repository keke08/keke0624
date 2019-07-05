import processing.serial.*;
Serial port;
PImage img;


void setup() {
  port=new Serial(this, "COM3", 9600); //Arduino板的端口号
  img = loadImage("jimi.jpg");



  size(1024,768);
 
}

void draw() {
   background(img);
}
 

void mouseClicked() {
  if ((mouseX>=200)&(mouseX<=400)&(mouseY>=50)&(mouseY<=150))
  {
    println("red");
    port.write("a");
  }
}
