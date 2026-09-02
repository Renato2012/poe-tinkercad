void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  int v = analogRead(A0);

  if (v < 150)
    digitalWrite(8, HIGH);
  else
    digitalWrite(8, LOW);
}
