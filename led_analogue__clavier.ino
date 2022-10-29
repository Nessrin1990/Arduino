char lireDonnes;
int sortieAnalogique = 3;
void setup() {
  // put your setup code here, to run once:
    pinMode(sortieAnalogique, OUTPUT);

Serial.begin(9600);

}
  
void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0)
{
lireDonnes = Serial.read();
Serial.print(lireDonnes);
if(lireDonnes == 'n'){
 analogWrite(sortieAnalogique, 10);
    delay(2000);
Serial.println("Led jaune s'allume");
}  
if(lireDonnes == 'i'){
 analogWrite(sortieAnalogique, 100);
    delay(2000);
Serial.println("Led rouge s'allume");

}
  }}
