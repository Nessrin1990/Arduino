
// une sortie analogique sur la broche 6
int sortieAnalogique = 3;

void setup()
{
    pinMode(sortieAnalogique, OUTPUT);
}

void loop()
{
    // on met un rapport cyclique de 107/255 = 42 %
    analogWrite(sortieAnalogique, 10);
    delay(2000);
    
analogWrite(sortieAnalogique, 100);

    delay(2000);
}
