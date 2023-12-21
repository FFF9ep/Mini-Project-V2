#include <iostream>
#include <windows.h>
#include <LiquidCrystal.h>
using namespace std;

LiquidCrystal lcd(/* pins for RS, E, D4, D5, D6, D7 */);

int main()
{
    // Set up the all-you-can-eat duration
    int duration = 90;

    // Set up the LED pin numbers
    int green_pin = 12;
    int blue_pin = 11;
    int yellow_pin = 10;
    int red_pin = 9;

    // Set up the piezo pin number
    int piezo_pin = 8;

    // Initialize the LED pins
    pinMode(green_pin, OUTPUT);
    pinMode(blue_pin, OUTPUT);
    pinMode(yellow_pin, OUTPUT);
    pinMode(red_pin, OUTPUT);

    // Initialize the piezo pin
    pinMode(piezo_pin, OUTPUT);

    // Turn on the green LED and display the duration on the LCD
    digitalWrite(green_pin, HIGH);
    lcd.begin(16, 2);
    lcd.print("Durasi: " + to_string(duration) + " menit");

    // Wait for the all-you-can-eat period
    delay(duration * 60 * 1000);

    // Turn on the blue
