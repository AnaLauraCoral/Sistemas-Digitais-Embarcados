#define pin_botao1 2
#define pin_botao2 3
#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
int conta = 0;
int aux = 0;
int auxb = 0;
void setup() {
pinMode (pin_botao1, INPUT);
pinMode (pin_botao2, INPUT);
pinMode (pin_led1, OUTPUT);
pinMode (pin_led2, OUTPUT);
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

if (botaoB == 1){
  if (auxb == 0 ){
    conta--;
    auxb = 1;
  }
 } else {
  auxb = 0;

 }
 if (((conta>>0) % 2) == 1) {
  digitalWrite(pin_led1, 1);
 }
  else {
  digitalWrite(pin_led1, 0);
  }
if (((conta>>1) % 2) == 1) {
  digitalWrite(pin_led2, 1);
}
  else {
  digitalWrite(pin_led2, 0);
  }
  if (((conta>>3) % 2) == 1) {
  digitalWrite(pin_led3, 1);
  }
  else {
  digitalWrite(pin_led3, 0);
  }

}
Serial.println(conta);