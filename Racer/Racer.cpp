#include "Racer.h"

Racer::Racer(unsigned char left_1, unsigned char left_2, unsigned char right_1, unsigned char right_2){
  this->left_1 = left_1;
  this->left_2 = left_2;
  this->right_1 = right_1;
  this->right_2 = right_2;
}

void Racer::differentialDrive(double straight, double turn){

  double translationalPart, rotationalPart;
  if(dabs(turn) >= dabs(straight)){
    // rotational part larger than or equal to translational
    rotationalPart = dabs(turn) / (dabs(turn) + dabs(straight));
    translationalPart = 1 - rotationalPart;
  }else{
    // translational part larger than rotational
    translationalPart =  dabs(straight) / (dabs(turn) + dabs(straight));
    rotationalPart = 1 - translationalPart;
  }

  int drive[2] = {0, 0};

  // Left
  drive[0] += translationalPart * straight;
  drive[0] += rotationalPart * turn;

  // Right
  drive[1] += translationalPart * straight;
  drive[1] += rotationalPart * -turn;

  int drive_left[] = {0, 0};
  int drive_right[] = {0, 0};

  if(drive[0] >= 0){
      drive_left[0] = (int) (dabs(drive[0]) * 255);
      drive_left[1] = 0;
  }else{
      drive_left[0] = 0;
      drive_left[1] = (int) (dabs(drive[0]) * 255);
  }

  if(drive[1] >= 0){
      drive_right[0] = (int) (dabs(drive[1]) * 255);
      drive_right[1] = 0;
  }else{
      drive_right[0] = 0;
      drive_right[1] = (int) (dabs(drive[1]) * 255);
  }

  analogWrite(left_1, drive_left[0]);
  analogWrite(left_2, drive_left[1]);
  analogWrite(right_1, drive_right[0]);
  analogWrite(right_2, drive_right[1]);

}

void Racer::steer(double straight, double turn){
  steer(straight, turn);
}

void Racer::forwards(double speed){
  steer(speed, 0);
}

void Racer::backwards(double speed){
  steer(-speed, 0);
}

void Racer::left(double speed){
  steer(0, speed);
}

void Racer::right(double speed){
  steer(0, -speed);
}

void Racer::stop(){
  steer(0, 0);
}
