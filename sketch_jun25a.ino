int n=0;



void setup() {
  pinMode(4, INPUT); //将4号数字口设置为输入状态13号数字口设置为输出状态
  pinMode(6, OUTPUT);
  pinMode(10, INPUT);
}


void loop()
{
  int up = digitalRead(4); //读取4号数字口的状态
  int down =digitalRead(10);//读取10号口的状态
  if (up == HIGH)//判断4号口是否为高电压
  
  {
    n=n+5;           //每次累加值为5
    if(n>=255)(
      n=255);          //限定最大值为255
    analogWrite(6,n);       //使用PWM控制6号口输出，变量n的取值范围是0~255
    delay(300);
    
  } 
  if(down==HIGH)                 //判断十号口目前是否为高电压
  {
    n=n-5;         //减少亮度，每次减少值为5
    if(n<=0){
      n=0;
    }
    analogWrite(6,n);
    delay(300);
       
  }
}
