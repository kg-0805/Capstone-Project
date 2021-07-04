#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
#include <SoftwareSerial.h>
#include <TinyGPS.h>

TinyGPS gps;
//SoftwareSerial sgps(4, 5);//(D2)4==tx,(D1)5==rx
SoftwareSerial sgps(4, 0);//(D2)4==tx,(D3)5==rx gpio

float slat,slon;
float a,b;
int s1 = D5;//right
int s2 = D6;//left
int o1 = D0;
int o2 = D1;

                             // The field you wish to read
 
String apiKey = "T4Q76U73NO9Y4G2T";     //  Enter your Write API key from ThingSpeak
 
const char *ssid =  "Idel";     // replace with your wifi ssid and wpa2 key
//const char *pass =  "idle@3736";
const char *pass =  "";
//const char *ssid =  "TP-LINK_5CE4";     // replace with your wifi ssid and wpa2 key
//const char *pass =  "25041997";
const char* server = "api.thingspeak.com";
 

WiFiClient client;
 
void setup() 
{
       pinMode(s1,INPUT_PULLUP);
       pinMode(s2,INPUT_PULLUP);
       pinMode(o1,OUTPUT);
       pinMode(o2,OUTPUT);
       Serial.begin(115200);
       sgps.begin(9600);
       
       delay(10);
     
 
       Serial.println("Connecting to ");
       Serial.println(ssid);
 
 
       WiFi.begin(ssid, pass);
 
      while (WiFi.status() != WL_CONNECTED) 
     {
            delay(500);
            Serial.print(".");
     }
      Serial.println("");
      Serial.println("WiFi connected");
      ThingSpeak.begin(client);
 
}
 
void loop() 
{
  digitalWrite(o1,HIGH);
digitalWrite(o2,HIGH);

if(!digitalRead(s1))
{
  digitalWrite(o1,LOW);
  delay(200);
}
else if(!digitalRead(s2))
{
  digitalWrite(o2,LOW);
  delay(200);
}
  
       while (sgps.available())
  {
    int c = sgps.read();
    if (gps.encode(c))
    {
float slat,slon;
      gps.f_get_position(&slat, &slon);
      //Serial.print("Latitude :");
      //Serial.println(slat, 6);
      a=(slat);
      //delay(1000);
      //Serial.print(a);
      delay(1000);
      //Serial.print("Longitude:");
      //Serial.println(slon, 6);
      b=(slon);
     // Serial.print(b);
 
                         if (client.connect(server,80))   //   "184.106.153.149" or api.thingspeak.com
                      {  
                            
                             String postStr = apiKey;
                             postStr +="&field1=";
                             postStr += String(b);
                             postStr +="&field2=";
                             postStr += String(a);
                             postStr += "\r\n\r\n";
 
                             client.print("POST /update HTTP/1.1\n");
                             client.print("Host: api.thingspeak.com\n");
                             client.print("Connection: close\n");
                             client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
                             client.print("Content-Type: application/x-www-form-urlencoded\n");
                             client.print("Content-Length: ");
                             client.print(postStr.length());
                             client.print("\n\n");
                             client.print(postStr);
 
                             Serial.print("Latitude");
                             Serial.print(a);
                             Serial.print("  Longitude:: ");
                             Serial.print(b);
                             Serial.println("%. Send to Thingspeak.");
                        }
          client.stop();
 
          Serial.println("Waiting...");
  
  // thingspeak needs minimum 15 sec delay between updates
  delay(1000);

    }
  }
  }

