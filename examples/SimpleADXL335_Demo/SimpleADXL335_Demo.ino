#include <SimpleADXL335.h>

SimpleADXL335 xyz(0, 1, 2); // create SimpleADXL335 object using X, Y, Z analog in pins 0, 1, and 2.

void setup(){
  Serial.begin(9600);

  // Use calibration sketch from Adafruit to get XYZ ranges(http://learn.adafruit.com/adafruit-analog-accelerometer-breakouts/programming)
  xyz.setRangeX(409, 614);
  xyz.setRangeY(400, 603);
  xyz.setRangeZ(419, 621);
}

void loop(){
  xyz.update(); // calling update() will get data from accelerometer
  Serial.print("X: ");
  Serial.print(xyz.getX()); // getX() will get -90~90 degree on x-axis
  Serial.print(" Y: ");
  Serial.print(xyz.getY()); // getY() will get -90~90 degree on y-axis
  Serial.print(" Z: ");
  Serial.println(xyz.getZ()); // // getZ() will get z-axis data
  delay(100);
}



