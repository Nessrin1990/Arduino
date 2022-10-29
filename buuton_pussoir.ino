int switchState;
void setup() {
  // put your setup code here, to run once:
 pinMode(4,OUTPUT);
 pinMode(8,INPUT);
 Serial.begin(9600); 

}

void loop() {
  switchState = digitalRead(8);
  Serial.print(switchState);
    if (switchState == 1) // teste si le bouton a une valeur de 1
        // ...on allume la LED
    {
        digitalWrite(4, HIGH);  // allume la LED
    }
 
    else
       
    {
        digitalWrite(4, LOW);  // éteint la LED
    }
}
