#include "DHT.h" 
#define DHTPIN D1
#define DHTTYPE DHT11
#define LED A1

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode (LED, OUTPUT);
}

void loop() {

  digitalWrite(les, LOW);
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  Serial.print("Temperature: ");Serial.print((int)t);Serial.println("º");
  Serial.print("Humidity: ");Serial.print((int)h);Serial.println("%");
  delay(5000);
  digitalWrite(les,HIGH);
}
