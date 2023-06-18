/*
Curso Arduino SENAI
Ex 3: pressionar botões com arduino.
Lucas Barboza Costa
*/

// Variaveis dos Pinos
const int ledPins[] = {13, 12, 11, 10, 9};
const int buttonPin = 8;
// Variaveis Estado
int buttonState;
bool ledState = false;

void setup()
{
  pinMode(buttonPin, INPUT);
  for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    if (ledState == false) {
      for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
      	digitalWrite(ledPins[i], HIGH);
      	ledState = true;
      }
    }
  }
    else{
      for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
      	digitalWrite(ledPins[i], LOW);
      	ledState = false;
      }
   }
}
  
