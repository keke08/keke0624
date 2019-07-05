int myPin = 10;    //对应“28-C"
int c = 0;
void setup() {
  Serial.begin(9600);
  pinMode(myPin, OUTPUT);

}

void loop() {
  if (Serial.available());
  c = Serial.read();
  if (c == 97)
  {
    digitalWrite(myPin, HIGH);
    delay(500);
    digitalWrite(myPin, LOW);
  }
}
