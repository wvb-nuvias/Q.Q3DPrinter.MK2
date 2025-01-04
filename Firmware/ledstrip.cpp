#include "Configuration.h"
#include "ledstrip.h"
#include "fastio.h"
#include "pins.h"

bool ledstripon = false;

void setledstripoff() {
  // Turn off the LED strip
  WRITE(LED_STRIP_PIN, LOW);
  ledstripon = false;
}

void setledstripon() {
  // Turn on the LED strip
  WRITE(LED_STRIP_PIN, HIGH);
  ledstripon = true;
}
