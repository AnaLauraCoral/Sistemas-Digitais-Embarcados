#define pin_led1 8
#define pin_led2 9
#define pin_botaoA 2
#define pin_botaoB 3

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);

  if ((botaoA == 1) && (botaoB == 0)) {
  digitalWrite(pin_led1, 1);
  digitalWrite(pin_led2, 0);

}

if ((botaoA == 0) && (botaoB == 0)) {
  digitalWrite(pin_led1, 1);
  digitalWrite(pin_led2, 1);

}

if ((botaoA == 0) && (botaoB == 1)) {
  digitalWrite(pin_led1, 0);
  digitalWrite(pin_led2, 1);

}

if ((botaoA == 1) && (botaoB == 1)) {
  digitalWrite(pin_led1, 0);
  digitalWrite(pin_led2, 0);

}

}
