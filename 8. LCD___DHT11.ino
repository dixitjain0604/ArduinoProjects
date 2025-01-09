#include <LiquidCrystal.h>
#include "dht.h"
#define dht_apin A0 // Analog Pin sensor is connected to
dht DHT;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup()
{ 
  Serial.begin(9600);
  lcd.begin(16, 2);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
}

void loop()
{
  DHT.read11(dht_apin);
  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%  ");
  lcd.setCursor(0,0);
  lcd.print("Humidity=");
  lcd.print(DHT.humidity);
  lcd.print("%");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature); 
  Serial.println("C  ");
  lcd.setCursor(0,1);
  lcd.print("Temp=");
  lcd.print(DHT.temperature);
  lcd.print(" C");
  delay(5000); 
}
