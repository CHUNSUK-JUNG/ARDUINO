String a="Welcome. ";
String b="My House.";
String c="";
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  c=a+b;
  Serial.println(c);
  delay(1000);
}
