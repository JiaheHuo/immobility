#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVOMIN 600   // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX 2400  // This is the 'maximum' pulse length count (out of 4096)
#define SERVOAVE 1500
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup() {
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(50);
  //pwm.setPWM(0, 0, SERVOAVE);
}

void loop() {

  for (uint16_t pl = 1000; pl < 2200; pl++) {
    pwm.setPWM(0, 0, pl);
  } // 初步抓附
  delay(3000);

  // for (uint16_t pl = 2000; pl < 2400; pl++) {
  //   pwm.setPWM(0, 0, pl);
  // } // 完全抓附
  // delay(3000);
  
  for (uint16_t pl = 2200; pl > 1000; pl--) {
    pwm.setPWM(0, 0, pl);
  } // 分离
  delay(2000);
}