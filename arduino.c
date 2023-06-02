int l = 7;
void setup()
{
    // pinmode(pin,mode);
    pinMode(7, OUTPUT);
}
void loop()
{
    digitalWrite(l, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    delay(1000);
}