void setup()
{
  for(int i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i=0;i<10;i++)
  {  
       digitalWrite(i, HIGH);
    digitalWrite((9-i), HIGH);
       delay(500); 
       digitalWrite(i, LOW);
    digitalWrite((9-i), LOW);
       delay(500); 
  }
 for(int i=0;i<10;i++)
  {
    digitalWrite(i,HIGH);
    delay(750);
    digitalWrite(i,LOW);
    delay(500);
  }
    for(int i=9;i>=0;i--)
  {
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
  }
   for(int i=0;i<10;i++)
  {
    digitalWrite(i,HIGH);
   }
  delay(750);
    for(int i=0;i<10;i++)
  {
    digitalWrite(i,LOW);
   }
  delay(250);
} 