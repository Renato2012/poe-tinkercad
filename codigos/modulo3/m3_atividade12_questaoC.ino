void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  int v = analogRead(A0);

  if (v < 350) {
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    delay(200);
  } else {
    digitalWrite(8, LOW);
  }
}
