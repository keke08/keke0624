PImage norm;

PImage warn ;

import processing.serial.*;

int p_r;
 
Serial myPort;



void setup() {

  size(500, 500);
  norm = loadImage("work-hard.jpg");
  warn = loadImage("Warn.jpg");
  background(255);

  myPort = new Serial(this, "COM3", 9600);
}



void draw() {


  p_r=myPort.read();

  println(p_r);
  

  if (p_r == 49) {            //——“1”
    background(norm);
  }
else{   
  background(warn);
}
}
