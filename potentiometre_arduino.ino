int ledpin =9;
int analogPin= A0;
int val =0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin ,OUTPUT);
pinMode(analogPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(analogPin);//lecture valeur analogiqued e l'entre analogique
val = map(val,0,1023,0,180);
analogWrite(ledpin,val);//lecture valeur analogiqued e de (0,1023)


}
