# FA26-IT254 Individual AI Model Project - Owen McGrath

An AI model project that recognizes whether a smartphone or a graphing calculator is shown to my laptop webcam and displays the result on a physical LCD screen controlled by an Arduino.

## How it works

Webcam → Teachable Machine model code in MS Visual Studio Code → USB serial → Arduino Mega 2560 → LCD 1602

Python script classifies webcam frames using a Google Teachable Machine model and sends a short message ("none, "smartphone", or "calculator) to the Arduino over USB. The Arduino shows the result on the LCD.

## Demo

![Circuit picture](PXL_20261010_192734765.jpg)

[Demo video](DemoVideo.mp4)

## Wiring (LCD to Arduino)

LCD pin -> Connects to
----------------------
VSS -> GND
VDD -> 5V
V0 -> Pin 7 and capacitor to GND
RS -> Pin 4
RW -> GND
E -> Pin 5
D4 -> Pin 10
D5 -> Pin 11
D6 -> Pin 12
D7 -> Pin 13
A -> 5V
K -> GND
