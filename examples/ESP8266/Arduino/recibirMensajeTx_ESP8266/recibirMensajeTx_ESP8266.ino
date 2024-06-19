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
}
