#include <Arduino.h>
constexpr int BUTTON_PIN = 0;
constexpr int LED_PIN = 13;
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON_PIN) == LOW) {
    Serial.println("Button is pressed!");
    digitalWrite(LED_PIN, HIGH);
  }
  else if( digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, LOW);
  }
}


