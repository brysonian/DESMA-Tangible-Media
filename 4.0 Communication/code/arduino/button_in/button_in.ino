const int PIN = 10;

int val = 0;

void setup() {
  pinMode(PIN, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  val = digitalRead(PIN);
  if (val == LOW) {
    Serial.write(1);
  } else {
    Serial.write(0);
  }
  delay(2);
}
