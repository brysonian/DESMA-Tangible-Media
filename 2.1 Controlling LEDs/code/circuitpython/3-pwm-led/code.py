import board
import time
import pwmio

led = pwmio.PWMOut(board.LED, frequency=5000, duty_cycle=0)


while True:
  # steps = 100
  # stepSize = 65535 / steps
  # for i in range(steps):
  #   # duty_cycle is a 16-bit number with 65535 (2^16) as the max
  #   # higher numbers are brighter
  #   led.duty_cycle = int(i * stepSize)
  #   time.sleep(0.01)
  for i in range(0, 65535, 16):
    # duty_cycle is a 16-bit number with 65535 (2^16) as the max
    # higher numbers are brighter
    led.duty_cycle = i
    time.sleep(0.01)