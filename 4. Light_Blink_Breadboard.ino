void setup() {

  
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  //delay(500);
  //digitalWrite(9,LOW);
  //digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(500);  
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  // put your main code here, to run repeatedly:

}
