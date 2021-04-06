#include <Stepper.h>

Stepper motor(200,2,3,4,5);

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);  
  motor.setSpeed(20);
}

void loop()
{
  int steps=200;
  motor.step(steps);  
}
