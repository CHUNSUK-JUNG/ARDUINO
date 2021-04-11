#include <Wire.h>
void setup()
{
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
  Wire.beginTransmission(0x25); // transmit to device 0x27
  Wire.write(0xff);                    // High값으로 한다 
  Wire.endTransmission();    // stop transmitting
}

void loop()
{
  Wire.requestFrom(0x25, 1);    // request 6 bytes from slave device #8
  while (Wire.available())      // slave may send less than requested
  {
    uint8_t data = Wire.read(); // receive a byte as character
    Serial.println(data, HEX);         // print the character
  }
  delay(300);
}
