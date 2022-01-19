#include "notes.h"

const int PIEZO_PIN = 9;
int notes[][2] = {
  { NOTE_A6,  500 },
  { NOTE_A6,  500 },
  { NOTE_B6,  500 },
  { NOTE_G6,  500 },
  { NOTE_A6,  500 },
  { NOTE_B6,  200 },
  { NOTE_C7,  300 },
  { NOTE_B6,  500 },
  { NOTE_G6,  500 },
  { NOTE_A6,  500 },
  { NOTE_B6,  200 },
  { NOTE_C7,  300 },
  { NOTE_B6,  500 },
  { NOTE_A6,  500 },
  { NOTE_G6,  500 },
  { NOTE_A6,  500 },
};

int noteCount = 16;

void setup() {

}

void loop() {
  for (int i = 0; i < noteCount ; i++) {
    tone(PIEZO_PIN, notes[i][0]);
    delay(notes[i][1]);
  }
  noTone(PIEZO_PIN);
}
