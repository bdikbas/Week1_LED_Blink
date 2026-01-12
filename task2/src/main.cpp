#include <Arduino.h>
constexpr int TOUCH_GPIO = 5;
constexpr int BAUD_RATE = 115200;
constexpr int DELAY_MS = 160;


int baseline = -1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUD_RATE);
  delay(200);

  Serial.println("Task 2: Capacitive Touch Sensor Explorer");
  Serial.println("Touch different pins to see which one affects GPIO 5");

  Serial.println("-------------------------");
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchValue = touchRead(5);

  Serial.print("Capacitance Value = ");
  Serial.println(touchValue);
  delay(DELAY_MS);
}

/*
Findings: 

Baseline Value: About 12440

When Touching Correct Physical Pin: The capacitance value increases depending on how much pressure with your finger you put onto the pin.

Physical Pin that showed signifcant change: Pin 5

*/
