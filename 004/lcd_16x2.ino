#include <LiquidCrystal.h>

LiquidCrystal LCD(2, 3, 4, 5, 6, 7);

void setup()
{
  LCD.begin(16, 2);
  LCD.setCursor(0, 0);
  LCD.print("LSD Arduino");
  LCD.setCursor(0, 1);
  LCD.print("SENAI");
}

void loop() {}
