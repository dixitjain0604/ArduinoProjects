const int ledpin=13; 
const int soundpin=A1;
const int threshold=200; // sets threshold value for sound sensor
void setup() 
{
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(7,OUTPUT); // buzzer
  pinMode(soundpin,INPUT);
}
void loop()
{
  int soundsens=analogRead(soundpin); // reads analog data from sound sensor
  if (soundsens>=threshold) 
  {
    digitalWrite(ledpin,HIGH); //turns led on
    digitalWrite(7,HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(ledpin,LOW);
    digitalWrite(7,LOW);
  }
}
