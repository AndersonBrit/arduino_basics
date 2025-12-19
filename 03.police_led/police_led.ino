int redled = 15; // pino vermelhor
int blueled = 13;  // pino vermelhor

void setup() {
  pinMode(redled, OUTPUT); 
  pinMode(blueled, OUTPUT); 
}

void loop() {
  digitalWrite(redled, HIGH); 
  digitalWrite(blueled, LOW);
  delay(1000);             
  
  digitalWrite(redled, LOW);
  digitalWrite(blueled, HIGH);
  delay(1000);             
}
