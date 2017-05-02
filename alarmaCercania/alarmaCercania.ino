//imos usar unha libreria que se chama NewPing, e hai que avisar
#include <NewPing.h>

//vou usar un sonar con echo e trigger no pin 10 e a distancia limitada a 100cm
NewPing sonar(10,10,100); 

//definimos variable do led
int led=9;
//defino unha variable dist onde vou gardar a lectura de distancia
int dist;
//defino a variable lim segun onde quero que salte a alarma
int lim=40;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  //a instruccion ping_cm xa nos da a distancia en cm.
  dist = sonar.ping_cm();
  
  //imprimo a distancia polo monitor serie
  Serial.println(dist);
  
  //encendo a luz de alarma se a distancia e menor que o limite que 
  //puxen, e se non a apago.
  if (dist<lim){
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
  delay(50);
  
}
