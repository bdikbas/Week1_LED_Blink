#include <Arduino.h>
constexpr int LED_PIN = 13;

constexpr int DOT_TIME = 300;
constexpr int DASH_TIME = 900;
constexpr int PAUSE = 300;
constexpr int LETTER_PAUSE = 900;
constexpr int WORD_PAUSE = 2000;

// put function declarations here:

void dot() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT_TIME);
  digitalWrite(LED_PIN,LOW);
  delay(PAUSE);
}

void dash() {
  digitalWrite(LED_PIN, HIGH);
  delay(DASH_TIME);
  digitalWrite(LED_PIN,LOW);
  delay(PAUSE);
}

const char* morseFirstName[] = {
  "-...", "..-", ".-.", ".-", "-.-"
};

void letters(const char* pattern) {
  for(int i = 0; pattern[i] != '\0'; i++) {
    if(pattern[i] == '.') {
      dot();
    }
    else if(pattern[i] == '-') {
      dash();
    }
  }
  (LETTER_PAUSE);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 5; i++) {
    letters(morseFirstName[i]);
  }
  delay(WORD_PAUSE);
}


