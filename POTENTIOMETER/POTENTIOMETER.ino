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
  int poten=analogRead(A2);
  Serial.println(poten);
  analogWrite(red,poten); 
}
