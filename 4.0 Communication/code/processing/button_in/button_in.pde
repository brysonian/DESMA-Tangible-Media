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
  background(255);
  if (val == 1) {
    fill(255, 0, 0);
  } else {
    fill(0);
  }
  rect(50, 50, 100, 100);
}

void serialEvent(Serial port) {
  val = port.read();
  println(val);
}
  
