#include "GY521.h"

GY521::GY521(){}

void GY521::begin(){
  Wire.begin();
  Wire.beginTransmission(0x68);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
}

IMU GY521::sample(){
  IMU imu;

  Wire.beginTransmission(0x68);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(0x68, 12, true);

  imu.A_X = Wire.read()<<8|Wire.read();
  imu.A_Y = Wire.read()<<8|Wire.read();
  imu.A_Z = Wire.read()<<8|Wire.read();

  imu.G_X = Wire.read()<<8|Wire.read();
  imu.G_Y = Wire.read()<<8|Wire.read();
  imu.G_Z = Wire.read()<<8|Wire.read();

  return imu;
}
