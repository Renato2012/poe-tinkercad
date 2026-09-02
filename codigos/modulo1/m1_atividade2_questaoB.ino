void setup() {}

void loop() {
  int leitura = digitalRead(7);
  digitalWrite(13, !leitura);
}
