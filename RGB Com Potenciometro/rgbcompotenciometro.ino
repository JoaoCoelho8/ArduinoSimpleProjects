//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// rgb com potenciometro
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4304348-rgb-com-potenciometro

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int analog1;
int analog2;
int analog3;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  analog1=analogRead(A0)/4;
  Serial.print("sensor = ");
  Serial.println(analog1);
 
  analog2=analogRead(A1)/4;
  Serial.println("sensor2 = ");
  Serial.print(analog2);
  Serial.print(" ");
  //////////////////////
   analog3=analogRead(A2)/4;
  Serial.println("sensor3 = ");
  Serial.print(analog3);
  delay (200);
  
  analogWrite(9,analog1);
  delay (20);
  analogWrite(10,analog2);
  delay (20);
  analogWrite(11,analog3);
  delay (20);
}
