int sensorPin = A0;
int sensorValue=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue<50)
  {
      digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);  
  }
  delay(100);
  // put your main code here, to run repeatedly:

}
