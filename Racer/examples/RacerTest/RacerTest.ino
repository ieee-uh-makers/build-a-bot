#include "Racer.h"

Racer racer(3, 5, 6, 7);

void setup(){}

void loop(){
  racer.forwards(1.0);
  delay(1000);
  racer.backwards(0.5);
  delay(2000);
  racer.left(1.0);
  delay(1000);
  racer.right(1.0);
  delay(1000);
  racer.stop();
  delay(1000);
}
