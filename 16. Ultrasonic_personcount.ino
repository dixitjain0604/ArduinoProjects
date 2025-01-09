long duration;
long distance;
int count=0;

void setup()
{
  Serial.begin(9600);

  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
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

  //Serial.println(distance);

  delay(50);

  if(distance < 50)
  {
       count++;
       Serial.println(count);
       delay(5000);
       //Serial.println("Parkinng is Allocated....");
       digitalWrite(13, HIGH);
           
       
                   
  }
  else
  {
    //Serial.println("Parking IS Available....");
    digitalWrite(13, LOW);
  }  
}
