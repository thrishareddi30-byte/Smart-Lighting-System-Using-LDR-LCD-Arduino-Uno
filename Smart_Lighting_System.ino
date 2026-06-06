#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const int ldrPin=A0;
const int ledPin=7;

void setup()
{
pinMode(ledPin,OUTPUT);
lcd.init();
lcd.backlight();
lcd.setCursor(0,0);
lcd.print("Smart");
lcd.setCursor(0,1);
lcd.print("Lighting System");
delay(2000);
lcd.clear();
}

void loop()
{
int lightValue=analogRead(ldrPin);

lcd.setCursor(0,0);
lcd.print("Light: ");
lcd.print(lightValue);
lcd.print("   ");

if(lightValue<500)
{
digitalWrite(ledPin,HIGH);
lcd.setCursor(0,1);
lcd.print("Dark - LED ON ");
}
else
{
digitalWrite(ledPin,LOW);
lcd.setCursor(0,1);
lcd.print("Bright-LED OFF");
}

delay(1000);
}
