//First test for generating a constant 56KHz frequency IR signal
//see http://www.righto.com/2009/07/secrets-of-arduino-pwm.html


void setup()
{
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  TCCR2A = _BV(COM2A0) | _BV(COM2B1) | _BV(WGM20);
  TCCR2B = _BV(WGM22) | _BV(CS22);
  OCR2A = 180;
  OCR2B = 50;
}

void loop()
{
  digitalWrite(13, HIGH);
  delayMicroseconds(100); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(13, LOW);
  delayMicroseconds(900);
}
