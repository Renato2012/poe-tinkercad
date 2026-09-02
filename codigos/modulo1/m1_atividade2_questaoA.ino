int ledPin = 13;
int inPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  digitalWrite(ledPin, digitalRead(inPin));
}
