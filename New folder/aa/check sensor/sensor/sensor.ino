   #include <popx2.h>	// POP-X2 Board
int L,R,LC,RC;
void setup()
{
}

void loop() 
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  glcd(4,1,"L=%d",L);
  glcd(5,1,"LC=%d",LC);
  glcd(6,1,"R=%d",R);
  glcd(7,1,"RC=%d",RC);
}
