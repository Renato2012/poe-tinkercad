long medirDistancia() {
  digitalWrite(9, LOW); delayMicroseconds(2);
  digitalWrite(9, HIGH); delayMicroseconds(10);
  digitalWrite(9, LOW);
  long duracao = pulseIn(8, HIGH);
  return duracao / 58.0;
}

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  Serial.println(medirDistancia());
  delay(300);
}
