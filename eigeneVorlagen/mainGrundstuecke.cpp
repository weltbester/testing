/**
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: .cpp
 * ------------------
 * Description
 */

#include <iostream>
#include "baugrundstueck.hpp"


using namespace std;

/* CONSTANTS */

/* STRUCTS / CLASSES */

/* CONSTRUCTURS & CLASS METHODS */

/* PROTOTYPES */

int main(int argc, char **argv) {
  Baugrundstueck hauptstr82;
  hauptstr82.speichereGrunddaten("Stadt", 100, 33, 530);
  hauptstr82.speichereHausdaten(1966, 120);
  hauptstr82.zeigeGrunddaten();
  hauptstr82.zeigeHausdaten();

  cout << "\n";
  return EXIT_SUCCESS;
} // main {} [] \n | ~

/* FUNCTIONS */

