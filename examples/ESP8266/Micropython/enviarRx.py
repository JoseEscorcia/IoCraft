import machine
import time
import urandom

def randint(min, max): #Generar valores aleatorios
    span = max - min + 1
    div = 0x3fffffff // span
    offset = urandom.getrandbits(30) // div
    val = min + offset
    return val

while True:
    # Coordenada del bloque y valores aleatorios
    coord1 = 26
    coord2 = -60
    coord3 = -40
    valor = randint(40, 50)  # Generar un número aleatorio entre 40 y 50 (incluidos)

    # Crear el mensaje
    mensaje = "{},{},{}_{:#}#".format(coord1, coord2, coord3, valor)

    # Enviar el mensaje por el UART
    print(mensaje + '\r\n')

    # Esperar un breve momento antes de repetir el ciclo
    time.sleep(2)

