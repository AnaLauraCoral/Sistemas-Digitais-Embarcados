#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_botao1 2
#define pin_botao2 3

void setup() {
Serial.begin(9600);
pinMode(pin_led1,OUTPUT);
pinMode(pin_led2,OUTPUT);
pinMode(pin_led3,OUTPUT);
}

void loop() {
  
bool estado1 = digitalRead(pin_botao1); 
bool estado2 = digitalRead(pin_botao2); 
  if (estado1 && estado2 == 1) {
digitalWrite(pin_led1, HIGH);
    } else {
    digitalWrite(pin_led1, LOW);
    }
}

