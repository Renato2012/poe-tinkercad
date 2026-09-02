void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  int leitura = analogRead(A0);
  analogWrite(11, leitura * 1.4);
}
