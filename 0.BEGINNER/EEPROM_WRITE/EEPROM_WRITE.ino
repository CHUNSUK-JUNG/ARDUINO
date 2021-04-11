#include <EEPROM.h>

int addr=0, val=0;

void setup()
{
  Serial.begin(9600);
  Serial.println(EEPROM.length());
}

void loop()
{
  Serial.println("[STRAT]");
  for(int i=0;i<1024;i++)
  {
    EEPROM.write(addr,val);
    ++addr;
    ++val;
    if(addr==EEPROM.length()) addr=0;
    if(val>255) val=0;
    delay(100);
  }
  Serial.println("[END]");
  while(1);
}
