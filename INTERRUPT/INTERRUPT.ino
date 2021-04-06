int ledpin=13, swpin=2;
boolean ledon=false, swon=false;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(swpin, INPUT_PULLUP);
  attachInterrupt(0,swint,FALLING);
  digitalWrite(ledpin, LOW);
}

void loop()
{
  delay(100);
}

void swint()
{
  if(ledon==false)
  {
    digitalWrite(ledpin,HIGH);
    ledon=true;
  }
  else
  {
    digitalWrite(ledpin,LOW);
    ledon=false;
    
  }
}
