void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  analogWrite(9, val / 4);
}
