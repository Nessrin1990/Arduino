/* Contrôler l'angle de rotation avec un potentiomètre. */
#include <Servo.h>  //on ajoute la bibliothèque

Servo myservo;   // on crée un objet servo: servoMoteur

int potin = 0;
int val;

void setup() {
   Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  val = analogRead(potin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  Serial.print("Angle:  ");
  Serial.println(val);
  delay(1000);
}
