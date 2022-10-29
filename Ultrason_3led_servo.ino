#include <Wire.h> //on ajoute la bibliothèque
#include <Servo.h>
int servoPin = 11 ;
//cretae a servo object
Servo myservo;
int trigPin = 2;
int echoPin = 4;
int ledPin1 = 8;
int ledPin2 = 9;
int ledPin3 = 10;
void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);

pinMode (trigPin, OUTPUT ) ;
pinMode (echoPin, INPUT ) ;
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(ledPin3,OUTPUT);
}

void loop() {
  //
  digitalWrite(trigPin,LOW);
  delayMicroseconds (2) ;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds (10) ;
  long measure = pulseIn(echoPin,HIGH);//receive 
  float distance_mm = measure/2.0 *340/1000 ;// convert to distance
 float distance_cm =  distance_mm / 10;
  Serial.print("distance:  ");
  Serial.print(distance_cm,2);
   Serial.println(( "cm "));
  if (distance_cm > 20)
  {
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  myservo.write(0);
delay(1000);
  }
  if ((distance_cm > 10)&&(distance_cm < 20))
  {
    digitalWrite(ledPin2,HIGH);
 digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin3,LOW);
  myservo.write(45);
delay(1000);
  }
   if (distance_cm < 10)
  {
    digitalWrite(ledPin3,HIGH);
     digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin1,LOW);
myservo.write(90);
delay(1000);
  }
}
