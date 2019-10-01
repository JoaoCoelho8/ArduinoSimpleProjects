//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// 6-weather-station
// 
// Made by Pedro Mota
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4458907-temperatura

int temperatura= A5;
String ssid     = "Simulator Wifi";
String password = "";


void setup()
{
  	pinMode(temperatura, INPUT);
    Serial.begin(115200);  
  	Serial.println("AT"); 
  	delay(5000);
  	pinMode(13, OUTPUT);
  	digitalWrite(13, LOW);
  	if(!connectWiFi()){
  		digitalWrite(13, HIGH);
  	}
}
 
void loop()
{
  	int reading = analogRead(temperatura);  
 	float voltage = reading * 5.0;
 	voltage /= 1024.0; 
 	Serial.print(voltage); 
 	Serial.println(" volts");
 	float temperatureC = (voltage - 0.5) * 100 ;
  	Serial.print(temperatureC); 
 	Serial.println(" temperatura");
 	delay(5000);
  	updateTemp(temperatureC);
 	delay(5000);
}

void updateTemp(float tenmpF){
  String cmd = "AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80";
  Serial.println(cmd);
  if(Serial.find("error")){
    return;
  }
  else{  
  	String cmd2 = "GET /update?key=91I0O3ISANQZE5UQ&field1=";
    cmd2+=temperatura;
    cmd2+=" HTTP/1.1 Host: api.thingspeak.com\r\n\r\n";
    String cmd3= "AT+CIPSEND=";
    cmd3+=cmd2.length();
    Serial.println(cmd3);
    if(!Serial.find(">")){
      Serial.println("AT+CIPCLOSE");
      return;
    }else{
      Serial.println(cmd2);
    }
  }
}

boolean connectWiFi(){
  String cmd="AT+CWJAP=\"";
  cmd+=ssid;
  cmd+="\",\"";
  cmd+=password;
  cmd+="\"";
  Serial.println(cmd);
  
  delay(5000);
  if(Serial.find("OK")){
    return true;
  }else{
    return false;
  }
}
