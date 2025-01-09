#include<SoftwareSerial.h>
String m = "";
SoftwareSerial bt(6,5); /* (Rx,Tx) */  
void setup()
{
  bt.begin(9600); 
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
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
      digitalWrite(12,HIGH);
      digitalWrite(18,HIGH);
      digitalWrite(7,HIGH);
    }
    if(m.equals("b"))
    {
      digitalWrite(13,LOW);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(18,LOW);
    }
    }
}
