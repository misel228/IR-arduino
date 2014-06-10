# IR-arduino
IR signal generator for Arduino

## Description
The goal is to generate a 56kHz IR carrier signal for the Miles Tag protocol

## Links
* [Project with the same goal](http://j44industries.blogspot.de/p/projects.html)
* [Details on signal generation](http://j44industries.blogspot.com/2009/09/arduino-frequency-generation.html#more) This code does not use PWM for generating the carrier frequency but instead toggles the LED on/off at pre-calculated intervals. This is not the ideal solution but may be a plan B.
