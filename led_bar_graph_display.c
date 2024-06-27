/*
    Project name : Arduino Mega LED Bar Graph Display
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-led-bar-graph-display
*/

const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Array of pin numbers for the LED bar graph
const int numLeds = 10; // Number of LEDs in the bar graph
int sensorValue = 0; // Variable to store the sensor value

void setup() {
  // Initialize the digital pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Read the analog sensor value (assuming a sensor is connected to A0)
  sensorValue = analogRead(A0);
  
  // Map the sensor value to the range of the LED bar graph
  int ledLevel = map(sensorValue, 0, 1023, 0, numLeds);

  // Turn on the appropriate number of LEDs
  for (int i = 0; i < numLeds; i++) {
    if (i < ledLevel) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }

  delay(100); // Short delay to smooth out the readings
}
