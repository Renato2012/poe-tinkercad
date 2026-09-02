#include <Servo.h>

Servo s1, s2;

void setup() {
  s1.attach(6);
  s2.attach(9);
}

void loop() {
  int v = analogRead(A0);
  if (v < 300) {
    s1.write(0);
  }
  else if (v < 600) {
    s1.write(90);
  }
  else {
    s1.write(180);
  }
}
