#include <popx2.h>	// POP-X2 Board
int dist,distant;
void setup() 
{
   
}

void loop() 
{
  OK();
  glcd(1,1,"distant = %d",analog(0));
  while(analog(0)<450)
  {
    fd(60);
  }
    ao();
    servo(1,108);
    delay(2000);
    servo(2,45);
    delay(3000);
    servo(1,30);
    delay(2000);
    servo(1,108);
    delay(1000);
    servo(2,0);  
}
