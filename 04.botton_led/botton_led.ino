int led = 13;     // pino do LED
int botao = 4;    // pino do botão

void setup() {
  pinMode(led, OUTPUT);    // LED como saída
  pinMode(botao, INPUT);   // Botão como entrada
}

void loop() {
  int estado = digitalRead(botao); // lê estado do botão

  if (estado == HIGH) {     // se botão pressionado
    digitalWrite(led, HIGH); // liga LED
  } else {
    digitalWrite(led, LOW);  // desliga LED
  }
}
