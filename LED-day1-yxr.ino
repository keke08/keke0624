void setup() {
  for(int i=2;i<=10;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  
  for(int x=2;x<=10;x++)
  {digitalWrite(x,HIGH);
  }
  delay(3000);
  for(int x=2;x<=10;x++)
 { digitalWrite(x,LOW);}
  delay(3000);
  for(int x=2;x<=10;x++)
  {digitalWrite(x,HIGH);
  delay(1000);}
  for(int x=2;x<=10;x++)
  {digitalWrite(x,LOW);
  delay(1000);}

} 
