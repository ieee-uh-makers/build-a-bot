#include "GY521.h"

GY521 imu;

void setup(){
  imu.begin();
  Serial.begin(9600);
}

void loop(){
  IMU sample = imu.sample();

  Serial.print("Accelerometer: ");
  Serial.print("X = "); Serial.print(sample.A_X);
  Serial.print(" | Y = "); Serial.print(sample.A_Y);
  Serial.print(" | Z = "); Serial.println(sample.A_Z);

  Serial.print("Gyroscope: ");
  Serial.print("X = "); Serial.print(sample.G_X);
  Serial.print(" | Y = "); Serial.print(sample.G_Y);
  Serial.print(" | Z = "); Serial.println(sample.G_Z);
  Serial.println(" ");
}
