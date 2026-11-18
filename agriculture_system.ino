
#include <DHT.h>

#define SOIL_PIN A0
#define DHT_PIN D2
#define RELAY_PIN D1

#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

int moistureThreshold = 500;

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);

  // Assumes an active-LOW relay.
  // Verify your relay module before using.
  digitalWrite(RELAY_PIN, HIGH);

  dht.begin();

  Serial.println("IoT Agriculture System Started");
}

void loop() {
  int soilValue = analogRead(SOIL_PIN);

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Soil Moisture: ");
  Serial.println(soilValue);

  if (!isnan(temperature) && !isnan(humidity)) {
    Serial.print("Temperature: ");
    Serial.println(temperature);

    Serial.print("Humidity: ");
    Serial.println(humidity);
  } else {
    Serial.println("DHT11 reading failed");
  }

  if (soilValue > moistureThreshold) {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Soil Dry - Irrigation ON");
  } else {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Soil Moist - Irrigation OFF");
  }

  delay(2000);
}
