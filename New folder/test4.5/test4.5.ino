#include <popx2.h>	// POP-X2 Board
int R,L,LC,RC;
void reset()
{
   servo(1,108);
   delay(500);
   servo(2,0);
   delay(500);
}
void Line()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  if (RC<500&&LC>500)
  {
    fd2(90,60);  
  }
  else if (LC<500&&RC>500)    
  {
    fd2(60,90); 
  }
  else if(LC>500&&RC>500)
  {
    fd(90);  
  }
}
void distd()
{
    servo(1,108);
    delay(1000);
    servo(2,0);  
}
void distup()
{
  while(analog(0)<450)
  {
   L =analog(1);
   LC=analog(2);
   RC=analog(3);
   R =analog(4);
   if (RC<500)
   {
     fd2(70,50);  
   }
   else if (LC<500)    
   {
     fd2(50,70); 
   }
   else if(LC>500&&RC>500)
   {
     fd(70);  
   }
  }
    ao();
    servo(1,108);
    delay(1000);
    servo(2,45);
    delay(1000);
    servo(1,30);
    fd(40);
    sleep(20);
    ao();
}
void Stop()
{
  L=analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  while(L>500&&R>500)
  {
    Line();
    sound(300,30);
  }
  setTextSize(2);
  glcd(1,1,"Stop");
  ao();
  
}
void FFF()
{ 
  L=analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  while(L>500&&R>500)
  {
    Line();
    sound(300,30);
  } 
   fd(40);
   sleep(20);
   ao();
}
void FFR()
{ 
  L=analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  while(R>500)
 {
   Line();
   sound(300,30);
  } 
  fd(40);
  sleep(100);
  sound(100,30);
  ao();
}
void FFL()
{ 
  L=analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  while(L>500)
  {
    Line();
    sound(300,30);
  } 
  setTextSize(2);
  glcd(1,1,"straight");
  fd(40);
  sleep(100);
  sound(100,30);
  ao();
}    
void LL()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  while(L>500)
  {
    Line();
    sound(300,50);
  }
    if(L<500)
 {
     fd(60);
     sound(1500,100);
     while(analog(2)>500)
     {
       sl(65);
     }
     while(analog(2)<500)
     {
       sl(65);
     }
  }
    ao();
}
void RR()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  while(R>500)
  {
    Line();
    sound(300,30);
  }
  if(R<500)
 {
     fd(60);
     sound(1500,100);
     while(analog(3)>500)
     {
       sr(65);
     }
     while(analog(3)<500)
     {
       sr(65);
     }
  }
    ao();
}
void UL()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  bk(60);
  sleep(300);
  sl(60);
  sleep(350);
  ao();
}
void UR()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  bk(60);
  sleep(300);
  sr(60);
  sleep(350);
  ao();
}
void U()
{
  L =analog(1);
  LC=analog(2);
  RC=analog(3);
  R =analog(4);
  bk(60);
  sleep(300);
  sr(60);
  sleep(700);
  ao();
}
void setup() {
  OK();
  sound(100,30);
  reset();LL();RR();FFR();distup();U();LL();Stop();distd();
  UR();LL();FFR();LL();RR();LL();distup();U();RR();LL();RR();FFL();RR();RR();Stop();distd();
  U();LL();FFR();LL();RR();RR();LL();distup();U();RR();LL();LL();LL();FFL();RR();FFR();Stop();distd();
  U();
}
void loop() 
{ 
}
