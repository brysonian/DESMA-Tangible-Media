import processing.serial.*;

Serial port;
int val = 0;

void setup() {
  size(200, 200);
  noStroke();

  printArray(Serial.list());
  String portName = Serial.list()[2];
  port = new Serial(this, portName, 9600);
}

void draw() {
  background(val);
}

void serialEvent(Serial port) {
  val = port.read();
  println(val);
}
  