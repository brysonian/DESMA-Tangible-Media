import board
import digitalio
import time

led = digitalio.DigitalInOut(board.D9)
led.direction = digitalio.Direction.OUTPUT

while True:
  led.value = True
  time.sleep(0.25)
  led.value = False
  time.sleep(0.25)