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

void setup()
{
  Serial.begin(9600);
}
void loop()
{
 char key = customKeypad.getKey();
   if (key){
   // Serial.println(key);
  for(int i=1;i<=10;i++){
    int no=int(key);
    String ans=String((no-48)*i);
    Serial.println(String(key)+" * "+String(i)+" = "+ans);
    //Serial.println(ans);
    }
  } 

}
