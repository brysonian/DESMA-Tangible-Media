import board
import time
from digitalio import DigitalInOut, Direction, Pull

led = DigitalInOut(board.LED)
led.direction = Direction.OUTPUT

button = DigitalInOut(board.D11)
button.direction = Direction.INPUT
button.pull = Pull.UP

state = 0
lastVal = True

while True:
  if not button.value and lastVal:
    state = 1 - state
    time.sleep(0.2)

  lastVal = button.value

  if state == 1:
    led.value = True
  else:
    led.value = False
