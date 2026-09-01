int estadoLED = 0;
int anterior = 0;

void setup() {
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int atual = digitalRead(7);
  if(atual == HIGH && anterior == LOW) {
    estadoLED = !estadoLED;
    digitalWrite(13, estadoLED);
    delay(250);
  }

  anterior = atual;
}
