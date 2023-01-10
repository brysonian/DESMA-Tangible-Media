import board
from digitalio import DigitalInOut, Direction, Pull

led = DigitalInOut(board.LED)
led.direction = Direction.OUTPUT

button = DigitalInOut(board.D11)
button.direction = Direction.INPUT
button.pull = Pull.UP

while True:
  if button.value:
    led.value = False
  else:
    led.value = True
