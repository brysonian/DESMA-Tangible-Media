import processing.serial.*;

Serial port;


void setup() {
  size(256, 200);
  printArray(Serial.list());
  String portName = Serial.list()[2];
  port = new Serial(this, portName, 9600);
}

void draw() {
  for (int i=0; i<256; i++) {
    stroke(i);
    line(i, 0, i, height);
  }
  port.write(mouseX);
}