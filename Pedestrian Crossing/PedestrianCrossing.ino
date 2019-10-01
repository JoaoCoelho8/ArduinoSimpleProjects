//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Pedestrian Crossing
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4859801-pedestrian-crossing

int Vermelho = 5, Amarelo=6, Verde=7;
int vermelhoo=4,verdee=3;
int buzz=9;
int i,j;
volatile int state=LOW;
int matrix[2][3]={{1,0,0},
				  {0,0,1}};
int pins[]={5,6,7};
                  
void setup() {
  pinMode(Vermelho, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(vermelhoo, OUTPUT);
  pinMode(verdee, OUTPUT);
}

void loop() {
  digitalWrite(Verde, HIGH);
  delay(1000);
  digitalWrite(Verde, LOW);
  delay(1000);
  digitalWrite(verdee, LOW);
  digitalWrite(buzz, LOW);
  digitalWrite(vermelhoo, HIGH);
  digitalWrite(Amarelo, HIGH);
  delay(1000);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Vermelho, HIGH);
  delay(1000);
  digitalWrite(Vermelho, LOW);
  delay(1000);
  digitalWrite(vermelhoo, LOW);
  digitalWrite(verdee, HIGH);
  digitalWrite(buzz, HIGH);
  delay(500);
}

void blink(){
	state=!state;
}
