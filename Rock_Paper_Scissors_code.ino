//Electronic Buzz
#include <Servo.h>
volatile long int A;
float checkdistance_11_10() 
{
digitalWrite(11, LOW);
delayMicroseconds(2);
digitalWrite(11, HIGH);
delayMicroseconds(10);
digitalWrite(11, LOW);
float distance = pulseIn(10, HIGH) / 58.00;
delay(10);
return distance;
}

Servo servo1;
Servo servo2;
Servo servo3;

void setup()
{
A = 0;
pinMode(11, OUTPUT);
pinMode(10, INPUT);
pinMode(12, OUTPUT);
servo1.attach(3);
servo2.attach(6);
servo3.attach(9);
}

void loop()
{
if (checkdistance_11_10() < 20) {
A = random(0, 4);
switch (A) {
case 1:
tone(12,131);
delay(100);
noTone(12);
servo1.write(179);
delay(1000);
servo1.write(90);
delay(500);
break;
case 2:
tone(12,131);
delay(100);
noTone(12);
servo2.write(179);
delay(1000);
servo2.write(90);
delay(500);
break;
case 3:
tone(12,131);
delay(100);
noTone(12);
servo3.write(179);
delay(1000);
servo3.write(90);
delay(500);
break;
}

}
}
