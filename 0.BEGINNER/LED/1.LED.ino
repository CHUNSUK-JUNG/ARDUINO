


















































































































































































































































































































































































































































































































































































































































int a[]={8,9,10,11,12,13};
int dt=300;

void setup() 
{
for(int i=0;i<6;i++)
  {
    pinMode(a[i],OUTPUT);
  }
  Serial.print(9600);
}

void loop()
{
  for(int i=0;i<5;i++)
  {
    if(i==0)
    {
     for(int i=0;i<6;i++)
     { 
      digitalWrite(a[i],HIGH);
      delay(dt);
      digitalWrite(a[i],LOW);
      delay(dt);
     }
    }
    else if(i==1)
    {
     for(int i=5;i>-1;i--)
     { 
      digitalWrite(a[i],HIGH);
      delay(dt);
      digitalWrite(a[i],LOW);
      delay(dt);
     }
    }
    else if (i==2)
    {
     for(int i=0;i<2;i++)
     { 
      digitalWrite(a[i],HIGH);
      delay(dt);
      digitalWrite(a[i],LOW);
      delay(dt);
      digitalWrite(a[i]+2,HIGH);
      delay(dt);
      digitalWrite(a[i]+2,LOW);
      delay(dt);
      digitalWrite(a[i]+4,HIGH);
      delay(dt);
      digitalWrite(a[i]+4,LOW);
      delay(dt);
     }
    }
    else if(i==3)
    {
     for(int i=0;i<2;i++)
     { 
      digitalWrite(a[i],HIGH);
      digitalWrite(a[i]+2,HIGH);
      digitalWrite(a[i]+4,HIGH);
      delay(dt);
      digitalWrite(a[i],LOW);
      digitalWrite(a[i]+2,LOW);
      digitalWrite(a[i]+4,LOW);
      delay(dt);
     }
    }
   else if(i==4)
   {
     for(int i=0;i<1;i++)
     { 
      digitalWrite(a[i],HIGH);
      digitalWrite(a[i]+1,HIGH);
      digitalWrite(a[i]+2,HIGH);
      digitalWrite(a[i]+3,HIGH);
      digitalWrite(a[i]+4,HIGH);
      digitalWrite(a[i]+5,HIGH);
      delay(dt);
      digitalWrite(a[i],LOW);
      digitalWrite(a[i]+1,LOW);
      digitalWrite(a[i]+2,LOW);
      digitalWrite(a[i]+3,LOW);
      digitalWrite(a[i]+4,LOW);
      digitalWrite(a[i]+5,LOW);
      delay(dt);
     }
   }
  }
}
