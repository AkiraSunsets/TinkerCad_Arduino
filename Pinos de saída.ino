// C++ code

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);   
  pinMode(3, OUTPUT);   
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000); // Espera por 1000 milissegundos  
  digitalWrite(13, LOW);
  
  digitalWrite(12, HIGH); 
  delay(500);
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH); 
  delay(500);
  digitalWrite(11, LOW);
  
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(1, LOW);
}

   
 