void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Comprobar si hay datos disponibles para recibir
  if (Serial.available() > 0) {
    // Leer el mensaje recibido hasta el carácter de nueva línea
    String mensaje = Serial.readStringUntil('\r');
    
    // Verificar el contenido del mensaje y realizar acciones correspondientes
    if (mensaje.equals("Encender")) {
      digitalWrite(LED_BUILTIN, HIGH); // Encender el LED
    } else if (mensaje.equals("Apagar")) {
      digitalWrite(LED_BUILTIN, LOW); // Apagar el LED
    }
  }

  // Especificar coordenada y generamos valores aleatorios
  int coord1 = 26;
  int coord2 = -60;
  int coord3 = -40;
  int valor = random(40, 50);

  // Crear el mensaje
  String mensaje = String(coord1) + "," + String(coord2) + "," + String(coord3) + "_" + String(valor) + "#";

  // Enviar el mensaje
  Serial.println(mensaje);

  // Esperar un breve momento antes de repetir el ciclo
  delay(2000); 
}
