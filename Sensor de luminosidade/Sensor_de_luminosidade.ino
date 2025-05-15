const int pinoLDR = A0; 
const int pinoLED = 7; 
int leitura = 0; 

void setup() {
  pinMode(pinoLDR, INPUT);
  pinMode(pinoLED, OUTPUT);
  Serial.begin(9600); // Inicializa monitor serial
}

void loop() {
  leitura = analogRead(pinoLDR);
  Serial.println(leitura); // Mostra o valor lido

  if (leitura < 500) { // Ajuste conforme necessário
    digitalWrite(pinoLED, HIGH); 
  } else { 
    digitalWrite(pinoLED, LOW); 
  }

  delay(100); 
}
