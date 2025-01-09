#include <Servo.h>
const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;
Servo servo;
int angle=0;
void setup() 
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  servo.attach(8);
  servo.write(angle);
  pinMode(13,OUTPUT);
}
void loop() 
{ 
  for(angle = 0; angle <= 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(50);   
    distance = calculateDistance();
    Serial.print(angle); 
    Serial.print(",");
    Serial.print(distance); 
    Serial.print(".");                
  } 
  for(angle = 180; angle >= 0; angle--)    
  {                                
    servo.write(angle);           
    delay(50); 
    distance = calculateDistance();
    Serial.print(angle);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");      
  } 
}
int calculateDistance()
{   
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  if(distance<50)
  {
    digitalWrite(13,HIGH);  
  }
  else
  {
    digitalWrite(13,LOW);  
  }
  return distance;
}
