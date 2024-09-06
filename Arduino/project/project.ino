#include <Servo.h>

Servo servoMotor;

void setup() 
{
  Serial.begin(9600);
  servoMotor.attach(2);
  servoMotor.write(90);
}

void loop() {
  if (Serial.available() > 0) 
  {
    String command = Serial.readStringUntil('\n');

    if (command == "ON")
    {
      servoMotor.write(180);
      Serial.println("Servo motor turned ON");
    } 
    else if (command == "OFF") 
    {
      servoMotor.write(90);
      Serial.println("Servo motor turned OFF");
    }
  }
}
