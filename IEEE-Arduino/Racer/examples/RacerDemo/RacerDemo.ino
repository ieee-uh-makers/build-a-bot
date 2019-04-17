#include "Racer.h"

/* The arguments are the analog outs used for motor control
1. LEFT_A
2. LEFT_B
3. RIGHT_A
4. RIGHT_B
*/
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
