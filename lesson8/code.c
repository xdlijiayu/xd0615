
const int ledPin =  LED_BUILTIN;// ��UNO��Ĭ��#define LED_BUILTIN 13�������൱��ledPin=13 
int ledState = LOW;             // ����led��״̬ 


unsigned long previousMillis = 0; //��ʾ��ǰ�ĺ�����       


const long interval = 1000;           

void setup() {

  pinMode(ledPin, OUTPUT);//����13����ΪOUTPUT 
}

void loop() {
  
  unsigned long currentMillis = millis();//����millis()���Է���Arduino�忪ʼ���е�ǰ����ʱ�ĺ�����
  

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


    digitalWrite(ledPin, ledState);//ÿ�� 1S��interval)���Ƶ�״̬�ͻ�ı�һ�� 
  }
}
     
