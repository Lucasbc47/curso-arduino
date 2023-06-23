// Autor: Lucas Barboza Costa
// Importando a lib (Cristal Líquido)
// de 0000 até 9999
#include <LiquidCrystal.h>

// Pinos da Linha
LiquidCrystal LCD(2, 3, 4, 5, 6, 7);
// 2: RS | 3: EN | 4: D4 | 5: D5 | 6: D6 | 7: D7

int num = 0;

void setup()
{
  LCD.begin(16, 2);
}

void loop()
{
  /*
  /: divisão
  %: resto da divisão
  */
  
  LCD.setCursor(0, 1);
  
  LCD.print(num / 1000); // milhar
  LCD.print((num % 1000) / 100); // centena
  LCD.print((num % 100) / 10); // dezena
  LCD.print(num % 10); // unidade
  
  num++; 

  if (num > 9999) {
    num = 0; 
  }

  delay(150); 
}
