# Atividade 3: Acionamento Sequencial de LEDs

## Descrição
* **Conteúdo:** Controle múltiplo de saídas digitais e lógica sequencial.
* **Objetivo:** Compreender como o Arduino pode controlar diversos LEDs independentemente e criar sequências de acionamento.

## Atividade Computacional — Etapas
1. Abra o Tinkercad e monte o circuito contendo três LEDs conectados aos pinos D3, D4 e D5, cada um com resistor de 220 $\Omega$.
2. Após revisar as conexões, programe o Arduino conforme as questões A, B e C.

![Esquema de ligação com três LEDs sequenciais](../modulos/figuras/atividade3.png)

---

## Questão A — Acionamento Independente

* **Código Fonte:** [m1_atividade3_questaoA.ino](codigos/modulo1/m1_atividade3_questaoA.ino)

```cpp
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

}

void loop() {}
```

### Prever
Com esse código, apenas o LED do pino 3 irá acender?
- [ ] Sim
- [ ] Não

### Observar e explicar
Após simular, descreva quais LEDs acenderam e explique por que somente a porta configurada em nível HIGH ativou seu LED, enquanto as demais permaneceram desligadas.

---

## Questão B — Dois LEDs Simultâneos

* **Código Fonte:** [m1_atividade3_questaoB.ino](codigos/modulo1/m1_atividade3_questaoB.ino)

```cpp
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
}

void loop() {}
```

### Prever
Com esse código, dois LEDs irão acender ao mesmo tempo (pinos 4 e 5)?
- [ ] Sim
- [ ] Não

### Observar e explicar
Após simular, explique o comportamento dos LEDs e descreva como o Arduino consegue ativar múltiplas portas digitais simultaneamente sem interferência entre elas.

---

## Questão C — Sequência de Piscar

* **Código Fonte:** [m1_atividade3_questaoC.ino](codigos/modulo1/m1_atividade3_questaoC.ino)

```cpp
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  delay(300);
  digitalWrite(4, LOW);
  
  digitalWrite(5, HIGH);
  delay(300);
  digitalWrite(5, LOW);
}
```

### Prever
Com esse código, os três LEDs piscarão em sequência (um após o outro)?
- [ ] Sim
- [ ] Não

### Observar e explicar
Após a simulação, descreva a ordem em que os LEDs acenderam e explique como o `delay()` e o comando `digitalWrite()` determinam a sequência temporal.
