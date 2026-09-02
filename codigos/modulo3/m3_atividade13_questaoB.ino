#include <Servo.h>

#define TRIG 8
#define ECHO 9

Servo porta;

long medirDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duracao = pulseIn(ECHO, HIGH);
  return duracao / 58;
}

void setup() {
  porta.attach(3);
  porta.write(0);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  long d = medirDistancia();

  if (d < 120)
    porta.write(90);
  else
    porta.write(0);
}
