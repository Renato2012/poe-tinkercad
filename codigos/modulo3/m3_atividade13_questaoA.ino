#define TRIG 8
#define ECHO 9

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

long medirDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duracao = pulseIn(ECHO, HIGH);
  long distancia = duracao / 58;
  return distancia;
}

void loop() {
  long d = medirDistancia();
  Serial.println(d);
  delay(300);
}
