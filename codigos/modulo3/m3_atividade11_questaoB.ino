#include <Servo.h>

Servo s1, s2;

void setup() {
  s1.attach(6);
  s2.attach(9);
}

void loop() {
  int v = analogRead(A0);
  s1.write(map(v, 0, 1023, 30, 150));
  s2.write(map(v, 0, 1023, 60, 120));
}
