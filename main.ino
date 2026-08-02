// main.ino
#include "config.h"
#include "fases.h"

void setup() {
  for (int pin = 2; pin <= 11; pin++) {
    pinMode(pin, OUTPUT);
  }
}

