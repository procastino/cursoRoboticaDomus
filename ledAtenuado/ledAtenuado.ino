//declaramos a variable led co valor 9
int led=9;

void setup() {
//establecemos que o pin "led" sexa saida
  pinMode (led,OUTPUT);
//poñemolo a un valor de 20... que pasa?
//proba con distintos valores (pista, o 256 e un numero importante)
  analogWrite(led,20);
}

//deixamos o loop baleiro, porque non queremos facer un bucle
void loop() { 
  }
