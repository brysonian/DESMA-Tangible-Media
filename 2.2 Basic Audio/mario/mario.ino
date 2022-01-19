const int NOTE_G6 = 1568;
const int NOTE_C7 = 2093;
const int NOTE_E7 = 2637;
const int NOTE_G7 = 3136;

const int PIEZO_PIN = 9;

int noteDuration = 50;
int rest = 160;

void setup() {
  pinMode(PIEZO_PIN, OUTPUT);
}

void loop() {
  tone(PIEZO_PIN, NOTE_E7, noteDuration);
  delay(rest);

  tone(PIEZO_PIN, NOTE_E7, noteDuration);
  delay(rest);

  delay(rest);

  tone(PIEZO_PIN, NOTE_E7, noteDuration);
  delay(rest);

  delay(rest);

  tone(PIEZO_PIN, NOTE_C7, noteDuration);
  delay(rest);

  tone(PIEZO_PIN, NOTE_E7, noteDuration);
  delay(rest);

  delay(rest);

  tone(PIEZO_PIN, NOTE_G7, noteDuration);
  delay(rest);

  delay(rest);
  delay(rest);
  delay(rest);

  tone(PIEZO_PIN, NOTE_G6, noteDuration);
  delay(rest);

  delay(500);
}
