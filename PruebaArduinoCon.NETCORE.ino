const int PIN_LED = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0) {
    int character = Serial.read();

    if (character == 'E') {
      digitalWrite(PIN_LED, HIGH);
      delay(1000);
      digitalWrite(PIN_LED, LOW);
    }
  }
}
