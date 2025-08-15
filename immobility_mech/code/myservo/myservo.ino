#include <Servo.h>

#include <servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(0);
}

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(0);
delay(50);
myservo.write(90);
}
