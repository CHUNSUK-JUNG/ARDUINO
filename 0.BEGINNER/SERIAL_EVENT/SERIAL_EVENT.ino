String str="";
String brt="";
String a="";
char in;
bool com=false;

void setup()
{
  pinMode(10,OUTPUT);
  Serial.begin(9600);
  str.reserve(200);
}

void loop()
{
  while (Serial.available())
  {
    char in = (char)Serial.read();
    str +=in;
    if (in == '\n') com = true;
  }  

  if (com)
  {
    brt=str.substring(0,1);
    if(brt.equals("1"))
      digitalWrite(10,HIGH);
    else if(brt.equals("0"))
      digitalWrite(10,LOW);
    else if(brt.equals("2"))
    {
      a=str.substring(1,3);
      analogWrite(10,a.toInt());
    }
    str="";
    com=false;
  }
}
