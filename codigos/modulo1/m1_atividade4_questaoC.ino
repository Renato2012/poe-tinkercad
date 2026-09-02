void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  if (val < 400) digitalWrite(11, HIGH);
  else digitalWrite(11, LOW);
}
