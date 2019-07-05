PImage img;


void setup() {
  size(600, 600);
  background(255);
  //img = createImage(width, height, RGB);
  initiate();
}


void initiate() {
  img = createImage(width, height, RGB);

  img.loadPixels();
  //for (int i = 0; i < img.pixels.length; i ++) {
  //img.pixels[i] = color(random(255),random(255),random(255));
  //}

  for (int i = 0; i <width; i++) {
    for (int j = 0; j < height; j ++) {
      if (i <  width/3 &j < height/3 ) {
        img.pixels[i+j*width] = color(0);}

        if (i > width*2/3 &j < height/3 ) {
          img.pixels[i+j*width] = color(0);}
          if (i <width*2/3&i >  width/3 &j > height/3&j<height*2/3 ) {
            img.pixels[i+j*width] = color(0);
          }
          if(i < width/3 & j>height*2/3 ){
            img.pixels[i+j*width] = color(0);
          }
          if(i>width*2/3&j>height*2/3){
            img.pixels[i+j*width] = color(0);}
      img.updatePixels();
    }
  }
}
void draw() {
  background(255);

  image(img, 0, 0);
}
