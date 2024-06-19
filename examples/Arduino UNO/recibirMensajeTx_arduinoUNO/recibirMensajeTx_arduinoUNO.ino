const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  if(Serial.available() > 0){
    String mensaje = Serial.readStringUntil('\r');
    if(mensaje.equals("Encender")){
      digitalWrite(ledPin, LOW);
    } else if(mensaje.equals("Apagar")){
      digitalWrite(ledPin, HIGH);
    }
  }
}
