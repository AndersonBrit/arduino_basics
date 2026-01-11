# Exercício 02 – LED a Piscar

## Objetivo
Aprender a utilizar temporização no Arduino através da função `delay()` para fazer um LED piscar.

## Componentes
- Arduino / ESP32
- LED
- Resistência (≈ 220Ω)
- Breadboard
- Cabos jumper

## Funcionamento
No `setup()`, o pino 15 é configurado como saída.  
No `loop()`, o LED é ligado e desligado alternadamente com um intervalo de 1 segundo entre cada estado, utilizando a função `delay()`.

## Observações
Este exercício permitiu compreender o funcionamento do ciclo `loop()` e a utilização de temporização básica.
