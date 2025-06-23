#define led_1 8
#define INTERVALO 1000
unsigned long tempo = 0;
bool estado = 0;
void setup() {
pinMode (led_1, OUTPUT);
}

void loop() {
unsigned long atual = millis();
if ((atual - tempo) >= INTERVALO) {
  estado = !estado;
  digitalWrite(8, estado);
  tempo = atual;
}

}
