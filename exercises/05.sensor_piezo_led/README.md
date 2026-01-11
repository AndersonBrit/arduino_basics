# Exercício 05 – Sensor Piezo a Controlar LED

## Objetivo
Aprender a ler valores analógicos de um sensor piezo e controlar um LED em resposta a vibrações físicas.

## Componentes
- Arduino / ESP32
- Sensor piezo
- LED
- Resistência (≈ 220Ω)
- Breadboard
- Cabos jumper

## Funcionamento
O pino do sensor piezo é configurado como entrada analógica e o pino do LED como saída digital.  
No `loop()`, o valor do sensor é lido com `analogRead()`.  
Se o valor lido ultrapassar um **limiar definido (`threshold`)**, o LED é ligado; caso contrário, permanece desligado.  
O valor do sensor é enviado também para o Monitor Serial para observação/debug.  

## Observações
Este exercício introduziu a leitura de sinais analógicos e a ligação entre estímulos físicos e respostas digitais, além de mostrar como monitorizar valores via Serial.
