int pins[] = {8,9,10,11};
int nv = 0, pv=0;

void setup()
{
  for(int i=0;i<4;i++) pinMode(pins[i],OUTPUT);
}
void loop()
{
  int ain = analogRead(A5);
  nv = map(ain, 0, 1023, 0, 4);
  for(int i=0; i < nv; i++) digitalWrite(pins[i],HIGH);
  for(int i=nv; i < 4; i++) digitalWrite(pins[i],LOW);
}
