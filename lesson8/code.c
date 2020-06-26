
const int ledPin =  LED_BUILTIN;// 在UNO上默认#define LED_BUILTIN 13，所以相当于ledPin=13 
int ledState = LOW;             // 控制led的状态 


unsigned long previousMillis = 0; //表示当前的毫秒数       


const long interval = 1000;           

void setup() {

  pinMode(ledPin, OUTPUT);//设置13引脚为OUTPUT 
}

void loop() {
  
  unsigned long currentMillis = millis();//函数millis()可以返回Arduino板开始运行当前程序时的毫秒数
  

  if (currentMillis - previousMillis >= interval) {
    
    previousMillis = currentMillis;
    if (ledState == LOW) 
	{
      ledState = HIGH;
    } 
	else 
	{
      ledState = LOW;
    }


    digitalWrite(ledPin, ledState);//每过 1S（interval)，灯的状态就会改变一次 
  }
}
     
