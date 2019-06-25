void setup() {
  pinMode(11, OUTPUT);

}

void loop() {
  for (int a = 0; a <= 255; a++) //循环语句，控制PWM亮度的增加
  {
    analogWrite(11, a);
    delay(8);          //当前亮度级别维持的时间，单位毫秒
  }
  for (int a = 255;a >= 0;a--) //循环语句，控制PWM亮度减少
  {
    analogWrite(11, a);
    delay(8);
  }
}
