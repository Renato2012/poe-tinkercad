void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); // amarelo (não acende)
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH); delay(4000);
  digitalWrite(3, LOW);

  // LED amarelo omitido propositalmente (falha)
  delay(1500);

  digitalWrite(5, HIGH); delay(4000);
  digitalWrite(5, LOW);
}
