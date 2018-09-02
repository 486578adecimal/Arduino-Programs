//www.elegoo.com
//2016.12.08
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
#define redLed 2
#define greenLed 3
#define blueLed 4
#define fan 5
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a = 0;

void setup() {
    pinMode(redLed,OUTPUT);
    pinMode(greenLed,OUTPUT);
    pinMode(blueLed,OUTPUT);
    digitalWrite(redLed,LOW);
    analogWrite(redLed,255/3);
    digitalWrite(greenLed,LOW);
    digitalWrite(blueLed,LOW);
    digitalWrite(fan,LOW);
    Serial.begin(9600);
    delay(1000);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");
   a = a * 1.5;
   if (a > 254){
    a = 255;
   }
  analogWrite(greenLed,a/2);
  if (a < 30) {
    analogWrite(fan,HIGH);
  }else{
    digitalWrite(fan,LOW);
    }
   }

