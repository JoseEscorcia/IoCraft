void setup() {
  // Inicializar la comunicación serial a 115200 baudios
  Serial.begin(115200);
}

void loop() {
  // Especificar coordenada y generamos valores aleatorios
  int coord1 = 22;
  int coord2 = -60;
  int coord3 = 21;
  int valor = random(40, 50);

  // Crear el mensaje
  String mensaje = String(coord1) + "," + String(coord2) + "," + String(coord3) + "_" + String(valor) + "#";

  // Enviar el mensaje con un retraso breve
  Serial.println(mensaje);

  // Esperar un breve momento antes de repetir el ciclo
  delay(2000);
}
