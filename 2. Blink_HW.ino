void setup() {
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {

    for(int i=0;i<=4;i++){
    digitalWrite(i,HIGH);
    delay(10);
    digitalWrite(i,LOW);
    }
   /*for(int i=0;i<=1;i++){
    digitalWrite(i,HIGH);
    //delay(500);
    digitalWrite(i+2,HIGH);
    digitalWrite(i+4,HIGH);
    delay(500);
    digitalWrite(i+4,LOW);
    digitalWrite(i+2,LOW);
    //delay(500);
    digitalWrite(i,LOW);
    delay(500);
    }
    for(int i=0;i<=4;i++){
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    }*/
  
  for(int j=13;j>=9;j--){
    digitalWrite(j,HIGH);
    delay(10);
    digitalWrite(j,LOW);
    }
    /*for(int j=9;j<=10;j++){
    digitalWrite(j,HIGH);
    //delay(500);
    digitalWrite(j+2,HIGH);
    digitalWrite(j+4,HIGH);
    delay(500);
    digitalWrite(j+4,LOW);
    digitalWrite(j+2,LOW);
    //delay(500);
    digitalWrite(j,LOW);
    delay(500);
    }
    for(int j=9;j<=13;j++){
    digitalWrite(j,HIGH);
    delay(500);
    digitalWrite(j,LOW);
    }*/
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);

/*digitalWrite(0,HIGH);
delay(1000);
digitalWrite(1,HIGH);
delay(1000);
digitalWrite(2,HIGH);
delay(1000);
digitalWrite(3,HIGH);
delay(1000);
digitalWrite(4,HIGH);
delay(1000);
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(10,HIGH);
delay(1000);
digitalWrite(11,HIGH);
delay(1000);
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(13,HIGH);
delay(1000);
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);
*/
}
