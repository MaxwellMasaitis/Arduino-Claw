#include <Servo.h>

Servo servo0;  // create servo objects to control the servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int potpin0 = 0;  // analog pins used to connect the potentiometers
int potpin1 = 1;
int potpin2 = 2;
int potpin3 = 3;
int potpin4 = 4;
int val0;    // variables to read the values from the analog pins
int val1;
int val2;
int val3;
int val4;

void setup() {
  // put your setup code here, to run once:
  servo0.attach(8);
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // servo0 should be the BASE
  val0 = analogRead(potpin0);            // reads the value of the potentiometer (value between 0 and 1023)
  val0 = map(val0, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo0.write(val0);                  // sets the servo position according to the scaled value
  
  // servo1 should be the SHOULDER: the red servo that isn't the base
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 0, 180);
  servo1.write(val1);

  // servo2 should be the ELBOW
  val2 = analogRead(potpin2); 
  val2 = map(val2, 0, 1023, 0, 180);
  servo2.write(val2);

  // servo3 should be the WRIST
  val3 = analogRead(potpin3); 
  val3 = map(val3, 0, 1023, 0, 180);
  servo3.write(val3);

  // servo4 should be the CLAW
  val4 = analogRead(potpin4); 
  val4 = map(val4, 0, 1023, 0, 180);
  servo4.write(val4);
  delay(15);  
}
