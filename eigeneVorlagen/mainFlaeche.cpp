/**
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: .cpp
 * ------------------
 * Description
 */

#include <iostream>
#include "kreis.hpp" // 1. abgeleitete Klasse
#include "ring.hpp"  // von "kreis" abgeleitete Klasse
#include "schablone.hpp"


using namespace std;

/* CONSTANTS */

/* STRUCTS / CLASSES */

/* CONSTRUCTURS & CLASS METHODS */

/* PROTOTYPES */

int main(int argc, char **argv) {
  // gruener kreis, r=20 mit Loch 3 x 5
  Schablone k_r("Gruen", 20, 3.0, 5,0);
  /* k_r.Kreis::getFarbe();
  k_r.Rechteck::getFarbe();

  cout << "\n" << "Kreisflaeche: " << k_r.Kreis::berechneFlaeche()
       << "\nLochflaeche: " << k_r.Rechteck::berechneFlaeche()
       << "\nSchablonenflaeche: " << k_r.berechneFlaeche(); */

  cout << "\n";
  return EXIT_SUCCESS;
} // main {} [] \n | ~

/* FUNCTIONS */
