#include <Servo.h>

#define pin 4

int button[pin] = {6,7,8,9};
Servo motor[pin];

const int lock = 0;
const int unlock = 180;
const int cooldown = 5000;
int count=0;
int counter();
void operation(int i);
int press;

void setup()
{
  Serial.begin(9600);
  for(int i=0;i<pin;i++)
  {
    motor[i].attach(i+2);
    pinMode(button[i], INPUT);
  }
}

void loop()
{
  if(Serial.available() > 0)
  {
    int input = Serial.parseInt();
    if(input > 0 && input < pin)
    {
      operation(input);
    }
  }
}

void operation(int i)
{
  i--;
  while(true)
  {
    press = digitalRead(button[i]);
    if(press == 1)
    {
      int out = counter();
      if(out == 1)
      {
        motor[i].write(lock);
        Serial.println(i+1);
        break;
      }
      else
      {
        motor[i].write(unlock);
      }
    }
    else
    {
      count = 0;
    }
  }
}

int counter()
{
  count++;
  return count > cooldown ? 1 : 0;
}