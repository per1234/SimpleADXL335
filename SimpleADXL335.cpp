/*
SimpleADXL335.h
Simple interface to ADXL335 3-axis accelerometer which provides easy access to 360 degree values of x,y,z data.
Code based on portions of USBgamepad example by Limor Fried (https://github.com/adafruit/USBgamepad/blob/master/teensySNES_test2/teensySNES_test2.pde)

Sam Sheffield (hello@samsheffield.com)
*/

#include "SimpleADXL335.h"

SimpleADXL335::SimpleADXL335(int xPin, int yPin, int zPin)
{
  _xPin = xPin;
  _yPin = yPin;
  _zPin = zPin;
  _minRaw = 265;
  _maxRaw = 402;
}

void SimpleADXL335::update(){

  _angleX = map(analogRead(_xPin), _minRaw, _maxRaw, -90, 90);
  _angleY = map(analogRead(_yPin), _minRaw, _maxRaw, -90, 90);
  _angleZ = map(analogRead(_zPin), _minRaw, _maxRaw, -90, 90);

  _x = RAD_TO_DEG * (atan2(-_angleY, -_angleZ) + PI);
  _y = RAD_TO_DEG * (atan2(-_angleX, -_angleZ) + PI);
  _z = RAD_TO_DEG * (atan2(-_angleY, -_angleX) + PI);
}

float SimpleADXL335::getX(){
  return _x;
}
float SimpleADXL335::getY(){
  return _y;
}
float SimpleADXL335::getZ(){
  return _z;
}