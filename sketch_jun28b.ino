int redPin = 10;
int greenPin = 11;
int bluePin = 9;


int c =0;


void setup() {
  Serial.begin(9600);     //比特率设置为一致方可通信
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  
}

void loop() {
  if(Serial.available());
  c = Serial.read();
  if(c == 97)   //a 的ASC||码值为97
  {
    digitalWrite(redPin,HIGH);
    delay(500);
    digitalWrite(redPin,LOW);
    
  }
  if(c == 98)    //b的ASC||码值为98

  {
    digitalWrite(greenPin,HIGH);
    delay(500);
    digitalWrite(greenPin,LOW);
    
  }

  if(c == 99)
  {
    digitalWrite(bluePin,HIGH);
    delay(500);
    digitalWrite(bluePin,LOW);
    
  }

}
