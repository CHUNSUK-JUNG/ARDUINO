#include <Keypad.h>
 
const byte rows = 4;
const byte cols = 4;
char keys[rows][cols] =
{ {'1','2','3','a'},
  {'4','5','6','b'},
  {'7','8','9','c'},
  {'*','0','#','d'} };
byte rowpins[rows] = {6, 7, 8, 9};   // R1, R2, R3, R4 단자가 연결된 아두이노 핀 번호
byte colpins[cols] = {5, 4, 3, 2};   // C1, C2, C3, C4 단자가 연결된 아두이노 핀 번호
 
Keypad keypad = Keypad(makeKeymap(keys), rowpins, colpins, rows, cols);
 
void setup() {
  Serial.begin(9600);
}
   
void loop() {
  char key = keypad.getKey();
   
  if (key) {
    Serial.println(key);
  }
}
