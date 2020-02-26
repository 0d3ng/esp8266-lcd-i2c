#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void scrollText(int row, String message, int delayTime, int lcdColumns);

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();

  lcd.home();
}

void loop()
{
  lcd.home();
  lcd.print("Polinema");
  scrollText(1, "Kelas IoT.", 250, 16);
}

void scrollText(int row, String message, int delayTime, int lcdColumns)
{
  for (int i = 0; i < lcdColumns; i++)
  {
    message = " " + message;
  }
  message = message + " ";
  for (int pos = 0; pos < message.length(); pos++)
  {
    lcd.setCursor(0, row);
    lcd.print(message.substring(pos, pos + lcdColumns));
    delay(delayTime);
  }
}