/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led_int = 13;
int led_gr  =  9;
int led_ir  = 10;
int pause = 1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_int, OUTPUT);     
  pinMode(led_gr,  OUTPUT);     
  pinMode(led_ir,  OUTPUT);     
  digitalWrite(led_gr, 60);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_int, HIGH);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(led_gr,  HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led_ir,  HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pause);               // wait for a second
  digitalWrite(led_int, LOW);
  //digitalWrite(led_gr,  LOW);
  digitalWrite(led_ir,  LOW);
  delay(pause);               // wait for a second
}

