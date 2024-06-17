# Projeto de Controle de LEDs e Telemetria com Display LCD I2C

-Mateus dos Santos: 558436
-Lucas Imparato: 554896
-André de Maria: 556384
-Victória Moura: 555474
-Nickolas Cardoso: 557132

Este projeto utiliza um display LCD com interface I2C e LEDs para exibir informações de telemetria simuladas, como velocidade, RPM e temperatura dos pneus. Os LEDs são controlados sequencialmente no início do programa.

## Componentes Necessários

- Arduino (Uno, Mega, etc.)
- Display LCD I2C (endereço 0x20, 16 colunas, 2 linhas)
- 5 LEDs
- Resistores para os LEDs
- Jumpers e protoboard

## Biblioteca Necessária

Para controlar o display LCD via I2C, será necessário incluir a biblioteca `LiquidCrystal_I2C`. Certifique-se de instalar essa biblioteca na IDE do Arduino.

## Esquema de Ligação

- **Display LCD I2C**
  - SDA: A4 (Arduino Uno) ou o pino correspondente para outros modelos
  - SCL: A5 (Arduino Uno) ou o pino correspondente para outros modelos
  - VCC: 5V
  - GND: GND

- **LEDs**
  - LED 1: pino 2
  - LED 2: pino 3
  - LED 3: pino 4
  - LED 4: pino 5
  - LED 5: pino 6

Cada LED deve estar conectado em série com um resistor adequado para limitar a corrente, geralmente 220Ω ou 330Ω.

## Explicação do Código

### Inclusão da Biblioteca e Definição de Variáveis:

- Incluímos a biblioteca `LiquidCrystal_I2C` e definimos o endereço do display.
- Definimos os pinos dos LEDs.

### Setup:

- Inicializamos o display LCD e acendemos a luz de fundo.
- Configuramos os pinos dos LEDs como saídas.

### Loop Principal:

- Executamos a sequência de controle dos LEDs apenas uma vez.
- Após a sequência dos LEDs, exibimos as informações de telemetria no display LCD.

### Função Telemetria:

- Gera valores aleatórios para velocidade, RPM e temperatura dos pneus.
- Exibe esses valores no display LCD.

### Função controleLEDs:

- Acende e apaga os LEDs sequencialmente com um intervalo de 1 segundo.
