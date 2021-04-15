#include <popx2.h>	// POP-X2 Board
int R,RC,L,LC;
void setup() 
{
  OK();
  servo(1,108);
  delay(2000);
  servo(2,60);
  delay(3000);
  servo(1,40);
  delay(500);
  servo(1,108);
  delay(1000);
  servo(2,0);

void loop() {
 R=analog(4);
  RC=analog(2);
L=analog(1);
  LC=analog(1);
 glcd(1,1,"R=%d",analog(4));
  glcd(2,1,"RC=%d",analog(2));
  glcd(3,1,"L=%d",analog(1));
  glcd(4,1,"LC=%d",analog(1));
}
