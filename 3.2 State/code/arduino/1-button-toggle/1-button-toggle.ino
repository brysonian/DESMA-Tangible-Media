const int BUTTON_PIN = 9;
const int LED_PIN = 13;

int oldVal = 0;
int state = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  int val = digitalRead(BUTTON_PIN); 
  if (val == LOW && oldVal == HIGH) {
    state = 1 - state;
    delay(10);
  }
  oldVal = val;
  
  if (state == 1) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
