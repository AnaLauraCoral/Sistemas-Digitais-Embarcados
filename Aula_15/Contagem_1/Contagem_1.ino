#define pin_botao1 2
#define pin_botao2 3
int conta = 0;
int aux = 0;
void setup() {
pinMode (pin_botao1, INPUT);
Serial.begin(9600);
}

void loop() {
 bool botaoA = digitalRead (pin_botao1);
 bool botaoB = digitalRead (pin_botao2);
 if (botaoA == 1){
  if (aux == 0 ){
    conta++;
    aux = 1;
  }
 } else {
  aux = 0;
 }
Serial.println(conta);
}
