/*
 keyestudio 4DOF Robot Arm Car
 lesson 2.1
 pwm
 http://www.keyestudio.com
*/
int ledPin = 6; // Define the LED pin at D6
int value;
void setup () {
  pinMode (ledPin, OUTPUT); // initialize ledpin as an output.
}
void loop () {
  for (value = 0; value <255; value = value + 1) {
    analogWrite (ledPin, value); // LED lights gradually light up
    delay (5); // delay 5MS
}
  for (value = 255; value> 0; value = value-1) {
    analogWrite (ledPin, value); // LED gradually goes out
    delay (5); // delay 5MS
  }
}
