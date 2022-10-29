
char t = 0;                //Variable for storing Incoming_value
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(4, OUTPUT);        //Sets digital pin 13 as output pin
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0)
{
  t = Serial.read();
  Serial.println(t);
  }
if (t == 'R')
{
  digitalWrite(4,1);
}
else if (t == 'L')
{
  digitalWrite(4,0);
}

}
