#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16 ,2 );

int cam_bien=A0;
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Nhiet do:");
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp=analogRead(cam_bien);
 // float temp= doc_cam_bien *5.0/1024.0;
 // float nhiet_do=temp*100.0;
    float celcius = temp * (0.48828125); 

  lcd.setCursor(10,0);
  lcd.print(celcius);
  delay(1000);
}
