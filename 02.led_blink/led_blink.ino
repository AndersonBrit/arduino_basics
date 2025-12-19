int led = 15; // pino onde o LED está ligado

void setup() {
  pinMode(led, OUTPUT); // define o pino como saída
}

void loop() {
  digitalWrite(led, HIGH); // liga o LED
  delay(1000);             // espera 1 segundo (1000 ms)
  
  digitalWrite(led, LOW);  // desliga o LED
  delay(1000);             // espera 1 segundo
}
