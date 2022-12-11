#include <SevSeg.h>



 
// Include library
#include "SevSeg.h"
 
// Create object
SevSeg sevseg;
 
// Number of digits in display
byte numDigits = 4;
// Display select pins
byte digitPins[] = {10, 11, 12, 13};
// Display segment pins A,B,C,D,E,F,G,DP
byte segmentPins[] = {9, 2, 3, 5, 6, 8, 7, 4};
// Dropping resistors used
bool resistorsOnSegments = true;
// Display type
byte hardwareConfig = COMMON_CATHODE;
int loopco;
void setup() {
  // Start display object
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  // Set brightness
  sevseg.setBrightness(90);
}
 
void loop() {
 
  // Set the number to display
  sevseg.setNumber(6969);
  // Refresh the display
  sevseg.refreshDisplay();
}
