SimpleADXL335:

A simple interface to ADXL335 3-axis accelerometer which provides easy access to -90~90 degree values of x,y,z data. No more, no less.


Installation:

To install this library, place the unzipped folder in your Arduino/libraries folder. If the folder does not exist, create it first.


Usage:

SimpleADXL335(X pin, Y pin, Z pin) - When creating a Simple ADXL335 object you must provide the 3 analog in pins for x, y, and z.

The setRange methods assume that you know the calibrated range of each axis. Adafruit.com has a nice sketch which will help you find this information out: http://learn.adafruit.com/adafruit-analog-accelerometer-breakouts/programming

void setRangeX(int minRangeX, int maxRangeX) - Used to set map minimum and maximum values on the X axis.

void setRangeY(int minRangeY, int maxRangeY) - Used to set map minimum and maximum values on the Y axis.

void setRangeZ(int minRangeZ, int maxRangeZ) - Used to set map minimum and maximum values on the Z axis.

void update() - used to get current x, y, z data.

float getX() - returns the 360 degree x-axis value.

float getY() - returns the 360 degree y-axis value.

float getZ() - returns the z-axis value.


See example sketch for full usage.


Contact:

Sam Sheffield (hello@samsheffield.com)