#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x25,16,2);
LiquidCrystal_I2C lcd2(0x27,16,2);

void setup()
{
  lcd1.init();
  lcd1.backlight();
  lcd2.init();
  lcd2.backlight();
}


void loop()
{
  lcd1.setCursor(0,0);
  lcd1.print("Hello!");
  lcd2.setCursor(0,0);
  lcd2.print("Welcome");
  delay(3000);
  lcd1.setCursor(0,1);
  lcd1.print("World!");
  lcd2.setCursor(0,1);
  lcd2.print("CS.JUNG");
  lcd1.clear();
  lcd2.clear();
}
