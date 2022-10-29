int switchState1;
int switchState2;
int switchState3;
void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
    pinMode(7,INPUT);
 pinMode(8,INPUT);
  pinMode(9,INPUT);
 Serial.begin(9600); 

}

void loop() {
  switchState1 = digitalRead(7);
  Serial.print(switchState1);
    if (switchState1 == 1) // teste si le bouton a une valeur de 1
        // ...on allume la LED
    {
        digitalWrite(3, HIGH);  // allume la LED
    }
 
    else
    {
        digitalWrite(3, LOW);  // éteint la LED
    }
     switchState2 = digitalRead(8);
  Serial.print(switchState2);
    if (switchState2 == 1) // teste si le bouton a une valeur de 1
        // ...on allume la LED
    {
        digitalWrite(4, HIGH);  // allume la LED
    }
 
    else
       
    {
        digitalWrite(4, LOW);  // éteint la LED
    }
     switchState3 = digitalRead(9);
  
  Serial.print(switchState3);
    if (switchState3 == 1) // teste si le bouton a une valeur de 1
        // ...on allume la LED
    {
        digitalWrite(5, HIGH);  // allume la LED
    }
 
    else
       
    {
        digitalWrite(5, LOW);  // éteint la LED
    }
}
