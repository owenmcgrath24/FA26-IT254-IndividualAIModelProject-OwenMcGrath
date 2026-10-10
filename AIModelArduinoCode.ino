#include <LiquidCrystal.h>
               // RS, E, D4, D5, D6, D7;   
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);

int contrast;

void setup()
{
  pinMode(7, OUTPUT);
  analogWrite(7, 50);
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("Background");
}

void loop() {
  if (Serial.available() > 0)
  {
    String message = Serial.readStringUntil('\n');
    message.trim();

    if (message == "smartphone")
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Object detected:");
      lcd.setCursor(0, 1);
      lcd.print("Smartphone");
    }
    else if (message == "calculator")
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Object detected:");
      lcd.setCursor(0, 1);
      lcd.print("Calculator");
    }
    else if (message == "none")
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Background");
    }
  }
}