//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Simulation count down
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3951745-simulation-count-down

int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int dp=9;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop(){
  
  //9
  digitalWrite(a, HIGH);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //8
  digitalWrite(a, HIGH);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //7
  digitalWrite(a, HIGH);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //6
  digitalWrite(a, HIGH);                    
  digitalWrite(b, LOW);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //5
  digitalWrite(a, HIGH);                    
  digitalWrite(b, LOW);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //4
  digitalWrite(a, LOW);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //3
  digitalWrite(a, HIGH);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //2
  digitalWrite(a, HIGH);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //1
  digitalWrite(a, LOW);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //0
  digitalWrite(a, HIGH);                    
  digitalWrite(b, HIGH);                   
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
  delay(1000);
  
  //.
  digitalWrite(a, LOW);                    
  digitalWrite(b, LOW);                   
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
  delay(1000); 
}
