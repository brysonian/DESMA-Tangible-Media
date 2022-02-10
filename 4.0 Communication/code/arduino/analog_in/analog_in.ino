const int LED = 11;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  byte input;

  if (Serial.available()) {
    input = Serial.read();
    analogWrite(LED, input);
  }
}
