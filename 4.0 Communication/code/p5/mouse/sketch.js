let bgColor = 0;
let x = 0;

function setup() {
  createCanvas(windowWidth, windowHeight);
  x = windowWidth / 2;
  background(255);
}

function draw() {
  background(255, 10);
  stroke(0);
  line(x, 0, x, height);
}

function mouseMoved() {
  x = mouseX;
}