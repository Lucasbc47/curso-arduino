/*
Código ligar LED com botão + TESTES SERIAL
*/

// Variaveis
int estado_botao = 0; 
int led_conectado = 8;
int botao_conectado = 10;

int a = 2;
int b = 3;

/* 
OBS:
LED: no negativo
PushButton: no positivo
*/

void setup()
{
  pinMode(led_conectado, OUTPUT);
  pinMode(botao_conectado, INPUT);  
}

void loop()
{
  estado_botao = digitalRead(botao_conectado);
  
  if (estado_botao == HIGH){
    ligarLED();
  }
  
  else {
  	desligarLED();
  }

}

void ligarLED()
{
  Serial.begin(9600);
  digitalWrite(led_conectado, HIGH);
  
  if (a == b) {
	Serial.println("A == B");
  }
  else{
  	Serial.println("A != B");
  }
}

void desligarLED() {
  digitalWrite(led_conectado, LOW);
}
