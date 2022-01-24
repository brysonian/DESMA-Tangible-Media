const int LED_PIN1 = 9;
const int LED_PIN2 = 10;

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN1, HIGH);
  delay(500);

  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, HIGH);
  delay(500);

  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN2, HIGH);
  delay(500);

  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, LOW);
  delay(500);
}
