#include "Keyboard.h"

const int BUTTON_PIN = 11;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // initialize control as a keyboard
  Keyboard.begin();
}

void loop() {
  int val = digitalRead(BUTTON_PIN);

  if (val == LOW) {
    Keyboard.print("x");
    delay(100);
  }
} 
