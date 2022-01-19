#include "notes.h"

const int PIEZO_PIN = 9;

void setup() {
  pinMode(PIEZO_PIN, OUTPUT);
}

void loop() {
  tone(PIEZO_PIN, NOTE_A6);
  delay(500);
  tone(PIEZO_PIN, NOTE_A6);
  delay(500);
  tone(PIEZO_PIN, NOTE_B6);
  delay(500);
  tone(PIEZO_PIN, NOTE_G6);
  delay(500);
  tone(PIEZO_PIN, NOTE_A6);
  delay(500);
  tone(PIEZO_PIN, NOTE_B6);
  delay(200);
  tone(PIEZO_PIN, NOTE_C7);
  delay(300);
  tone(PIEZO_PIN, NOTE_B6);
  delay(500);
  tone(PIEZO_PIN, NOTE_G6);
  delay(500);
  tone(PIEZO_PIN, NOTE_A6);
  delay(500);
  tone(PIEZO_PIN, NOTE_B6);
  delay(200);
  tone(PIEZO_PIN, NOTE_C7);
  delay(300);
  tone(PIEZO_PIN, NOTE_B6);
  delay(500);
  tone(PIEZO_PIN, NOTE_A6);
  delay(500);
  tone(PIEZO_PIN, NOTE_G6);
  delay(500);
  tone(PIEZO_PIN, NOTE_A6);
  delay(500);
}
