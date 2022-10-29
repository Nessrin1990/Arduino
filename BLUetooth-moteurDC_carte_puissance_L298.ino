
char t = 0;                //Variable for storing Incoming_value


int pinMoteur1 = 5;
int pinMoteur2 = 6;
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(4, OUTPUT);        //Sets digital pin 13 as output pin

pinMode(pinMoteur1,OUTPUT);
  pinMode(pinMoteur2,OUTPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0)
{
  t = Serial.read();
  Serial.println(t);
  }
if (t == 'F')
{
  digitalWrite(4,1);
  digitalWrite(pinMoteur1,HIGH);
  digitalWrite(pinMoteur2,LOW);

}
else if (t == 'B')
{
  digitalWrite(4,0);
    digitalWrite(pinMoteur2,HIGH);
  digitalWrite(pinMoteur1,LOW);
}

}
