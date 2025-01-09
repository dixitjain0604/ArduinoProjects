//https://omerk.github.io/lcdchargen/


#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte a[8] = {
0b00000,
  0b01010,
  0b10101,
  0b10001,
  0b10001,
  0b01010,
  0b00100,
  0b00000
};

byte b[8] = {
0b00000,
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100
};

void setup() {
 lcd.createChar(2, a);
  lcd.begin(16, 2);  
  lcd.setCursor(3,0);
  lcd.write(byte(2));
}

void loop()
{
  lcd.createChar(2, a);
  delay(300);
  lcd.begin(16, 2);  
  lcd.setCursor(3,0);
  lcd.write(byte(2));
  delay(300);

  lcd.createChar(2, b);
  delay(300);
  lcd.begin(16, 2);  
  lcd.setCursor(3,0);
  lcd.write(byte(2));
  delay(300);
}


/////////////////

/*
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte a[8] = {
0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte b[8] = {
0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00000
};

void setup() {
  lcd.createChar(2, a);
  lcd.begin(16, 2);  
  lcd.setCursor(15,0);
  lcd.write(byte(2));
}

void loop()
{
 lcd.createChar(2, a);
 lcd.write(byte(2));
 delay(1000);
 lcd.createChar(2, b);
 lcd.write(byte(2));
 delay(1000);
 
}

*/
