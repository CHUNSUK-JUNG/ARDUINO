int dig[4]={A3,A2,A1,A0};
int fnd[8]={2,3,4,5,6,7,8,9};
byte fndv[10][8]=
{
  {0,0,0,0,0,0,1,1},
  {1,0,0,1,1,1,1,0},
  {0,0,1,0,0,1,0,1},
  {0,0,0,0,1,1,0,0},
  {1,0,0,1,1,0,0,1},
  {0,1,0,0,1,0,0,0},
  {0,1,0,0,0,0,0,1},
  {0,0,0,1,1,1,1,0},
  {0,0,0,0,0,0,0,1},
  {0,0,0,1,1,0,0,0}
};
int b=0;

void setup()
{
  for(int i=0;i<4;i++) pinMode(dig[i],OUTPUT);
  for(int j=0;j<8;j++) pinMode(fnd[j],OUTPUT);
  digitalWrite(9,HIGH);
}

void loop()
{
  for(int b=0;b<10;b++)
  {
    for(int i=0;i<4;i++) digitalWrite(dig[i],HIGH);
    for(int j=0;j<8;j++) digitalWrite(fnd[j],fndv[b][j]);
    delay(1000);
  }
}
