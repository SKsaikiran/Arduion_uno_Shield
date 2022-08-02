const int push=12;//Assigning GPIO pin number 12 to Push button
const int blue=3;//Assigning GPIO pin number 3 to LED
void setup() {
  // put your setup code here, to run once:
  pinMode(push,INPUT);
  pinMode(blue,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(push))
  {
    digitalWrite(blue,HIGH);
  }
  digitalWrite(blue,LOW);
}
