const int MOTOR_PIN = 5;

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  digitalWrite(MOTOR_PIN, HIGH);
  delay(1000);
  
  digitalWrite(MOTOR_PIN, LOW);
  delay(1000);
}
