import time
import board
import digitalio
import usb_hid

from adafruit_hid.keyboard import Keyboard
from adafruit_hid.keyboard_layout_us import KeyboardLayoutUS

button = digitalio.DigitalInOut(board.D11)
button.direction = digitalio.Direction.INPUT
button.pull = digitalio.Pull.UP

led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

time.sleep(1)
keyboard = Keyboard(usb_hid.devices)
keyboard_layout = KeyboardLayoutUS(keyboard)

while True:
  if not button.value:
    led.value = True
    keyboard_layout.write("x")
  else:
    led.value = False
    keyboard.release_all()
  time.sleep(0.01)

