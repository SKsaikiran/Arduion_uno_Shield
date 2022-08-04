const int relay=2;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(relay,OUTPUT);
   
  Serial.begin(115200);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int ldr=analogRead(A5);
  Serial.println(ldr);
  if(ldr<500)
  {
   digitalWrite(relay,HIGH);
    
  }
  digitalWrite(relay,LOW);
}
