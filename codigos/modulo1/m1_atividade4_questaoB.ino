void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  analogWrite(11, val/4);
}
