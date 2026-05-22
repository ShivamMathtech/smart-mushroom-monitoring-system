#ifndef SENSORS_H
#define SENSORS_H

void initSensors();

float getTemperature();
float getHumidity();
int getSoilMoisture();
int getLightLevel();

#endif