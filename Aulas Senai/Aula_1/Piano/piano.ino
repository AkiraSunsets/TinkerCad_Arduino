int p1 = 3;
int p2 = 4;
int p3 = 5;
int p4 = 6;
int p5 = 7;
int p6 = 8;
int p7 = 9;
int p8 = 10;
int C,D,E,F,G,A,B,C2;//Var Pulsador
int buzz = 2; //Buzzer

void setup()
{
  Serial.begin(9600);
  pinMode(p1,INPUT);
  pinMode(p2,INPUT);
  pinMode(p3,INPUT);
  pinMode(p4,INPUT);
  pinMode(p5,INPUT);
  pinMode(p6,INPUT);
  pinMode(p7,INPUT);
  pinMode(p8,INPUT);
}

void loop()
{
  C = digitalRead(p1); // Leitura dados
  D = digitalRead(p2);
  E = digitalRead(p3);
  F = digitalRead(p4);
  G = digitalRead(p5);
  A = digitalRead(p6);
  B = digitalRead(p7);
  C2 = digitalRead(p8);
  if(C == 1){
    tone(buzz,523); //reproduzir nota C(Dó)
  }else if(D == 1){
    tone(buzz,587); //D (Ré)
  }else if(E == 1){
    tone(buzz,659);
  }else if(F == 1){
	tone(buzz,698);
  }else if(G == 1){
    tone(buzz,784);
  }else if(A == 1){
    tone(buzz,880);
  }else if(B == 1){
    tone(buzz,988);
  }else if(C2 == 1){
    tone(buzz,1047); //C
  }else{
    noTone(buzz);
  }
   delay(50);
           }
