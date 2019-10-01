//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Random Color RGB
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3985118-random-color-rgb

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop() {
  digitalWrite(4, 254);   
  delay(4000);               
  digitalWrite(4, 0);    
  delay(0); 
  digitalWrite(3, 254);   
  delay(2000);               
  digitalWrite(3, 0);    
  delay(0);
  digitalWrite(2, 254);
  digitalWrite(5, 254);
  delay(4000);               
  digitalWrite(2, 0);    
  delay(0);
  digitalWrite(5, 0);    
  delay(0);
}
