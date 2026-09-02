# 🤖 Guias de Atividades Práticas com Arduino — Simulação no Tinkercad

Este repositório contém o material didático complementar desenvolvido para o Trabalho de Conclusão de Curso (TCC). O objetivo é fornecer roteiros estruturados e códigos prontos para o aprendizado prático de sistemas embarcados e robótica por meio de simulação computacional na plataforma Tinkercad.

Os roteiros seguem a metodologia **Prever, Observar e Explicar (POE)**, estimulando a reflexão sobre o comportamento dos circuitos antes e depois da execução do código.

---

## 📂 Estrutura Organizacional do Projeto

O projeto foi dividido em módulos progressivos de aprendizagem, separando os relatórios de atividade em Markdown (`.md`) dos arquivos de código fonte do Arduino (`.ino`) para facilitar a importação na IDE.

```text
.
├── README.md               # Documentação principal do repositório
├── doc/                    # Arquivos em .pdf da Sequência Didática. 
│   ├── apendice-a-modulo-1.pdf
│   ├── apendice-b-modulo-2.pdf
│   └── apendice-c-modulo-3.pdf
│
├── modulos/                # Roteiros e Guias de Atividades (.md)
|   ├── figuras/            # Imagens e esquemas de ligação dos circuitos
│   |   ├── atividade1.png
│   |   ├── ...
│   |   └── atividade13.png
|   |
│   ├── modulo1/
│   │   ├── m1_atividade1.md
│   │   ├── m1_atividade2.md
│   │   ├── m1_atividade3.md
│   │   ├── m1_atividade4.md
│   │   └── m1_atividade5.md
│   ├── modulo2/
│   │   ├── m2_atividade6.md
│   │   ├── m2_atividade7.md
│   │   ├── m2_atividade8.md
│   │   ├── m2_atividade9.md
│   │   └── m2_atividade10.md
│   └── modulo3/
│       ├── m3_atividade11.md
│       ├── m3_atividade12.md
│       └── m3_atividade13.md
│
└── codigos/                # Arquivos fontes (.ino) para o Arduino
    ├── modulo1/
    │   ├── m1_atividade1_questaoA.ino
    │   └── ...
    ├── modulo2/
    │   ├── m2_atividade6_questaoA.ino
    │   └── ...
    └── modulo3/
        ├── m3_atividade11_questaoA.ino
        └── ...
```

---

## 🗺️ Mapa de Atividades Disponíveis

### 🟢 Módulo 1: Circuitos Básicos envolvendo LED, Resistores e Botões
* **[Atividade 1: Acionamento de LED em Porta Digital](modulo1/m1_atividade1.md)** — Conceitos de portas digitais, níveis lógicos HIGH/LOW e temporização com delay.
* **[Atividade 2: Leitura Digital com Botão](modulo1/m1_atividade2.md)** — Uso de `digitalRead()`, resistores de *pull-down* e lógica de retenção (*toggle*).
* **[Atividade 3: Acionamento Sequencial de LEDs](modulo1/m1_atividade3.md)** — Controle temporal e ordenação de múltiplas saídas digitais em cascata.
* **[Atividade 4: Sensores (LDR) e Leitura Analógica](modulo1/m1_atividade4.md)** — Introdução ao divisor resistivo, `analogRead()` e modulação por largura de pulso (PWM).
* **[Atividade 5: Projeto Final — Semáforo com Temporização](modulo1/m1_atividade5.md)** — Integração dos conceitos sequenciais em um sistema de controle de tráfego básico.

### 🟡 Módulo 2: Leitura e Interpretação de Sinais Analógicos com Arduino
* **[Atividade 6: Sensor de Luminosidade (LDR)](modulo2/m2_atividade6.md)** — Criação de escalas condicionais diretas e inversas associadas à intensidade de luz ambiente.
* **[Atividade 7: Sensor de Temperatura (Termistor NTC)](modulo2/m2_atividade7.md)** — Análise do comportamento térmico e acionamento proporcional de atuadores.
* **[Atividade 8: Potenciômetro e Controle Analógico](modulo2/m2_atividade8.md)** — Mapeamento manual de entradas analógicas para saídas PWM em modo direto e reverso.
* **[Atividade 9: Sensor Ultrassônico HC-SR04](modulo2/m2_atividade9.md)** — Cálculo de tempo de trânsito de pulso acústico para medição de distância e alertas visuais.
* **[Atividade 10: Servomotor Controlado por Potenciômetro](modulo2/m2_atividade10.md)** — Mapeamento angular dinâmico (0° a 180°) e limitação física de curso por software.

### 🔵 Módulo 3: Aplicações Avançadas de Controle Digital com Arduino
* **[Atividade 11: Controle de Mini Braço Robótico (2 Servos)](modulo3/m3_atividade11.md)** — Movimentação coordenada e independente de juntas usando um único potenciômetro.
* **[Atividade 12: Alarme com LDR e Buzzer](modulo3/m3_atividade12.md)** — Lógica de detecção por limiares críticos de sombreamento com alertas sonoros intermitentes.
* **[Atividade 13: Porta Automática com Sensor Ultrassônico e Servo](modulo3/m3_atividade13.md)** — Automação de acessos dividida em faixas de distância e controle de abertura por estágios.

---

## 🚀 Como Utilizar Este Repositório

### 1. Clonar ou Baixar o Projeto
Faça o download do repositório zipado ou clone utilizando o Git:
```bash
git clone https://github.com
```

### 2. Acessar os Roteiros
Navegue pelas pastas dentro da pasta `modulos/` para abrir o arquivo `.md` correspondente à prática que deseja realizar. Os roteiros possuem links que apontam diretamente para o código correto de cada questão.

### 3. Executar os Códigos
Os arquivos contidos na pasta `codigos/` estão em formato nativo do ecossistema Arduino (`.ino`). Eles podem ser:
* Copiados e colados na aba de código (modo texto) do **Tinkercad**.
* Abertos diretamente na **Arduino IDE** para gravação em placas físicas.

---
💡 *Bons estudos!*
