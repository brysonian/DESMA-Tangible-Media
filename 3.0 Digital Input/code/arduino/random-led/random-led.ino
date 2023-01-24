const int BUTTON_PIN = 9;
const int LED_PIN_1 = 12;
const int LED_PIN_2 = 13;

// this sets how long to show the result after a press
const int HOW_LONG_TO_WAIT_AFTER_PRESS = 500;


void setup() {
  randomSeed(analogRead(0));  // seed the number with a value from an analog input that isn't connected

  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  int val = digitalRead(BUTTON_PIN);

  if (val == LOW) {
    long rnd = random(100);
    if (rnd < 50) {
      digitalWrite(LED_PIN_1, HIGH);
    } else {
      digitalWrite(LED_PIN_2, HIGH);
    }
    delay(HOW_LONG_TO_WAIT_AFTER_PRESS);

  } else {
    digitalWrite(LED_PIN_1, LOW);
    digitalWrite(LED_PIN_2, LOW);
  }
}