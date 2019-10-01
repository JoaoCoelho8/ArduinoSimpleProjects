//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Tilt and Buzz
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4304416-tilt-and-buzz

int tiltSensor = 3;
int tiltState;
int buzzer = 2;
void setup() {
  pinMode(tiltSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  tiltState = digitalRead(tiltSensor);

  if (tiltState == HIGH) {
    tone(buzzer, 400, 500);
    delay(500);
  } 
  else {
    noTone(buzzer);
  }
}
