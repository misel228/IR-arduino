# IR-arduino
IR signal generator for Arduino

## Description
The goal is to generate a 56kHz IR carrier signal for the Miles Tag protocol

## Subfolders
### duino_tag
Code from [Instructables](http://www.instructables.com/id/Duino-Tagger/)
### IR_001_56kHz
first baby steps towards a 56kHz signal (*not working* (2014-06-10))

## Links
* [Project with the same goal](http://j44industries.blogspot.de/p/projects.html)
* [Details on signal generation](http://j44industries.blogspot.com/2009/09/arduino-frequency-generation.html#more) This code does not use PWM for generating the carrier frequency but instead toggles the LED on/off at pre-calculated intervals. This is not the ideal solution but may be a plan B.
* [http://www.instructables.com/id/Duino-Tagger/](http://www.instructables.com/id/Duino-Tagger/)
* [short and clear](http://softsolder.com/2009/02/21/changing-the-arduino-pwm-frequency/)
* [background explanation but somehow lacks practical examples](http://www.righto.com/2009/07/secrets-of-arduino-pwm.html)

