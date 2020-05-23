// red wire from the servo is the power
// brown wire is ground
// orange wire is for control
#include <Servo.h>
int servopin=9;
int servopostion=90;
Servo myServo;   // create servo object to control a myservo just like my digitalwrite 




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servopin); // attach servo to a pin

}

void loop() {
  // put your main code here, to run repeatedly:
    myServo.write(servopostion);
    Serial.println(servopostion);
    delay (500);

}
