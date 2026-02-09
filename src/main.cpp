#include <Arduino.h>
int ldrPin = A0;
// LDR connected to analog pin A0
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
}

void loop() {
// write your code here
    int ldrValue = analogRead(ldrPin);
    int lightPercent = map(ldrValue, 0, 1023, 100, 0);
    Serial.print("LDR VALUE: ");
    Serial.println(ldrValue);
    Serial.print("% LIGHT: ");
    Serial.println(lightPercent);
    delay(300);

}