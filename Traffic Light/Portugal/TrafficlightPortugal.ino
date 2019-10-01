//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Traffic light - Portugal
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3983876-the-unnamed-circuit

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop() {
  //green
  digitalWrite(4, 254);   
  delay(3000);               
  digitalWrite(4, 0);    
  delay(0); 
  
  //yellow
  digitalWrite(3, 254);   
  delay(1000);               
  digitalWrite(3, 0);    
  delay(0);
  
  //red
  digitalWrite(2, 254);   
  delay(3000);               
  digitalWrite(2, 0);    
  delay(0);
}
