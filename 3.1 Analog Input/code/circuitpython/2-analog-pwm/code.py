import pwmio
import board
import time
from analogio import AnalogIn
from digitalio import DigitalInOut, Direction

analog_in = AnalogIn(board.A0)
led = pwmio.PWMOut(board.LED, frequency=5000, duty_cycle=0)


while True:
  # analong input give a value from 0 - 65536 (this can also be written as 2**16)
  val = analog_in.value

  # duty_cycle also takes a value from 0 - 65536 so we cna just use it directly
  led.duty_cycle = val

  time.sleep(0.01)

