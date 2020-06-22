#include <MsTimer2.h>
int tick = 0;
byte count='0';
byte count2;

void pushButton()
{
  count='0';
  printCount();
}

void printCount()
{
  count2=count-'0';
  digitalWrite(3,count2&0x1);
  digitalWrite(4,(count2>>1)&0x1);
  digitalWrite(5,(count2>>2)&0x1);
  digitalWrite(6,(count2>>3)&0x1);
  if(count!='9')
    count++;
  else 
    count='0';
}

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  attachInterrupt( digitalPinToInterrupt(2), pushButton, CHANGE);
  MsTimer2::set(1000,printCount);
  MsTimer2::start();
}
void loop()
{
  
}
  