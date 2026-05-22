#include "relay_control.h"
#include "../include/config.h"

void initRelays() {

    pinMode(RELAY_HUMIDIFIER, OUTPUT);
    pinMode(RELAY_FAN, OUTPUT);
    pinMode(RELAY_LIGHT, OUTPUT);

    digitalWrite(RELAY_HUMIDIFIER, HIGH);
    digitalWrite(RELAY_FAN, HIGH);
    digitalWrite(RELAY_LIGHT, HIGH);
}

void controlHumidity(float humidity) {

    if(humidity < 85) {
        digitalWrite(RELAY_HUMIDIFIER, LOW);
    } else {
        digitalWrite(RELAY_HUMIDIFIER, HIGH);
    }
}

void controlTemperature(float temp) {

    if(temp > 28) {
        digitalWrite(RELAY_FAN, LOW);
    } else {
        digitalWrite(RELAY_FAN, HIGH);
    }
}

void controlLight(int light) {

    if(light < 1000) {
        digitalWrite(RELAY_LIGHT, LOW);
    } else {
        digitalWrite(RELAY_LIGHT, HIGH);
    }
}