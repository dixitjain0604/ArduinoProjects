long duration;
long distance;

void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT); 
}

void loop()
{
   digitalWrite(4,HIGH);
   digitalWrite(8,LOW);
   delayMicroseconds(2);
   digitalWrite(8,HIGH);
   delayMicroseconds(10);
   digitalWrite(8,LOW);


  duration = pulseIn(7,HIGH);
  distance = duration/58.2;

  Serial.println(distance);
  delay(50);
  
  if(distance < 20)
  {
      Serial.println("Parkinng is Allocated....");
      digitalWrite(10, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(2, LOW);
      digitalWrite(12, LOW); 
      digitalWrite(13, LOW);   
      delay(100);                
   }
   else
   {
      Serial.println("Parking IS Available....");
      digitalWrite(13, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12,HIGH); 
      digitalWrite(10, HIGH);
   }  
}
