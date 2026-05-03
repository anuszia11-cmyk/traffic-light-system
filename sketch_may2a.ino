/*
  Traffic Light System using Arduino
  -----------------------------------
  This program simulates a traffic light system using 
  Red, Yellow, and Green LEDs connected to digital pins.

  Author: ChatGPT
  Date: June 2025
*/

// ---------------------------
// Pin Assignments
// ---------------------------
const int RED_LED_PIN = 2;
const int YELLOW_LED_PIN = 3;
const int GREEN_LED_PIN = 4;

// ---------------------------
// Time Durations (in milliseconds)
// ---------------------------
const unsigned long GREEN_TIME = 5000;   // 5 seconds
const unsigned long YELLOW_TIME = 2000;  // 2 seconds
const unsigned long RED_TIME = 5000;     // 5 seconds

// ---------------------------
// Setup function
// Runs once when the Arduino starts
// ---------------------------
void setup() {
  // Initialize LED pins as OUTPUT
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);

  // Start with all LEDs off
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
}

// ---------------------------
// Loop function
// Runs repeatedly in a cycle
// ---------------------------
void loop() {
  // ----- GREEN LIGHT -----
  digitalWrite(GREEN_LED_PIN, HIGH);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(RED_LED_PIN, LOW);
  delay(GREEN_TIME); // Wait

  // ----- YELLOW LIGHT -----
  digitalWrite(GREEN_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, HIGH);
  delay(YELLOW_TIME); // Wait

  // ----- RED LIGHT -----
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(RED_LED_PIN, HIGH);
  delay(RED_TIME); // Wait
}