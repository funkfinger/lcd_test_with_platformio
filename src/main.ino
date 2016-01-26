#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x27);  // Set the LCD I2C address
// YwRobot Arduino I2C LCD backpack...
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() {
  lcd.begin(16,2);               // initialize the lcd 
  lcd.backlight();  
  lcd.home ();                   // go home
  lcd.print("hola world! lcd");  
  lcd.setCursor ( 0, 1 );        // go to the next line
  lcd.print ("in full effect");      
}

void loop() {

}