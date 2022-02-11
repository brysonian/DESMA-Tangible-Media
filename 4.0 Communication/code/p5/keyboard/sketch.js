let bgColor = 0;

function setup() {
  createCanvas(windowWidth, windowHeight);
}

function draw() {
  background(bgColor);
}

function keyPressed() {
  bgColor = color(random(0, 255), random(0, 255), random(0, 255));
}
