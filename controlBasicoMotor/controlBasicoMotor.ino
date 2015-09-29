//declaramos os pines onde van conectados os motores
int pin1=6;
int pin2=7;

void setup(){
//configuramos os pines como saidas
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void loop(){

//sentido positivo do motor poñendo o pin1 alto e o pin2 baixo
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
//os delays son para que estea dous segundos nese sentido
  delay(2000);
  
//sentido negativo poñendo o pin1 baixo e o pin2 alto
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  delay(2000);
  
//espera poñendo os pines no mismo modo
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  delay(2000);
}
