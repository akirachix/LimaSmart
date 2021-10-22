void waterLevel() 
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