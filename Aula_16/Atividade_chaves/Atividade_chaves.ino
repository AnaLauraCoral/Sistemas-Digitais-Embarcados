#define pin_led1 8
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4
void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);

}

void loop() {
bool botaoA = digitalRead(pin_botaoA);
bool botaoB = digitalRead(pin_botaoB);
bool botaoC = digitalRead(pin_botaoC);

  if (((botaoA == 1) && (botaoB == 0)) && (botaoC == 0)) {
  digitalWrite(pin_led1, 1);

  }
  if (((botaoA == 0) && (botaoB == 1)) && (botaoC == 0)) {
  digitalWrite(pin_led1, 1);

  }
  if (((botaoA == 0) && (botaoB == 0)) && (botaoC == 1)) {
  digitalWrite(pin_led1, 1);

  }

  if (((botaoA == 1) && (botaoB == 1)) && (botaoC == 0)) {
  digitalWrite(pin_led1, 0);

  }
   if (((botaoA == 0) && (botaoB == 1)) && (botaoC == 1)) {
  digitalWrite(pin_led1, 0);

   }
  if (((botaoA == 1) && (botaoB == 0)) && (botaoC == 1)) {
  digitalWrite(pin_led1, 0);

   }
     if (((botaoA == 1) && (botaoB == 1)) && (botaoC == 1)) {
  digitalWrite(pin_led1, 1);

   }
    if (((botaoA == 0) && (botaoB == 0)) && (botaoC == 0)) {
  digitalWrite(pin_led1, 0);

  }
}
