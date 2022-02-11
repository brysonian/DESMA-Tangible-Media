const int PIN = 11;

int val = 0;

void setup() {
  pinMode(PIN, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  val = digitalRead(PIN);
  if (val == LOW) {
    Serial.write(true);
  } else {
    Serial.write(false);
  }
  delay(2);
}
