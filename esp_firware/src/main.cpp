#include <Arduino.h>
#include "sensors.h"
#include "relay_control.h"
#include "wifi_manager.h"
#include "cloud.h"

void setup() {
    Serial.begin(115200);

    initSensors();
    initRelays();
    connectWiFi();
}

void loop() {

    float temp = getTemperature();
    float hum = getHumidity();
    int soil = getSoilMoisture();
    int light = getLightLevel();

    Serial.println(temp);
    Serial.println(hum);

    controlHumidity(hum);
    controlTemperature(temp);
    controlLight(light);

    sendToCloud(temp, hum, soil, light);

    delay(5000);
}