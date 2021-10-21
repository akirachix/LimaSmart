int FloatSensor=2;
int led=13;
int buttonState = 1; //reads pushbutton status
void setup()
{
Serial.begin(9600);
pinMode(FloatSensor, INPUT_PULLUP); //Arduino Internal Resistor 10K
pinMode (led, OUTPUT);
}
void loop()
{
buttonState = digitalRead(FloatSensor);
  if (buttonState == LOW)
  {
    digitalWrite(led, HIGH);
    Serial.println( "WATER LEVEL - HIGH");
  }
  else
  {
    digitalWrite(led, HIGH);
    Serial.println( "WATER LEVEL - LOW" );
  }
delay(1000);
}

