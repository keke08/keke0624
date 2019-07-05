const int EchoPin = 3;

const int TrigPin = 2;

float cm;

int r;

int i = 500;

void setup() {

  Serial.begin(9600);



  pinMode(13, OUTPUT);

  pinMode(TrigPin, OUTPUT);

  pinMode(EchoPin, INPUT);

}



void loop() {
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);

  
  cm = pulseIn(EchoPin, HIGH)/ 58.0;
  cm = (int(cm*100))/100;


  if (cm <= 20) {
    r = 1;

    noTone(13);  //在十三号端口输出频率




  }

  else {
    r = 0;                 //1对应49

    tone(13, i);


  }
  Serial.print(r);


}
