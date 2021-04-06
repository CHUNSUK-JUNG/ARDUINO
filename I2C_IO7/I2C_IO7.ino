#include <Wire.h>

void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop() {
  Wire.beginTransmission(0x25); 
  Wire.write(0x00);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x01);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x02);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x04);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x08);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x10);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x20);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x40);       
  Wire.endTransmission(); 
  delay(1000);

  Wire.beginTransmission(0x25); 
  Wire.write(0x80);       
  Wire.endTransmission(); 
  delay(1000);
}
