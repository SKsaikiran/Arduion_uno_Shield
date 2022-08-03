const int red=11;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int hall=analogRead(A3);
  Serial.println(hall);
  if(hall<500)
  {
   digitalWrite(red,HIGH);
  }
  else
  {
   digitalWrite(red,LOW);
  }
}
