#include "notes.h"

const int PIEZO_PIN = 9;
int notes[] = {
  NOTE_A6,
  NOTE_A6,
  NOTE_B6,
  NOTE_G6,
  NOTE_A6,
  NOTE_B6,
  NOTE_C7,
  NOTE_B6,
  NOTE_G6,
  NOTE_A6,
  NOTE_B6,
  NOTE_C7,
  NOTE_B6,
  NOTE_A6,
  NOTE_G6,
  NOTE_A6
};
int noteCount = 16;

void setup() {
  pinMode(PIEZO_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < noteCount ; i++) {
    tone(PIEZO_PIN, notes[i]);
    delay(500);
  }
  noTone(PIEZO_PIN);
}
