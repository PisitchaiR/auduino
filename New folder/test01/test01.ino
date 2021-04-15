#include <Servo.h>
#include <stdio.h>
Servo myservo;
int a=333;
int b=333;
int c=555;
int d=444;
int light[8];
int i;
int sum = 0;
int max1 = 0;

void calculate(){
 light[0]=a;
 light[1]=b;
 light[2]=c;
 light[3]=d;

 for(i=0;i<=3;i++){
   sum+= light[i];
   Serial.println(light[i]);
 }
 Serial.println("ok\n");
 for(i=0;i<=2;i++)
 {
     if(light[i]==max1)
     {
       max1=max1;
       Serial.println(light[i]);
       Serial.println(max1);
       Serial.println("i=i\n");
       }
       else if (light[i]>max1)
       {
         max1 = light[i];
         Serial.println(light[i]);
         Serial.println(max1);
         Serial.println("i>i+1\n");
       }
       else if (light[i]<max1)
       {
         max1 = max1;
         Serial.println(light[i]);
         Serial.println(max1);
         Serial.println("i<i+1\n");
       }
 }
      Serial.println (i);
      Serial.println(max1);
      if(max1==a)
      {
        Serial.println("zero");
      }
      else if(max1==b)
      {
        Serial.println("45");
      }
      else if(max1==c)
      {
        Serial.println("90");
      }
      else if(max1==d)
      {
        Serial.println("135");
      }
}

void setup()
{
  Serial.begin(9600)
}
void loop(){
  
}
