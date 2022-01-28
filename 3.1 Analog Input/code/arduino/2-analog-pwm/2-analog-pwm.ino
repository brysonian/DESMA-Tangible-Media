const int POT_PIN = A0;
const int LED_PIN = 9;


void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int val = analogRead(POT_PIN);
  // analogRead gives a value from 0-1024
  // but analogWrite can only understand values from 0-255
  // so we need to divide the larger number by 4  
  analogWrite(LED_PIN, val / 4);
  delay(10);
}
