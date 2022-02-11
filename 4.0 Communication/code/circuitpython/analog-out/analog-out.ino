const int SENSOR_PIN = A1;

int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(SENSOR_PIN);
  Serial.write(val / 4);
  delay(2);
}
