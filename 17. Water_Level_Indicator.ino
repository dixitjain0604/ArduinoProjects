long duration;
long distance;
int count=0;
void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop()
{
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);

  duration = pulseIn(7,HIGH);

  distance = duration/58.2;

  Serial.println(distance);

  delay(50);

  if(distance <= 25)
  {
       Serial.println("Tank Is Full");
       digitalWrite(13, HIGH);
       digitalWrite(2, LOW);
       digitalWrite(3, LOW);
       delay(100);
    //   count=count+1;
//       Serial.println(count);                
  }
  else if(distance > 25 && distance < 35)
  {
           Serial.println("Tank Is Half Filled");
           digitalWrite(2, HIGH);
           digitalWrite(13, LOW);
           digitalWrite(3, LOW);
    }
  else
  {
    Serial.println("Tank Is Empty");
    digitalWrite(13, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3,HIGH);
//    Serial.println(count);  
  }
  //Serial.println(count);  
}
