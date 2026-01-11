# Exercício 04 – Botão a Controlar LED

## Objetivo
Aprender a ler entradas digitais através de um botão e controlar um LED utilizando estruturas condicionais.

## Componentes
- Arduino / ESP32
- LED
- Resistência (≈ 220Ω)
- Botão (push button)
- Breadboard
- Cabos jumper

## Funcionamento
O pino do botão é configurado como entrada e o pino do LED como saída.  
No `loop()`, o estado do botão é lido com a função `digitalRead()`.  
Se o botão estiver pressionado (`HIGH`), o LED é ligado; caso contrário, permanece desligado.

## Observações
Este exercício permitiu compreender o funcionamento de entradas digitais e a utilização de condições `if/else`.
