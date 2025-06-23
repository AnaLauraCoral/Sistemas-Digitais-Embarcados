#define pin_led 8
#define pin_botao 2
#define INTERVALO 500
int conta = 0;
int aux = 0;
unsigned long tempo = 0;
bool estado = 0;
void setup() {
pinMode (pin_botao, INPUT_PULLUP);
pinMode (pin_botao, OUTPUT);
}

void loop() {
 tempo = millis();
 if (!(digitalRead(pin_botao = 1) && (help == 0){
  aux = 1;
  conta ++;
 }
 else{
  aux = 0
 }
}