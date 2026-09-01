#include <Servo.h>

Servo s1, s2;

void setup() {
  s1.attach(6);
  s2.attach(9);
}

void loop() {
  int v = analogRead(A0);
  int ang = map(v, 0, 1023, 0, 180);

  s1.write(ang);
  s2.write(180 - ang);
}
