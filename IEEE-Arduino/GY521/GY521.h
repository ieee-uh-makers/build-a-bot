#ifndef _GY521_H
#define _GY521_H

#include <Wire.h>

typedef struct struct_IMU {
  int16_t A_X;
  int16_t A_Y;
  int16_t A_Z;

  int16_t G_X;
  int16_t G_Y;
  int16_t G_Z;
} IMU;

class GY521{
private:
public:
  GY521();
  void begin();
  IMU sample();
};

#endif
