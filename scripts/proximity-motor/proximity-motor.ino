/* 

 Motor responding to proximity sensor

 Adapted from Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#include <Wire.h>
#include "Adafruit_VCNL4010.h"

Adafruit_VCNL4010 vcnl;

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  
  if (! vcnl.begin()){
    Serial.println("Sensor not found :(");
    while (1);
  }
  
}

void loop() {

  pos = map(vncl.readProximity(), 0, 65535, 0, 360);
  myservo.write(pos);
  delay(15);
}
