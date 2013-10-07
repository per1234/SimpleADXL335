/*
SimpleADXL335.h
Simple interface to ADXL335 3-axis accelerometer which provides easy access to 360 degree values of x,y,z data.
Code based on portions of USBgamepad example by Limor Fried (https://github.com/adafruit/USBgamepad/)

Sam Sheffield (hello@samsheffield.com)
*/

#ifndef SimpleADXL335_h
#define SimpleADXL335_h

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class SimpleADXL335 {
  public:
    SimpleADXL335(int xPin, int yPin, int zPin); //
    float getX();
    float getY();
    float getZ();
    void update();
    void setRangeX(int minRawX, int maxRawX);
    void setRangeY(int minRawY, int maxRawY);
    void setRangeZ(int minRawZ, int maxRawZ);

  private:
    int _xPin;
    int _yPin;
    int _zPin;

    float _rawX;
    float _rawY;
    float _rawZ;

    float _angleX;
    float _angleY;
    float _angleZ;

    float _x;
    float _y;
    float _z;

    int _minRawX;
    int _maxRawX;
    int _minRawY;
    int _maxRawY;
    int _minRawZ;
    int _maxRawZ;

};



#endif