const int SENSOR_PIN = A0;
const int LED_PIN = 11;

int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(SENSOR_PIN);
  val = map(val, 140, 610, 0, 255);
  analogWrite(LED_PIN, val);
  Serial.println(val);
  delay(2);
}
