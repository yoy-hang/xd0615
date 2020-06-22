
#include <LiquidCrystal.h>
//LiquidCrystal lcd(RS,E,d4,d5,d6,d7);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("abcdefg");
  lcd.setCursor(0, 1);
  lcd.print("ABCDEFG");
}

void loop() {

}
 