const int PIN = 11;
const int LED = 13;

void setup() {
  pinMode(PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(PIN);
  if (val == LOW) {
    Serial.println("press");
    digitalWrite(LED, HIGH);
  } else {
    Serial.println("release");
    digitalWrite(LED, LOW);
  }
  delay(20);
}
