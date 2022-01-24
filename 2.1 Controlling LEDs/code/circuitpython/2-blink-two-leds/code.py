import board
import digitalio
import time

led1 = digitalio.DigitalInOut(board.D9)
led1.direction = digitalio.Direction.OUTPUT

led2 = digitalio.DigitalInOut(board.D10)
led2.direction = digitalio.Direction.OUTPUT

while True:
  led1.value = True
  time.sleep(0.5)

  led1.value = False
  led2.value = True
  time.sleep(0.5)

  led1.value = True
  led2.value = True
  time.sleep(0.5)

  led1.value = False
  led2.value = False
  time.sleep(0.5)