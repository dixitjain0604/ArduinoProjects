#include<SoftwareSerial.h>
String m = "";
SoftwareSerial bt(6,5); /* (Rx,Tx) */  
#define relay1 2
void setup()
{
  bt.begin(9600);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(relay1, OUTPUT);  
  digitalWrite(relay1, HIGH);    
}
void loop()
{
 if (bt.available())
 {
   m = bt.readString();
   Serial.println(m);
    if(m.equals("a"))
    {
      digitalWrite(13,HIGH);
      digitalWrite(relay1, LOW);    
    }
    if(m.equals("b"))
    {
      digitalWrite(13,LOW);
      digitalWrite(relay1, HIGH);    
    }
  }
}
