const int piezoPin = 34;   // Pino do piezo (analógico)
const int ledPin = 23;     // Pino do LED (digital)
const int threshold = 100; // Valor limite para acender o LED (ajustar)

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200); // Para ver os valores do piezo no monitor
}

void loop() {
  int piezoValue = analogRead(piezoPin); // Lê o valor do piezo
  Serial.println(piezoValue);            // Opcional: ver valores no Serial Monitor

  if (piezoValue > threshold) {
    digitalWrite(ledPin, HIGH); // Acende o LED
  } else {
    digitalWrite(ledPin, LOW);  // Apaga o LED
  }

  delay(10); // Pequeno atraso para estabilidade
}
