#include <Arduino.h>

#ifdef LED_BUILTIN
#undef LED_BUILTIN
#endif
#define LED_BUILTIN 7

void setup() { pinMode(LED_BUILTIN, OUTPUT); }

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}