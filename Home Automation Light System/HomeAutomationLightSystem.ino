//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Home Automation Light System
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4304604-home-automation-light-system

#include <Servo.h>

Servo servo;

int lightBulb = 3;
int ldr = 0;

void setup() {
  Serial.begin(9600);
  pinMode(lightBulb, OUTPUT);
  servo.attach(4);
}

void loop() {
  if(analogRead(ldr) < 180){ 	
    digitalWrite(lightBulb,HIGH);
    servo.write(180);
  }else{											
    digitalWrite(lightBulb,LOW);
    servo.write(0);
  }
  delay(500);
}
