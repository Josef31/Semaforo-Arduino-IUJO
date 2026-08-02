// fases.cpp
#include "config.h"
#include "fases.h"

// FASE 1: Vía Libre Vehicular Norte-Sur
void fase1_ViaLibreNS() {
  digitalWrite(vehVerdeNS, HIGH);
  digitalWrite(vehAmarilloNS, LOW);
  digitalWrite(vehRojoNS, LOW);
  digitalWrite(peatVerdeNS, LOW);
  digitalWrite(peatRojoNS, HIGH);

  digitalWrite(vehVerdeEO, LOW);
  digitalWrite(vehAmarilloEO, LOW);
  digitalWrite(vehRojoEO, HIGH);
  digitalWrite(peatVerdeEO, HIGH);
  digitalWrite(peatRojoEO, LOW);

  delay(8000); 
}

// FASE 2: Transición N-S
void fase2_TransicionNS() {
  digitalWrite(vehVerdeNS, LOW);
  digitalWrite(vehAmarilloNS, HIGH);
  digitalWrite(peatVerdeEO, LOW);
  digitalWrite(peatRojoEO, HIGH);
  digitalWrite(peatVerdeNS, LOW);
  digitalWrite(peatRojoNS, HIGH);

  delay(3000); 
}

// FASE 3: Vía Libre Vehicular Este-Oeste
void fase3_ViaLibreEO() {
  digitalWrite(vehAmarilloNS, LOW);
  digitalWrite(vehRojoNS, HIGH);
  digitalWrite(peatVerdeNS, HIGH);
  digitalWrite(peatRojoNS, LOW);

  digitalWrite(vehRojoEO, LOW);
  digitalWrite(vehVerdeEO, HIGH);
  digitalWrite(peatVerdeEO, LOW);
  digitalWrite(peatRojoEO, HIGH);

  delay(8000); 
}

// FASE 4: Transición E-O
void fase4_TransicionEO() {
  digitalWrite(vehVerdeEO, LOW);
  digitalWrite(vehAmarilloEO, HIGH);
  digitalWrite(peatVerdeNS, LOW);
  digitalWrite(peatRojoNS, HIGH);
  digitalWrite(peatVerdeEO, LOW);
  digitalWrite(peatRojoEO, HIGH);

  delay(3000); 
}