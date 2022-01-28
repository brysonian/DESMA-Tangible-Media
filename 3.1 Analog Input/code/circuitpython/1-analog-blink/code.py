import board
import time
from analogio import AnalogIn
from digitalio import DigitalInOut, Direction

analog_in = AnalogIn(board.A0)
led = DigitalInOut(board.LED)
led.direction = Direction.OUTPUT


while True:
  # analong input give a value from 0 - 65536 (this can also be written as 2**16)
  val = analog_in.value

  # lets scale it that to be a fraction of a second
  seconds = val / 65536

  # blink the LED using the potentiometer value to set the rate
  led.value = True
  time.sleep(seconds)
  led.value = False
  time.sleep(seconds)
