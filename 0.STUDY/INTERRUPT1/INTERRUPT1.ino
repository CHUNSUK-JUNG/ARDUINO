int ledpin1=12, ledpin2=13;
int ledstate1=LOW, ledstate2=LOW, count=0;
long previousmillis=0;
long interval=1000;

void setup()
{
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

void loop()
{
  unsigned long currentmills=millis();
  if(currentmills-previousmillis >= interval)
  {
    previousmillis = currentmills;
    if(ledstate1==LOW) ledstate1=HIGH;
    else ledstate1=LOW;
    
    ++count;
    
    if(count%2==0) // % 뒤의 숫자 만큼 늦게 작동함. 위의 LED가 켜짐 또는 꺼짐을 1회로 카운팅함.
    if(ledstate2==LOW) ledstate2=HIGH;
    else ledstate2=LOW;
    digitalWrite(ledpin2,ledstate2);
    
    digitalWrite(ledpin1,ledstate1);
  }
}
