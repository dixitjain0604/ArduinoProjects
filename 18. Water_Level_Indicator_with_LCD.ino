#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

long duration;
long distance;
int count=0;
void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
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

  if(distance <= 20)
  {
       lcd.clear(); 
       Serial.println("Tank Is Full");
       lcd.setCursor(0,0);
       lcd.print("Tank Is Full");
       digitalWrite(13, HIGH);
       digitalWrite(10, LOW);
       digitalWrite(9, LOW);
       delay(100);
    //   count=count+1;
//       Serial.println(count);                
  }
  else if(distance > 20 && distance < 30)
  {
           lcd.clear();
           Serial.println("Tank Is Half");
           lcd.setCursor(0,0);
           lcd.print("Tank Is Half");           
           digitalWrite(10, HIGH);
           digitalWrite(13, LOW);
           digitalWrite(9, LOW);
    }
  else
  {
    lcd.clear();
    Serial.println("Tank Is Empty");
    lcd.setCursor(0,0);
    lcd.print("Tank Is Empty");
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9,HIGH);
//    Serial.println(count);  
  }
  //Serial.println(count);  
}
