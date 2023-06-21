// Autor: Lucas Barboza Costa
// Curso Arduino SENAI 
// Semáforo

// PINOS DO CARRO
int VERMELHO_CARRO = 11;
int AMARELO_CARRO = 10;
int VERDE_CARRO = 9;

// PINOS DO PEDESTRE
int VERMELHO_PEDESTRE = 7;
int VERDE_PEDESTRE = 6;

void setup() {
  // Configurando pinos de saída
  pinMode(VERMELHO_CARRO, OUTPUT);
  pinMode(AMARELO_CARRO, OUTPUT);
  pinMode(VERDE_CARRO, OUTPUT);
  pinMode(VERMELHO_PEDESTRE, OUTPUT);
  pinMode(VERDE_PEDESTRE, OUTPUT);
}

void loop() {
  digitalWrite(VERMELHO_CARRO, 0);
  digitalWrite(AMARELO_CARRO, 0);
  
  digitalWrite(VERDE_CARRO, 1);
  digitalWrite(VERMELHO_PEDESTRE, 1);
  digitalWrite(VERDE_PEDESTRE, 0);
  
  delay(5000);  

  digitalWrite(VERMELHO_CARRO, 0);
  digitalWrite(AMARELO_CARRO, 1);
  digitalWrite(VERDE_CARRO, 0);
  
  digitalWrite(VERMELHO_PEDESTRE, 1);
  digitalWrite(VERDE_PEDESTRE, 0);
  
  delay(2000);  


  digitalWrite(VERMELHO_CARRO, 1);
  digitalWrite(AMARELO_CARRO, 0);
  digitalWrite(VERDE_CARRO, 0);
  
  digitalWrite(VERMELHO_PEDESTRE, 0);
  digitalWrite(VERDE_PEDESTRE, 1);
  delay(5000);  


  digitalWrite(VERMELHO_CARRO, 1);
  digitalWrite(AMARELO_CARRO, 0);
  digitalWrite(VERDE_CARRO, 0);
  
  // Laço para desligar e ligar o vermelho
  for (int i = 0; i < 5; i++) {
    digitalWrite(VERMELHO_PEDESTRE, 0);
    delay(500);
    digitalWrite(VERMELHO_PEDESTRE, 1);
    delay(500);
  }

}
