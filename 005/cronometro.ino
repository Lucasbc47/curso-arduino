// Cronometro SENAI
#include <LiquidCrystal.h>

LiquidCrystal LCD(2, 3, 4, 5, 6, 7);

int num = 0;

void setup()
{
  LCD.begin(16, 2);
  LCD.setCursor(3, 0);
  LCD.print("Cronometro");
}

void loop()
{
  int hours = num / 3600;
  int minutes = (num % 3600) / 60;
  int seconds = num % 60;

  LCD.setCursor(4, 4);
  
  if (hours < 10)
    LCD.print("0");
  
  LCD.print(hours);
  LCD.print(":");
  
  if (minutes < 10)
    LCD.print("0");
  
  LCD.print(minutes);
  LCD.print(":");
  
  if (seconds < 10)
    LCD.print("0");
  
  LCD.print(seconds);

  delay(1000);
  num++;

  if (num > 359999) {
    num = 0;
  }
}
