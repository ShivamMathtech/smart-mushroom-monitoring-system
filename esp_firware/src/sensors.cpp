#include "sensors.h"
#include "../include/config.h"
#include <DHT.h>

DHT dht(DHTPIN, DHTTYPE);

void initSensors() {
    dht.begin();
}

float getTemperature() {
    return dht.readTemperature();
}

float getHumidity() {
    return dht.readHumidity();
}

int getSoilMoisture() {
    return analogRead(SOIL_SENSOR);
}

int getLightLevel() {
    return analogRead(LDR_SENSOR);
}