#ifndef RELAY_CONTROL_H
#define RELAY_CONTROL_H

void initRelays();

void controlHumidity(float humidity);
void controlTemperature(float temp);
void controlLight(int light);

#endif