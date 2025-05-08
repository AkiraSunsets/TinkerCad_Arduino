// C++ code
//
// Passos simples para programar em C++
int buzzerPin = 10; // Variavel para o buzzer (saída)
int buttonPin = 8; // Variavel para o botão (entrada)


void setup()//Executada no inicio, quando liga o arduino.
{
  pinMode(buzzerPin,OUTPUT); //Define o pino e escolhe entre e saída
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() //função que irá conter a lógica de programação
  // e será repetida 
{
  
  digitalWrite(LED_BUILTIN, HIGH);  //Saída, você irá determinar
  //o valor do dispositivo.
  digitalRead //Entrada, ler valor de entrada.
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
