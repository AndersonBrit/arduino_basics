# Exercício 01 – LED Sempre Ligado

## Objetivo
Aprender a configurar um pino digital como saída e ligar um LED de forma contínua assim que o Arduino é ligado.

## Componentes
- Arduino / ESP32
- LED
- Resistência (≈ 220Ω)
- Breadboard
- Cabos jumper

## Funcionamento
No `setup()`, o pino 15 é configurado como saída (`OUTPUT`) e colocado em nível alto (`HIGH`), fazendo com que o LED fique ligado permanentemente.  
A função `loop()` permanece vazia, pois não é necessária nenhuma repetição de código.

## Observações
Este exercício serviu como primeiro contacto com saídas digitais e controlo básico de componentes eletrónicos.
