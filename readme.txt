SimpleADXL335:

A simple interface to ADXL335 3-axis accelerometer which provides easy access to 360 degree values of x,y,z data. No more, no less.


Installation:

To install this library, place the unzipped folder in your Arduino/libraries folder. If the folder does not exist, create it first.


Usage:

SimpleADXL335(X pin, Y pin, Z pin) - When creating a Simple ADXL335 object you must provide the 3 analog in pins for x, y, and z.

void update() - used to get current x, y, z data.

float getX() - returns the 360 degree x-axis value.

float getY() - returns the 360 degree y-axis value.

float getZ() - returns the z-axis value.


See example sketch for full usage.
