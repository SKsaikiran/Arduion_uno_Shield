#include "DHT.h"
#define DHTPIN 4// Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE); //DHT parameter to Initialize DHT sensor.
const int Led=3;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Led,OUTPUT);
  pinMode(2,OUTPUT);  
  digitalWrite(2,HIGH);
  dht.begin(); //  Initialize the Serial Communication and the DHT Sensor.
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int Smoke=analogRead(A0);
  Serial.print("smoke value = ");
  Serial.print(Smoke);
  Serial.print(".");
  Serial.println(" ");
  if(Smoke>150)
  {
    digitalWrite(Led,HIGH);
    delay(1000);
  }
  else
  {
  digitalWrite(Led,LOW);
  }
  delay(500);
  float h = dht.readHumidity();  // read humidity
   float t = dht.readTemperature(); // read temperature
   float f = dht.readTemperature(true); //Reading temperature as Fahrenheit (isFahrenheit = true)
  if (isnan(h) || isnan(t) || isnan(f)) //Checking if any reads failed and exit early (to try again).
  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
 }
 float hif = dht.computeHeatIndex(f, h); //Computing heat index in Fahrenheit (the default)
 float hic = dht.computeHeatIndex(t, h, false); //Computing heat index in Celsius (isFahreheit = false)
 Serial.print(F(" Humidity: "));
Serial.print(h);
Serial.print(F("%  Temperature: "));
Serial.print(t);
Serial.print(F("°C "));
Serial.print("||");
Serial.print(f);
Serial.print(F("°F  Heat index: "));
Serial.print(hic);
Serial.print(F("°C "));
Serial.print("||");
Serial.print(hif);
Serial.println(F("°F"));
delay(2000);
}
