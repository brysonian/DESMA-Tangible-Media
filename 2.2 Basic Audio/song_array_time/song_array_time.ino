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

int timing[] = {
  500,
  500,
  500,
  500,
  500,
  200,
  300,
  500,
  500,
  500,
  200,
  300,
  500,
  500,
  500,
  500,
};

int noteCount = 16;

void setup() {

}

void loop() {
  for (int i = 0; i < noteCount ; i++) {
    tone(PIEZO_PIN, notes[i]);
    delay(timing[i]);
  }
  noTone(PIEZO_PIN);
}
