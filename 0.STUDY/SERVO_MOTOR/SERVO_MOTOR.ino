#include <Servo.h> 

Servo servo;
int servoPin = 9;
int angle = 0; 

void setup() 
{
  servo.attach(servoPin);
} 

void loop() 
{
  angle=map(analogRead(A0),0,1023,0,255);
  servo.write(angle); 
  delay(15); 
} 
