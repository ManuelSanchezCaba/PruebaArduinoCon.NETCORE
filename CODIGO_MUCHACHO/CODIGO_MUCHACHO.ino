const int pin8 = 8;
const int pin7 = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(pin8, OUTPUT);
  pinMode(pin7, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
  {
    String MyCharacter = Serial.readString();

    if (MyCharacter == "VERDE") {
      digitalWrite(pin8, HIGH); // ESTA PARTE VA EN LOW PORQUE LOS MODULOS RELES FACILITADOS ENCIENDE EN LOW
      delay(4000);
      digitalWrite(pin8, LOW);
    }
    if (MyCharacter == "ROJO") {
      digitalWrite(pin7, HIGH);
      delay(4000);
      digitalWrite(pin7, LOW);
    }
  }

}
