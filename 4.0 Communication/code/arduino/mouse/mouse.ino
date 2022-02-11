#include "Mouse.h"

const int SENSOR_PIN = A1;
int lastVal = 0;

void setup() {
  // initialize control as a mouse
  Mouse.begin();
}

void loop() {
  int val = analogRead(SENSOR_PIN);
  Mouse.move(lastVal - val, 0);
  lastVal = val;
} 
