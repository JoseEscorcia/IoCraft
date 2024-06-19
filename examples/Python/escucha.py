import serial
puerto_serial = serial.Serial('COM9',9600, timeout=1)

try:
    while True:
        datos = puerto_serial.readline().decode().strip()
        if datos:
            print(datos)
        
except KeyboardInterrupt:
    print("Deteniendo la recepción de mensajes...")
    puerto_serial.close()