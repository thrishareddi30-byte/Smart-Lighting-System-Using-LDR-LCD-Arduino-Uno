# Smart Lighting System Using LDR, LCD and Arduino Uno

## Overview
This project implements a Smart Lighting System using an LDR sensor, Arduino Uno, LED and 16x2 I2C LCD. The system automatically controls lighting based on ambient light intensity.

## Components Used
* Arduino Uno
* LDR Sensor Module
* LED
* 220 Ω Resistor
* 16x2 I2C LCD
* Jumper Wires

## Working
The LDR sensor measures the surrounding light intensity and sends the value to the Arduino through analog pin A0.

* If Light Value < 500:
  * LED turns ON
  * LCD displays "Dark - LED ON"

* If Light Value ≥ 500:
  * LED turns OFF
  * LCD displays "Bright-LED OFF"

## Software Used
* Wokwi Simulator
* Arduino IDE

## Applications
* Smart Street Lighting
* Home Automation
* Security Lighting
* Industrial Automation
* Energy Conservation Systems

## Author
Enagandla Thrisha
BVRIT - EEE Department
