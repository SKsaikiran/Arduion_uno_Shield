const int buzzer=8;
int count=1;
void setup()
{
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  //while(count<3)
 //{
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
    delay(1000);
    //count++;
  //}
 
}
