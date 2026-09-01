void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  analogWrite(9, 255 - (val / 4));
}
