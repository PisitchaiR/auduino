#include <popx2.h>	// POP-X2 Board
int R,L,LC,RC;
void Line()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  if (RC<500&&LC>500)
  {
    fd2(80,50);  
  }
  else if (LC<500&&RC>500)    
  {
    fd2(50,80); 
  }
  else if(LC>500&&RC>500)
  {
    fd(80);  
  }
}
void setup() {
  // user setup code below this line..
  OK();
}

void loop() 
{
  Line();

}
