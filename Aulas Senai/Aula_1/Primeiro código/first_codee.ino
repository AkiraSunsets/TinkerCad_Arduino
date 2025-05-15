// C++ code
//
// Passos simples para programar em C++
int chavePin = 7; // Variavel para o buzzer (saída)
int buzzerPin = 10; // Variavel para o botão (entrada)
int estadochave = 0; // Variavel para ler o estado das chaves.


void setup()//Executada no inicio, quando liga o arduino.
{
  pinMode(buzzerPin, OUTPUT); //Define o pino e escolhe entre e saída
  pinMode(chavePin, INPUT); //chavepin (pino10) definido como entrada 
}

void loop() //função que irá conter a lógica de programação
  // e será repetida 
{
  
  estadochave = digitalRead(chavePin); //Entrada, ler valor de entrada.
  if (estadochave == HIGH){//Se o estado do botão for ALTO 1.
    digitalWrite(buzzerPin,HIGH);
  	delay(100); //3 segundos ligado
}else{
  digitalWrite(buzzerPin,LOW);
  delay(100);
 }
}
