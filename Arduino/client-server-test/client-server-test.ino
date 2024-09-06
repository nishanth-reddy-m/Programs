#include <Servo.h>
#define pin 10
const int up = 90;
const int down = 0;

Servo motor;

void setup() 
{
  Serial.begin(9600);
  motor.attach(pin);
}

void loop() 
{
  if(Serial.available()>0)
  {
    int input = Serial.parseInt();
    if(input == 1)
    {
      delay(3000);
      motor.write(up);
      Serial.println(input);
    }
    else
    {
      delay(3000);
      motor.write(down);
      Serial.println(input);
    }
  }
}
