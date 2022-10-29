int pinMoteur1 = 2;
int pinMoteur2 = 4;

void setup() {

  pinMode(pinMoteur1,OUTPUT);
  pinMode(pinMoteur2,OUTPUT);
}

void loop() {
  digitalWrite(pinMoteur1,LOW);
  digitalWrite(pinMoteur2,LOW);
  delay(1000);
  digitalWrite(pinMoteur1,HIGH);
  digitalWrite(pinMoteur2,LOW);
  delay(1000);
  digitalWrite(pinMoteur1,LOW);
  digitalWrite(pinMoteur2,HIGH);
  delay(1000);

  
}
