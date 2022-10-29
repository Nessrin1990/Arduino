char lireDonnes;
void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);

}
  
void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0)
{
lireDonnes = Serial.read();
Serial.print(lireDonnes);
if(lireDonnes == 'n'){
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
Serial.println("Led jaune s'allume");
}  
if(lireDonnes == 'i'){
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(6,LOW);
Serial.println("Led rouge s'allume");

}
  if(lireDonnes == 'a'){

digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
Serial.println("Led verte s'allume");

}}}
