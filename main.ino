// main.ino
#include "config.h"
#include "fases.h"

void setup() {
  for (int pin = 2; pin <= 11; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
    fase1_ViaLibreNS();
    fase2_TransicionNS();
    fase3_ViaLibreEO();
    fase4_TransicionEO();
}