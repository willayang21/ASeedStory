/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 5,
  when pressing a pushbutton attached to pin 9.

  The circuit:
  - LED attached from pin 5 to ground
  - pushbutton attached to pin 9 from +3.3V (+)
  - 10K resistor attached to pin 9 from ground

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = A5;     // the number of the pushbutton pin
const int ledPin = 11;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int on = false;

void setup() {
  Serial.begin(9600); // initialize serial communication between Lilypad & computer at 9600 bits per sec
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
//  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = analogRead(buttonPin);
  Serial.println(buttonState); // prints the buttonState value on the serial monitor
//  int pressure = map(buttonState, 0, 500, 0, 255);  

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState > 900) {
    delay(100); 
    on = !on;
    if (on == true) {
      digitalWrite(ledPin, HIGH);      
    } else {
      digitalWrite(ledPin, LOW);         
    }
  }
 
}
