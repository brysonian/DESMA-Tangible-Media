import board
import time
import pwmio

led = pwmio.PWMOut(board.D9, frequency=5000, duty_cycle=0)

pwmMax = 65535 # this could also be written as (2**16 - 1) which reads: 2 to the 16th power minus 1
while True:
  for i in range(0, pwmMax, 512):
    # duty_cycle is a 16-bit number with 65535 (2^16) as the max, higher numbers are brighter
    led.duty_cycle = i
    time.sleep(0.01)

  for i in range(pwmMax, 0, -512):
    led.duty_cycle = i
    time.sleep(0.01)
