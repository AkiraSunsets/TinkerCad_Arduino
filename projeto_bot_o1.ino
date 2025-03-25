
void setup(){
 pinMode(9, INPUT); 
 pinMode(12, OUTPUT); 
 }

void loop(){
  if (digitalRead(9) == HIGH){ 
digitalWrite(12, HIGH); 
  }
 else{ 
 digitalWrite(12, LOW); 
 }
}