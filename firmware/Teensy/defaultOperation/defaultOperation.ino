#include <Adafruit_SPITFT_Macros.h>
#include <Adafruit_GFX.h>
#include <gfxfont.h>
#include <Adafruit_SPITFT.h>

#include "GTernal.h"

//#define SerialPort Serial

GTernal myRobot;
int garbage[2];

void setup() {
  //SerialPort.begin(115200);
  //SerialPort.println("Starting...");
  Serial.begin(500000);
  Serial3.begin(500000);
  myRobot.SETUP();
  myRobot.rainbow(10);
  myRobot.turnOffLED();
  myRobot.measureDistances();
}

void loop() {
//  myRobot.getEncoderCounts(garbage);
//  myRobot.checkCharging();
//  if (myRobot.checkCharging()){ //If we're charging disable unnecessary current draws.
//    myRobot.disableIR();
//    myRobot.turnOffLED();
//  }
//  myRobot.checkBattVoltage();
//
 myRobot.jsonSerialRead();
//  const char* result = myRobot.measureDistances();
//  SerialPort.print(result); 
//  SerialPort.print("\n");
 myRobot.communicationCheck(500);
 myRobot.followCommands();

// For debugging purposes
//   myRobot.PIDMotorControl(1.0, 1.0);
//   myRobot.moveR(100);
//   myRobot.moveL(100);
//   delay(3000);
//   myRobot.noMotion();
//   delay(3000);
//   Serial.println(myRobot.checkBattVoltage());
//   Serial.println(myRobot.checkCharging());
}