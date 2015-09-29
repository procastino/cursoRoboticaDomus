//declaramos variables para o LED e a LDR
int led=9;
int ldr=A0;

void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  //lemos o valor de luz...
  int luzAmbiente=analogRead(ldr);
  //se o valor de luz e baixo...
  if (luzAmbiente<700){
    //acendo o LED
    digitalWrite(led,HIGH);
  }
  //en caso contrario (o valor de luz e alto)
  else {
    //apago o LED
    digitalWrite(led,LOW);
  }
}
