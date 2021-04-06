#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello JH.Son");
  lcd.setCursor(0,1);
  lcd.print("Welcome~~~~~");
  delay(5000);
}
void loop()
{
  for(int a=0;a<16;a++)
  {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);

  for(int a=0;a<16;a++)
  {
    lcd.scrollDisplayRight();
    delay(150);
  }
  delay(2000);

  for(int a=0;a<16;a++)
  {
    lcd.scrollDisplayRight();
    delay(150);
  }
  delay(1000);
  
  for(int a=0;a<16;a++)
  {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(2000);
  
}
