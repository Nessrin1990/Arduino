
#include<Servo.h>
int servoPin = 9 ;
//cretae a servo object
Servo myservo;

void setup() {
  // put your setup code here, to run once:
myservo.attach(servoPin);
} 

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(0);
delay(1000);
myservo.write(90);
delay(1000);
myservo.write(180);
delay(1000);
} 
