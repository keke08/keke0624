void setup(){
  pinMode(4,INPUT);//将4号数字口设置为输入状态13号数字口设置为输出状态
  pinMode(13,OUTPUT);
}

void loop()
{
  int n=digitalRead(4);                     //创建一个变量n，将4号数字口的状态采集出来赋值给它
  if(n== HIGH)
  {
  delay(1000);
  digitalWrite(13,HIGH);
  delay(5000);
  digitalWrite(13,LOW);
}
}
