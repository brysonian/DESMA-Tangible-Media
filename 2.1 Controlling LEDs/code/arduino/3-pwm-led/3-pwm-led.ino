const int LED_PIN = 11;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i += 5) {
    analogWrite(LED_PIN, i);
    delay(10);
  }

  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(LED_PIN, i);
    delay(10);
  }
}
