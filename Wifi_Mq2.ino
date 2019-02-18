#include<ESP8266WiFi.h>

const char* ssid = "sailesh";
const char* password = "12345678" ;

int ledPin = 13;


void setup()
{
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);

  Serial.begin(115200);
  Serial.println();
  Serial.print("Wifi connecting");

  WiFi.begin(ssid,password);

  Serial.println();

  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    
  }

  digitalWrite(ledPin,HIGH);
  Serial.println();

  
  }


void loop()
{
  // put your main code here, to run repeatedly:

}
