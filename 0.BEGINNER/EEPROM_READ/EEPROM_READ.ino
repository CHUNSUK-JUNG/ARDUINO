#include <EEPROM.h>

int address = 0;
byte value;

void setup()
{
  Serial.begin(9600);
  while(!Serial) {}
}

void loop()
{
  for(int i = 0; i < 1024; ++i)
  {
    value=EEPROM.read(address);
    Serial.print(address);
    Serial.print("\t");
    Serial.print(value, DEC);
    Serial.println();
    address = address + 1;
    if (address == EEPROM.length()) address = 0;
    delay(30);
  }
  while(true);
}
