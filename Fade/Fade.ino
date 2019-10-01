//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Fade
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4304516-worksheet-3-ex1-fade

int led = 3;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(int i = 0; i < 256; i++){
      analogWrite(led, i);
  }
  delay(1000);
  for(int j = 255; j >= 0; j--){
      analogWrite(led, j);
  }
  delay(1000);
}
