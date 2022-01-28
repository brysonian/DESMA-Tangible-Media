"""
This example uses the adafruit_debouncer library to make dealing with buttons a little easier
"""

import board
import time
from digitalio import DigitalInOut, Direction, Pull
from adafruit_debouncer import Debouncer

led = DigitalInOut(board.LED)
led.direction = Direction.OUTPUT

button_pin = DigitalInOut(board.D11)
button_pin.direction = Direction.INPUT
button_pin.pull = Pull.UP
button = Debouncer(button_pin)

state = 0

while True:
  button.update()

  if button.fell:
    state = 1 - state

  if state == 1:
    led.value = True
  else:
    led.value = False
