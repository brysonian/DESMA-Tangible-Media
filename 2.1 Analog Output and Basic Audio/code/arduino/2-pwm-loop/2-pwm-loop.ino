const int LED = 11;
int brightness = 0;
int direction = 1;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, brightness);
  
  brightness += (5 * direction);
  if (brightness >= 255) {
    direction = -1;
  } else if (brightness <= 0) {
    direction = 1;
    delay(10);
  }
}