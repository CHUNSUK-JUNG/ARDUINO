int col[8]={A2,A3,A4,A5,2,3,4,5};
int row[8]={6,7,8,9,10,11,12,13};
                                       
void setup()
{
  for(int i=0;i<8;i++)
  {
    pinMode(col[i],OUTPUT);
    pinMode(row[i],OUTPUT);    
  }
}

void clear()
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(col[i],HIGH); // 0->1(IC.NOT CURCUIT)->1(DOT_MATRIX).5V.OFF 
    digitalWrite(row[i],HIGH); // 0->0.OFF
  }
    
}

void loop()
{
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
      clear();
      digitalWrite(row[i],LOW); // 0->0.OFF, 1->1.ON
      digitalWrite(col[j],HIGH); // 0->1->1.OFF   1->0->0.ON
      delay(300); 
    }
  }
  
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
      clear();
      digitalWrite(row[i],HIGH); // 0->0.OFF, 1->1.ON
      digitalWrite(col[j],LOW); // 0->1->1.OFF   1->0->0.ON
      delay(300); 
    }
  }
}
