#include <SimpleADXL335.h>

SimpleADXL335 adxl335(A0, A1, A2); // create SimpleADXL335 object using X, Y, Z analog in pins

void setup(){
  Serial.begin(9600);
}

void loop(){
  adxl335.update(); // calling update() will get data from accelerometer
  Serial.print("X: ");
  Serial.print(adxl335.getX()); // getX() will get 360 degree on x-axis
  Serial.print(" Y: ");
  Serial.print(adxl335.getY()); // getY() will get 360 degree on y-axis
  Serial.print(" Z: ");
  Serial.println(adxl335.getZ()); // // getZ() will get z-axis data
  delay(100);
}



