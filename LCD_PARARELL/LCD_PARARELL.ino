#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("HELLO, CS.JUNG");
  lcd.setCursor(0,1);
  lcd.print("WELCOME.");
  delay(3000);
  
  for (int posCnt = 0; posCnt < 16; posCnt++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  for (int posCnt = 0; posCnt < 32; posCnt++) {
    lcd.scrollDisplayRight();
    delay(300);    
  }

  for (int posCnt = 0; posCnt < 16; posCnt++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  for(int i = 0; i < 10; i++) {
    lcd.clear();
    delay(300);
    lcd.setCursor(0,0);
    lcd.print("HELLO, CS.JUNG");
    lcd.setCursor(0,1);
    lcd.print("WELCOME.");
      delay(300);
    }
    lcd.clear();
  }
