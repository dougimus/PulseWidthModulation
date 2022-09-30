// Mohawk College - COMP-10184 
// 
// Pulse Width Modulation - Test Program 
// 
#include <Arduino.h> 
 
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT); 
 
  // set default PWM range 
  analogWriteRange(1023); 
} 
 
 
void loop() { 
  // turn the LED ON 
  digitalWrite(D4, LOW); 
  // wait 1s 
  delay(1); 
 
  // turn the LED OFF 
  digitalWrite(D4, HIGH); 
  // wait 1s 
  delay(9); 
}