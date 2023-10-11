#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.clear();         
  lcd.backlight();
  delay(100);;
  lcd.setCursor(3,0);
  lcd.print("Piezotrify");
  lcd.setCursor(1,1);
  lcd.print("By Seri Menanti");
  delay(4000);
  lcd.clear();
  Serial.begin(9600);
}
void loop()
{
  int val;
  val=analogRead(0);
  Serial.println(val);
  lcd.setCursor(1,0);
  lcd.print("Analog value :");
  lcd.setCursor(7, 1);
  lcd.print(val);
  delay(200);
  lcd.setCursor(0, 1);
  lcd.print("                ");
}