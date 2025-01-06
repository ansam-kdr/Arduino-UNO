#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN,DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();

}

void loop() {
 delay(2000);
 float tempC = dht.readTemperature();
 float tempf = dht.readTemperature(true);
 float humidity = dht.readHumidity();

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print("%/L");
Serial.print("Temperature C ");
Serial.print(tempC);
Serial.print("C");
Serial.print("Temperature F ");
Serial.print(tempf);
Serial.print("F");
}
