  int ledR=4;
  int ledY=2;
  int ledG=3;


void setup() {
  // put your setup code here, to run once:

pinMode(ledR,OUTPUT);
pinMode(ledY,OUTPUT);
pinMode(ledG,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledR,HIGH);
  digitalWrite(ledY,LOW);
  digitalWrite(ledG,LOW);
  delay(4000);
  digitalWrite(ledR,LOW);
  digitalWrite(ledY,HIGH);
  digitalWrite(ledG,LOW);
  delay(2000);
  digitalWrite(ledR,LOW);
  digitalWrite(ledY,LOW);
  digitalWrite(ledG,HIGH);
  delay(3000);
  


}
