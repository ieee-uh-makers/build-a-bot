#ifndef _RACER_H
#define _RACER_H

#ifdef ARDUINO
#include "Arduino.h"
#elif ENERGIA
#include "Energia.h"
#endif

#define DABS
class Racer{

private:
  unsigned char left_1;
  unsigned char left_2;
  unsigned char right_1;
  unsigned char right_2;

  void differentialDrive(double straight, double turn);

  double dabs(double v){
    if (v < 0)
      return v*-1;
    return v;
  }

public:
  Racer(unsigned char left_1, unsigned char left_2, unsigned char right_1, unsigned char right_2);

  void forwards(double speed);
  void backwards(double speed);
  void left(double speed);
  void right(double speed);
  void stop();
  void steer(double x, double y);
};

#endif
