#include <WiFi.h>
#include "../include/secrets.h"

void connectWiFi() {

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    while(WiFi.status() != WL_CONNECTED) {
        delay(1000);
    }
}