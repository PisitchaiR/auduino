#include <Servo.h>
Servo ganx;
Servo gany;
void setup()
{
 ganx.attach(A1);
 ganx.write(0);
 delay(2000);
 gany.attach(A0);
 gany.write(50);
 delay(2000);

}
void loop(){
}
