/*
SimpleADXL335.h
Simple interface to ADXL335 3-axis accelerometer which provides easy access to 360 degree values of x,y,z data.
Code based on portions of USBgamepad example by Limor Fried (https://github.com/adafruit/USBgamepad/)

Sam Sheffield (hello@samsheffield.com)
*/

#include "SimpleADXL335.h"

SimpleADXL335::SimpleADXL335(int xPin, int yPin, int zPin){
  _xPin = xPin;
  _yPin = yPin;
  _zPin = zPin;
}

void SimpleADXL335::setRangeX(int minRawX, int maxRawX){
  _minRawX = minRawX;
  _maxRawX = maxRawX;
}

void SimpleADXL335::setRangeY(int minRawY, int maxRawY){
  _minRawY = minRawY;
  _maxRawY = maxRawY;
}

void SimpleADXL335::setRangeZ(int minRawZ, int maxRawZ){
  _minRawZ = minRawZ;
  _maxRawZ = maxRawZ;
}

void SimpleADXL335::update(){

  _angleX = map(analogRead(_xPin), _minRawX, _maxRawX, -90, 90);
  _angleY = map(analogRead(_yPin), _minRawY, _maxRawY, -90, 90);
  _angleZ = map(analogRead(_zPin), _minRawZ, _maxRawZ, -90, 90);
}

float SimpleADXL335::getX(){
  return _angleX;
}
float SimpleADXL335::getY(){
  return _angleY;
}
float SimpleADXL335::getZ(){
  return _angleZ;
}