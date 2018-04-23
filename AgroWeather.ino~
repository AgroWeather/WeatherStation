#include "DHT.h" 
#include <Arduino.h>
#define DHTPIN D1
#define DHTTYPE DHT11
#define les D0
int LED = A0;


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode (LED, OUTPUT);
  pinMode (les, OUTPUT);
}

void loop() {

  for (int i = 0; i < 255; ++i){
      analogWrite(LED,i);
      delay(10);
    }
    digitalWrite(les, LOW);
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  Serial.print("Temperature: ");Serial.print((int)t);Serial.println("º");
  Serial.print("Humidity: ");Serial.print((int)h);Serial.println("%");
    for (int i = 255; i > 0 ; --i){
      analogWrite(LED,i);
      delay(10);
    }
  digitalWrite(les,HIGH);
  
  
  /*Serial.println("prende led");
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  Serial.println("apaga led");*/
}
