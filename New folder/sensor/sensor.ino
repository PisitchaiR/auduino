#include <BH1750FVI.h>
#include <Servo.h>
Servo servox, servoy;
Servo myservo;
BH1750FVI light(BH1750FVI::k_DevModeContLowRes);
int luxa, luxb, luxc, luxd;
int a, b, c, d; //ฝั่งซ้าย
int e=0;
int v, w, x, y, z; //ฝั่งขวา
int i; //ของfor loop
int sum = 0; //ของfor loop
int max1 = 0; //ของfor loop
int max2 = 0;
void setup() {
  servox.attach(A0);
  servoy.attach(A1);
  Serial.begin(9000);
  light.begin();
  sera();
  serb();
  serc();
  serd();
  sere();
  serv();
  serw();
  serx();
  sery();
  serz();
  delay(2000);
  Serial.println("Calculation starts....\n");
  calculate();
}
void calculate() {
  int light[10];
  light[0] = a;
  light[1] = b;
  light[2] = c;
  light[3] = d;
  light[4] = e;
  light[5] = v;
  light[6] = w;
  light[7] = x;
  light[8] = y;
  light[9] = z;


  for (i = 0; i <=9   ; i++) {
    Serial.println(light[i]);
  }
  Serial.println("ok\n");
  delay(2000);
  for (i = 0; i <= 9; i++)
  {
    if (light[i] == max1)
    {
      
      Serial.println(light[i]);
      Serial.println(max1);
      max1 = light[i];
      Serial.println("..................................................");
      Serial.println(max1);
      Serial.println("i=max\n");
      Serial.println("..................................................");

    }
    else if (light[i] > max1)
    {
      
      Serial.println(light[i]);
      Serial.println(max1);
      max1 = light[i];
      Serial.println("..................................................");
      Serial.println(max1);
      Serial.println("i>max\n");
      Serial.println("..................................................");
      
    }
    else if (light[i] < max1)
    {
      
      Serial.println(light[i]);
      Serial.println(max1);
      max1 = max1;
      Serial.println("..................................................");
      Serial.println(max1);
      Serial.println("i<max\n");
      Serial.println("..................................................");
      
    }
  }
  delay(2000);
  Serial.println(max1);
  if (max1 == a)
  {
    Serial.println("zero");
    servoy.write(100);
    servox.write(0);
    Serial.println("return 0");
    delay(2000);
    
  }
  else if (max1 == b)
  {
    Serial.println("45");
    servoy.write(100);
    servox.write(45);
//    for(i=0;i<=45;i+5){servox.write(i); delay(10);}
    Serial.println("return 45");
    delay(2000);
    
  }
  else if (max1 == c)
  {
    Serial.println("90");
    servoy.write(100);
    servox.write(90);
    Serial.println("return 90");
    delay(2000);
   
  }
  else if (max1 == d)
  {
    Serial.println("135");
    servoy.write(100);
    servox.write(135);
    Serial.println("return 135");
    delay(2000);
    
  }
  else if (max1 == e)
  {
    Serial.println("180");
    servoy.write(100);
    servox.write(180);
    Serial.println("return 180");
    delay(2000);
    
  }
  else if (max1 == v)
  {
    Serial.println("zero");
    servoy.write(20);
    servox.write(180);
    Serial.println("return 0");
    delay(2000);
    
  }
  else if (max1 == w)
  {
    Serial.println("45");
    servoy.write(20);
    servox.write(135);
//    for(i=0;i<=45;i+5){servox.write(i); delay(10);}
    Serial.println("return 45");
    delay(2000);
    
  }
  else if (max1 == x)
  {
    Serial.println("90");
    servoy.write(20);
    servox.write(90);
    Serial.println("return 90");
    delay(2000);
   
  }
  else if (max2 == y)
  {
    Serial.println("135");
    servoy.write(20);
    servox.write(45);
    Serial.println("return 135");
    delay(2000);
    
  }
  else if (max1 == z)
  {
    Serial.println("180");
    servoy.write(20);
    servox.write(0);
    Serial.println("return 180");
    delay(2000);
    
  }
}
void sera() {
  uint16_t luxa = light.GetLightIntensity();
  servoy.write(100); //setservo
  servox.write(0);  //setservo
  delay(1000);
  a = luxa;
  delay(2000);
  Serial.println("luxa");
  Serial.println(a);
}
void serb() {
  uint16_t luxb = light.GetLightIntensity();
  servox.write(45);
//  for(i=0;i<=45;i++){servox.write(i); delay(10);}
  b = luxb;
  delay(2000);
  Serial.println("luxb");
  Serial.println(b);
}
void serc() {
  uint16_t luxc = light.GetLightIntensity();
  servox.write(90);
  c = luxc;
  delay(2000);
  Serial.println("luxc");
  Serial.println(c);
}
void serd() {
  uint16_t luxd = light.GetLightIntensity();
  servox.write(135);
  d = luxd;
  delay(2000);
  Serial.println("luxd");
  Serial.println(d);
}
void sere() {
  uint16_t luxe = light.GetLightIntensity();
  servox.write(180);
  e =luxe ;
  delay(2000);
  Serial.println("luxe");
  Serial.println(e);
}
void serv() {
  uint16_t luxv = light.GetLightIntensity();
  servoy.write(30); //setservo
  servox.write(180);  //setservo
  delay(1000);
  v = luxv;
  delay(2000);
  Serial.println("luxv");
  Serial.println(v);
}
void serw() {
  uint16_t luxw = light.GetLightIntensity();
  servoy.write(30); //setservo
  servox.write(135);  //setservo
  delay(1000);
  w = luxw;
  delay(2000);
  Serial.println("luxw");
  Serial.println(v);
}
void serx() {
  uint16_t luxx = light.GetLightIntensity();
  servoy.write(30); //setservo
  servox.write(90);  //setservo
  delay(1000);
  x = luxx;
  delay(2000);
  Serial.println("luxx");
  Serial.println(x);
}
void sery() {
  uint16_t luxy = light.GetLightIntensity();
  servoy.write(30); //setservo
  servox.write(45);  //setservo
  delay(1000);
  y = luxy;
  delay(2000);
  Serial.println("luxy");
  Serial.println(y);
}
void serz() {
  uint16_t luxz = light.GetLightIntensity();
  servoy.write(30); //setservo
  servox.write(0);  //setservo
  delay(1000);
  z = luxz;
  delay(2000);
  Serial.println("luxz");
  Serial.println(z);
}
void set0() {
  servox.write(0);
}
void loop() {

}
