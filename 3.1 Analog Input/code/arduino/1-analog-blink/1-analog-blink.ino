const int POT_PIN = A0;
const int LED_PIN = 13;


void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int val = analogRead(POT_PIN);
  digitalWrite(LED_PIN, HIGH);
  delay(val);
  digitalWrite(LED_PIN, LOW);
  delay(val);
}
