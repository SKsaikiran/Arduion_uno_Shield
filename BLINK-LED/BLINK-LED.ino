const int blue=9;
int count=1;
void setup()
{
  pinMode(blue,OUTPUT);
}
void loop()
{
  while(count<5)
 {
    digitalWrite(blue,HIGH);
    delay(1000);
    digitalWrite(blue,LOW);
    delay(1000);
    count++;
  }
 
}
