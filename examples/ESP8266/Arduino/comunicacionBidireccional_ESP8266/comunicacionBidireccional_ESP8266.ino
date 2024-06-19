const int ledInternoPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledInternoPin, OUTPUT);
  digitalWrite(ledInternoPin, HIGH); //Funciona con lógica inversa (Apaga)
}

void loop() {
  if(Serial.available() > 0){
    String mensaje = Serial.readStringUntil('\r');
    if(mensaje.equals("Encender")){
      digitalWrite(ledInternoPin, LOW); //Enciende
    } else if(mensaje.equals("Apagar")){
      digitalWrite(ledInternoPin, HIGH); //Apaga
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
