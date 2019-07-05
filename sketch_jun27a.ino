int redPin = 11;
int greenPin = 10;
int bluePin = 9;


void setup()
{
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  
}

void loop(){
  setColor(227,172,18);//红色
  delay(5000);
  
  setColor(26,19,19);
  delay(5000);
}



void setColor(int red,int green, int blue){
  analogWrite(redPin,255-red);
  analogWrite(greenPin,255-green);
  analogWrite(bluePin,255-blue); 

  
}
