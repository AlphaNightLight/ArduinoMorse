#include "morse.h"

void setup() {
  pinMode(13, OUTPUT);
  Morse::set_pin(13);
  Morse::set_time_unit(100);
}

void loop() {
  String s = "Hello World!";
  Morse::plot_string(s);
  Morse::halt();
}
