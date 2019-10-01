//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Read angle and turn Servo
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4304402-read-angle-and-turn-servo

#include <Servo.h>
Servo myServo;
int userAnswer;

void setup() {
  myServo.attach(8);
  Serial.begin(9600);
  Serial.println("Insert an angle (0-180)");
}

void loop() {
  while(Serial.available() > 0){
    userAnswer = Serial.parseInt();
    if(userAnswer >= 0 && userAnswer <= 180){
      myServo.write(userAnswer);
    }
    delay(500);
  	Serial.println("Insert an angle (0-180)");
  }
}
