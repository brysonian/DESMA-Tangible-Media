const int BUTTON_PIN = 9;
const int LED_PIN_1 = 12;
const int LED_PIN_2 = 13;

int lastVal = HIGH;

void setup() {
  randomSeed(analogRead(0));  // seed the number with a value from an analog input that isn't connected

  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  int val = digitalRead(BUTTON_PIN);
  if (val == LOW && lastVal == HIGH) {
    long rnd = random(100);
    if (rnd < 50) {
      digitalWrite(LED_PIN_1, HIGH);
    } else {
      digitalWrite(LED_PIN_2, HIGH);
    }
  } else if (val == HIGH) {
    digitalWrite(LED_PIN_1, LOW);
    digitalWrite(LED_PIN_2, LOW);

  }
  lastVal = val;
}