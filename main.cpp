//Sim_module
#include <SoftwareSerial.h>
SoftwareSerial gprsSerial(2,3);
#include <DHT.h> 
#define DHTPIN A0
DHT dht(DHTPIN, DHT11);


//waterlevel sensor
int FloatSensor=2;   
int led=13;           
int buttonState = 1; //reads pushbutton status 

//Soil_moisture
#define sensorPower 7
#define sensorPin 8
 
//SdCard
// include the SD library:
#include <SPI.h>
#include <SD.h>
 
// set up variables using the SD utility library functions:
Sd2Card card;
SdVolume volume;
SdFile root;
 
// change this to match your SD shield or module;
// Arduino Ethernet shield: pin 4
// Adafruit SD shields and modules: pin 10
// Sparkfun SD shield: pin 8
// MKRZero SD: SDCARD_SS_PIN
const int chipSelect = 10;
 

 
void setup() {
  SETUP();
}
void loop(){

 sim();
 waterLevel();
 soilMoisture();
  sdCard();
  
  }