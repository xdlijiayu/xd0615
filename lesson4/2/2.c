#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define S1 8
#define S2 9
#define S3 10
#define S4 11

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
  Serial.begin(9600);
}
byte income[4]={0};
int i;
void loop()
{
   if(Serial.available()>0)
   for(i=0;i<4;i++)
   {
     income[i]=Serial.read();
     income[i]-='0';
   }
  
    digitalWrite(S1,LOW);
    digitalWrite(2,income[0]&0x1);
    digitalWrite(3,(income[0]>>1)&0x1);
    digitalWrite(4,(income[0]>>2)&0x1);
    digitalWrite(5,(income[0]>>3)&0x1);
    digitalWrite(S1,HIGH);

    digitalWrite(S2,LOW);
    digitalWrite(2,income[1]&0x1);
    digitalWrite(3,(income[1]>>1)&0x1);
    digitalWrite(4,(income[1]>>2)&0x1);
    digitalWrite(5,(income[1]>>3)&0x1);
    digitalWrite(S2,HIGH);

    digitalWrite(S3,LOW);
    digitalWrite(2,income[2]&0x1);
    digitalWrite(3,(income[2]>>1)&0x1);
    digitalWrite(4,(income[2]>>2)&0x1);
    digitalWrite(5,(income[2]>>3)&0x1);
    digitalWrite(S3,HIGH);

    digitalWrite(S4,LOW);
    digitalWrite(2,income[3]&0x1);
    digitalWrite(3,(income[3]>>1)&0x1);
    digitalWrite(4,(income[3]>>2)&0x1);
    digitalWrite(5,(income[3]>>3)&0x1);
    digitalWrite(S4,HIGH);

  delay(100);
  
}
