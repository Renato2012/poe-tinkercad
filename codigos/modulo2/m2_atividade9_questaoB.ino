long medirDistancia() {
  digitalWrite(9, LOW); delayMicroseconds(2);
  digitalWrite(9, HIGH); delayMicroseconds(10);
  digitalWrite(9, LOW);
  long duracao = pulseIn(8, HIGH);
  return duracao / 58.0;
}

void setup() {
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  long d = medirDistancia();
  if (d < 90) digitalWrite(11, HIGH);
  else digitalWrite(11, LOW);
}
