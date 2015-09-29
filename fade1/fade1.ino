/*
 Esvaecer
 Este exemplo nos ensina a controlar o esvaecemento dun LED conectado ao pin 9. 
 */

//definimos variables:

int pinLed = 9;           // definimos o numero 9 como pinLed
int brillo = 0;    // variable onde teremos o brillo do LED

  // xa sabes que o setup se executa unha soa vez
void setup()  { 
  // facemos que o pinLed sexa unha saida (OUTPUT)
  pinMode(pinLed, OUTPUT);
} 

// xa sabes que loop se executa unha e outra vez de principio a fin
void loop()  { 
  // dicimoslle canto brillo lle quero dar a pinLed:
  analogWrite(pinLed,brillo);    

  // facemos que o brillo se incremente en 1:
  brillo=brillo+1;

  // esperamos 50 milisegundos para que a cousa non vaia demasiado rapido.    
  delay(50);                            
}
