<div align="center">
    <img src="/assets/images/iocraft_title.png" width="300px"/>  
</div>

<br>

**IoCraft** es un mod de IoT para Minecraft que permite la comunicación serial y HTTP. En la comunicación serial, puedes interactuar con una amplia variedad de hardware (Arduino, ESP32, etc.) y software (Python, Node.js, etc.). Con la comunicación HTTP, puedes integrar tu experiencia de juego con servicios en línea como, por ejemplo, ThingSpeak.

## Resumen de comandos
| Comando | Función | Ejemplo |
| -- | -- | -- |
| /ioc conectar serial \<Puerto> \<Baudrate> | **Iniciar** la comunicación serial | */ioc conectar serial COM3 115200* | 
| /ioc serial mensaje \<Palabra> | **Enviar** mensaje serial | /ioc serial mensaje HolaMundo |
| /ioc cerrarConexion | **Cerrar** conexión serial | */ioc cerrarConexion* |
| /ioc http GET \<URL> | **Realizar petición GET** | */ioc http GET "www.google.com/"* |
| /ioc http POST \<Palabra> \<URL> | **Enviar mensaje** mediante el método **POST**  | */ioc http POST HolaMundo "www.google.com/"* |

<br>

## Bloques:

### Bloque "Serial Tx":
Con este bloque podrás enviar mensajes seriales.<br>
<img src="/assets/images/Serial Tx.png" width="50px"/>  

<br>

Receta:
- x6 Bloque de hierro
- x1 Diamante
<br>
<img src="/assets/images/craftTx.PNG" width="100px"/> 

<br>

Interfaz:<br>
<img src="/assets/images/interTx.PNG" width="300px"/> 

| Opción | Explicación |
|-----|-----------|
| Activación/Clave activar | Palabra que se enviará **al recibir** señal de redstone [Sin espacios] |
| Apagado/Clave apagar | Palabra que se enviará al **NO recibir** señal de redstone [Sin espacios] |
| Estado | Estado actual del bloque (recibiendo señal redstone o no) |
| Puerto | Puerto actual con el que se mantiene comunicación |
| Baudrate | Velocidad de comuncación del puerto actual |

<br>


### Bloque "Serial Rx":
Con este bloque podrás recibir mensajes seriales. Si el valor recibido cumple con la condición de comparación entonces el bloque emitirá una señal de redstone.<br>
<img src="/assets/images/Serial Rx.png" width="50px"/>  

<br>

Receta:
- x4 Pepita de oro
- x4 Bloque de hierro
- x1 Diamante
<br>
<img src="/assets/images/craftRx.PNG" width="100px"/> 

<br>

Interfaz:<br>
<img src="/assets/images/interRx.PNG" width="300px"/> 

| Opción | Explicación |
|-----|-----------|
| Superior/Rango superior | Primer valor *(palabra/número)* con el que se compara |
| Inferior/Rango inferior | Segundo valor *(palabra/número)* con el que se compara |
| Modo | Modo de comparación de valores entrantes |
| Recibido | Valor recibido |
| Puerto | Puerto actual con el que se mantiene comunicación |
| Baudrate | Velocidad de comuncación del puerto actual |
| Coordenada | Coordenada del bloque |

<br>

Modos de comparación:
| Modo | Explicación |
|-----|-----------|
| = | Igual *[Texto/Numérico]* |
| > | Mayor que *[Numérico]* |
| < | Menor que *[Numérico]* |
| >= | Mayor igual *[Numérico]* |
| <= | Menor igual *[Numérico]* |
| acotado | Valores que se encuentran **dentro** de un rango  *[Numérico]* |
| acotado inverso | Valores que se encuentran **fuera** de un rango *[Numérico]*|

<br>

### Bloque "HTTP POST":
Con este bloque podrás enviar un mensaje mediante el método POST de HTTP cuando reciba o deje de recibir señal redstone.<br>
<img src="/assets/images/HTTP post.png" width="50px"/>  

<br>

Receta:
- x4 Barrote de hierro
- x2 Lingote de hierro
- x2 Lana roja
- x1 Perla de ender
<br>
<img src="/assets/images/craftPOST.PNG" width="100px"/> 

<br>

Interfaz:<br>
<img src="/assets/images/interHTTPpost.PNG" width="300px"/> 

| Opción | Explicación |
|-----|-----------|
| URL | Dirección donde se hará la solicitud |
| Clave activar | Palabra que se enviará **al recibir** señal de redstone *[Sin espacios]* |
| Clave apagar | Palabra que se enviará al **NO recibir** señal de redstone *[Sin espacios]* |

<br>

### Motobomba/Electrobomba:
Este bloque arrojará agua al recibir una señal de redstone.<br>
<img src="/assets/images/Motobomba.png" width="50px"/> 

<br>

Receta:
- x4 Lingote de hierro
- x2 Escotilla de roble oscuro
- x1 Palanca
<br>
<img src="/assets/images/craftMotobomba.PNG" width="100px"/> 

<br>


### Bloque "Detector de humedad":
Con este bloque podrás leer la humedad del bloque de tierra que se encuentre encima de este y cuando reciba una señal redstone enviará de forma serial el valor de humedad y la coordenada del bloque de tierra.<br>
<img src="/assets/images/Detector humedad.png" width="50px"/>  
<img src="/assets/images/usoSensorHumedad.png" width="50px"/>  


<br>

Receta:
- x4 Lingote de hierro
- x4 Barrote de hierro
- x1 Tinte celeste
<br>
<img src="/assets/images/craftDetectorHumedad.PNG" width="100px"/> 

<br>


Interfaz:<br>
<img src="/assets/images/interdHumedad.PNG" width="300px"/> 

| Valor | Explicación |
|-----|-----------|
| Coordenada | Es la posición del bloque de tierra cultivable. Estos valores estarán separados por "_" *[Valores enteros]* |
| Humedad | Dará como resultado valores que van de 1 hasta 7 (Valores enteros). Estará separado por el simbolo "+". *[Antes de leer tomará el valor de "-1"]* |
| Banderas de inicio y fin de mensaje | La letra "i" indicará el inicio del mensaje y "f" el final del mismo |

<br>

### Bloque "ThingSpeak Humedad":
Con este bloque podrás leer la humedad del bloque de tierra que se encuentre encima de este y enviará dicho valor al canal de ThingSpeak especificado.<br>
<img src="/assets/images/ThingSpeak humedad.png" width="50px"/>  


<br>

Receta:
- x4 Lingote de hierro
- x4 Barrote de hierro
- x1 Perla de ender
<br>
<img src="/assets/images/craftHumedadThingspeak.PNG" width="100px"/> 

<br>



Interfaz:<br>
<img src="/assets/images/interdHumedadThingspeak.PNG" width="300px"/>
<br><br>
<img src="/assets/images/graficaThingspeak.PNG" width="200px"/>
<br>
*[Grafica solo como referencia]*

| Valor | Explicación |
|-----|-----------|
| Key | Es la clave para ingresar al canal |
| Field | Es la gráfica donde enviaremos el valor de humedad |

<br>

## Ejemplos de aplicación:

Visite el canal de youtube [Curius](https://www.youtube.com/@curius-dev) para encontrar más ejemplos de aplicación de IoCraft.

## Canal de comunicación:

Para reportar algún bug o cualquier otra solicitud comunicarse al correo electrónico: curiusreport@gmail.com

## Descargo de Responsabilidad:

El software proporcionado es para propósitos educativos y de demostración únicamente. El uso del software está bajo la responsabilidad del usuario. El autor no asume ninguna responsabilidad por cualquier uso inapropiado, daños directos o indirectos, pérdida de datos u otros problemas que puedan surgir del uso del software.
