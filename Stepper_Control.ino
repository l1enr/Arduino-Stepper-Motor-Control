/*
  28BYJ-48 Stepper Motor with ULN2003 Driver
  Arduino Uno

  IN1 -> Pin 8
  IN2 -> Pin 9
  IN3 -> Pin 10
  IN4 -> Pin 11
*/

#include <Stepper.h>

const int stepsPerRevolution = 2048;

Stepper stepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  stepper.setSpeed(10);   // Speed in RPM
}

void loop() {

  // Rotate 90°
  rotateAngle(90);
  delay(1000);

  // Rotate 180°
  rotateAngle(180);
  delay(1000);

  // Rotate 270°
  rotateAngle(270);
  delay(1000);

  // Rotate 360°
  rotateAngle(360);
  delay(2000);

  // Return to the starting position
  rotateAngle(-360);
  delay(2000);
}

// Function to rotate any angle
void rotateAngle(int angle) {
  int steps = angle * stepsPerRevolution / 360;
  stepper.step(steps);
}