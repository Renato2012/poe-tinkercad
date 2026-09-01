# Atividade 2: Leitura Digital com Botão

## Descrição
* **Conteúdo:** Leitura digital (`digitalRead()`), acionamento condicional e uso do botão como entrada.
* **Objetivo:** Compreender como o Arduino interpreta o estado de um botão e como esse sinal pode ser utilizado para controlar um atuador simples (LED) no ambiente virtual Tinkercad.

## Atividade Computacional — Etapas
1. Abra a plataforma Tinkercad e crie um novo circuito.
2. Reproduza o esquema de ligação da imagem abaixo:
   * Um botão conectado ao pino digital D7;
   * Um resistor de 10 $k\Omega$ entre D7 e GND (pull-down);
   * Um LED conectado ao pino digital D13, com resistor de 220 $\Omega$ em série.
3. Após revisar as ligações, programe o Arduino conforme as questões A, B e C.

![Esquema de ligação com botão e LED](../modulos/figuras/atividade2.png)

---

## Questão A — Leitura e Acionamento Direto

* **Código Fonte:** [m1_atividade2_questaoA.ino](../codigos/modulo1/m1_atividade2_questaoA.ino)

```cpp
int ledPin = 13;
int inPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  digitalWrite(ledPin, digitalRead(inPin));
}
```

### Prever
Ao pressionar o botão conectado ao pino 7, o LED no pino 13 irá acender?
- [ ] Sim
- [ ] Não

### Observar e explicar
Após executar a simulação, descreva como o LED se comportou e explique como a leitura digital do botão determina o estado enviado ao LED.

---

## Questão B — Invertendo a Lógica

Altere o programa para inverter o comportamento do LED.

* **Código Fonte:** [m1_atividade2_questaoB.ino](../codigos/modulo1/m1_atividade2_questaoB.ino)

```cpp
void setup() {}

void loop() {
  int leitura = digitalRead(7);
  digitalWrite(13, !leitura);
}
```

### Prever
Com essa nova lógica, o LED acenderá quando o botão não estiver pressionado (estado solto)?
- [ ] Sim
- [ ] Não

### Observar e explicar
Descreva como o LED se comportou ao pressionar e soltar o botão. Explique como o operador lógico `!` (negação) altera a relação entre o estado lido no botão e o estado aplicado ao LED.

---

## Questão C — Botão como "Chave de Estado" (Toggle)

Agora, faça o LED alternar entre ligado e desligado a cada aperto do botão.

* **Código Fonte:** [m1_atividade2_questaoC.ino](../codigos/modulo1/m1_atividade2_questaoC.ino)


```cpp
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
```

### Prever
Com esse código, o LED permanecerá no novo estado mesmo após soltar o botão?
- [ ] Sim
- [ ] Não

### Observar e explicar
Após a simulação, descreva o comportamento do LED a cada aperto do botão. Explique como a lógica de detecção de borda transforma o botão em um interruptor que alterna estados (toggle).
