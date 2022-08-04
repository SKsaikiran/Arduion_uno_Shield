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
  int temp=analogRead(A4);
  Serial.println(temp);
  if(temp>90)
  {
    digitalWrite(red,HIGH);
  }
  else
  {
  digitalWrite(red,LOW);
  }
}
