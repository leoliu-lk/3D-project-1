#include <Servo.h>
Servo myservo;
/**********************************/
const int potPin = A4;
const int servoPin = 3;
/**********************************/
void setup(){
  pinMode(potPin,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);//initialize LED_BUILTIN (pin 13) as output
  myservo.attach(servoPin);
  Serial.begin(9600);
}
/**********************************/
void loop(){
  Serial.print(analogRead(potPin));Serial.print(" : ");Serial.print(constrain(map(analogRead(potPin), 0, 1024, 0, 180), 0, 180));Serial.print('\n');
  myservo.write(constrain(map(analogRead(potPin), 6, 670, 0, 180), 0, 180));
  delay(0);
}
/************************************/
