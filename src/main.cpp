#include <Arduino.h>

const uint8_t LED = 13;

void setup() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}