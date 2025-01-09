#include <Wire.h> 
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

char* password = "62AB"; //create a password
int pos = 0; //keypad position
int counter = 0;

void setup()
{
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
 char whichKey = customKeypad.getKey(); //define which key is pressed with             getKey
 if(whichKey == '1' || whichKey == '2' || whichKey == '3' || //whichKey == 'A' ||
    whichKey == '4' || whichKey == '5' ||// whichKey == '6' || whichKey == 'B' ||
    whichKey == '7' || whichKey == '8' || whichKey == '9' || whichKey == 'C' ||
    whichKey == '*' || whichKey == '0' || whichKey == '#' || whichKey == 'D')      
  {
    counter ++;   
    Serial.println(counter);    
  }
  if(whichKey == password [pos])
  {
    pos ++;
    Serial.println(pos); 
  }
 if(counter == 4)
  {
    Serial.println("Not Varified");
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
    pos=0;
    counter =0;
  }
  if(pos == 4)
  {
    Serial.println("Varified");
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    pos=0;
    counter=0;
  }    
  delay(100);  
}
