#include <Wire.h>

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  while (!Serial); 
  Serial.println("\nI2C Scanner");
}

void loop()

{
  byte error, address;
  int nDevices=0;
  Serial.println("Scanning...");
  for(address = 1; address < 127; address++ )
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    // byte:전송 상태를 나타내는 지정된 값을 반환한다. 지정된 값은 다음과 같다.
    // 0:전송성공 
    // 1:데이터 버퍼의 길이가 허용 범위를 초과하였을 경우
    // 2:주소 전송 단계에서 NACK 응답이 발생한 경우, 즉 해당 주소 값을 가진 슬레이브 기기가 없는 경우
    // 3:데이터 전송 단계에서 NACK 응답이 발생한 경우, 데이터 전송이 실패한 경우
    // 4:그 외의 오류가 발생한 경우
    if (error==0)
    {
      Serial.print("I2C device found at address 0x");
      if (address<16) Serial.print("0");
      Serial.print(address,HEX);
      Serial.println(" !");
      nDevices++;
    }
    else if (error==4)
    {
      Serial.print("Unknow error at address 0x");
      if (address<16) Serial.print("0");
      Serial.println(address,HEX);
    } 
  }
  
  if (nDevices == 0) Serial.println("No I2C devices found\n");
  else Serial.println("done\n");
  delay(5000);
}
