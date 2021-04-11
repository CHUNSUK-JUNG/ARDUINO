void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  // 수신 버퍼에 읽지 않은 데이터가 몇 개인지를 반환한다.
  {
    char c=Serial.read();
    // 수신 버퍼에서 하나의 데이터를 읽어온다. 데이터는 수신된 순서대로 저장되고 읽어온다.
    Serial.print("rx: ");
    Serial.println(c);
  }
}
