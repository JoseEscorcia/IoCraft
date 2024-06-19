void setup() {
  // Inicializar la comunicación serial a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  // Especificar coordenada y generamos valores aleatorios
  int coord1 = 22;
  int coord2 = -60;
  int coord3 = 21;
  String mensaje = "";
  String palabra1 = "Encender";
  String palabra2 = "Apagar";

  // Crear el mensaje "Encender"
  mensaje = String(coord1) + "," + String(coord2) + "," + String(coord3) + "_" + palabra1 + "#";
  
  // Enviar el mensaje
  Serial.println(mensaje);

  // Esperar un breve momento antes de repetir el ciclo
  delay(2000);
  

    // Crear el mensaje "Apagar"
  mensaje = String(coord1) + "," + String(coord2) + "," + String(coord3) + "_" + palabra2 + "#";
  
  // Enviar el mensaje
  Serial.println(mensaje);

  // Esperar un breve momento antes de repetir el ciclo
  delay(1000);
}
