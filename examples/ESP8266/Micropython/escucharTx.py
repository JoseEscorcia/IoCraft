from machine import Pin

led = Pin(2, Pin.OUT)

while True:
    data = input()
    if 'Apagar' in data:
        led.value(0)
    if 'Encender' in data:
        led.value(1)