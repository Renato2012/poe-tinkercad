#include <Servo.h>

Servo s;

void setup() {
  s.attach(6);
}

void loop() {
  int val = analogRead(A0);
  int angulo = map(val, 0, 1023, 30, 150);
  s.write(angulo);
}
