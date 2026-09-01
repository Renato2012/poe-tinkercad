void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  int leitura = analogRead(A0);
  if (leitura > 300)
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}
