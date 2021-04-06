#include <PCF8574.h>
#include <Wire.h>
 
PCF8574 PCF_01(0x3F);     //객체 생성(I2C 주소 : 0x3F-바꿔야함)
PCF8574 PCF_02(0x25);     //객체 생선(I2C 주소 : 0x27-기존 주소, A1을 연결하면서 바뀐 주소가 25임)
 
void setup()
{
  Serial.begin(9600);
  Serial.print("PCF8574_test version: ");
  Serial.println(PCF8574_LIB_VERSION);
  
  PCF_01.begin();
  PCF_02.begin();
}
 
void loop()
{
  PCF_01.write8(0xFF);        //PCF_01에 0xFF 출력, LED 켜기
  PCF_02.write8(0xFF);
  delay(200);
  
  PCF_01.write8(0x00);        //PCF_01에 0x00 출력, LED 끄기
  PCF_02.write8(0x00);
  delay(200);
}
