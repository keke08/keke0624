int pin = 2;//定义引脚为D2
unsigned long duration;   //定义duration变量为无符号长整数型变量


void setup() {
  Serial.begin(9600);    //串口波特率为9600
  pinMode(pin,INPUT);     //设置引脚为输入模式
  
}

void loop() {
  duration = pulseIn(pin,HIGH,60000000);     //读取引脚上的高电平脉冲，最大脉冲时间间隔为60秒，并且把结果赋值给duration变量
  Serial.println(duration);    //通过串口输出duration变量
}
