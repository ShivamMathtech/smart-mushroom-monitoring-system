#include <HTTPClient.h>
#include <WiFi.h>
#include "../include/secrets.h"

void sendToCloud(float temp, float hum, int soil, int light) {

    if(WiFi.status() == WL_CONNECTED) {

        HTTPClient http;

        http.begin(SERVER_URL);

        http.addHeader("Content-Type", "application/json");

        String json =
        "{"
        "\"temperature\":" + String(temp) + ","
        "\"humidity\":" + String(hum) + ","
        "\"soil\":" + String(soil) + ","
        "\"light\":" + String(light) +
        "}";

        http.POST(json);

        http.end();
    }
}