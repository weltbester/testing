/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: grundstueck.cpp
 * --------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
#include <string>
#include <cstring>
#include "grundstueck.hpp"  // Interface der Basisklasse

using namespace std;

Grundstueck::Grundstueck() {
  cout << "\n" << "Basis Konstruktor";
};

Grundstueck::~Grundstueck() {
  cout << "\n" << "Basis Destruktor" << "\n";
};

void Grundstueck::speichereGrunddaten(const char *n, int f,
			   int st, int g) {
  strncpy(gemarkung, n, 29);
  flur = f;
  flurstueck = st;
  groesse = g;
  sachwert = static_cast<float>(g)*180;
}

void Grundstueck::zeigeGrunddaten() const {
  cout << "\n" << "Gemarkung: " << gemarkung << "\n" << "Flur:\t" << flur << "\n"
       << "Flurstueck: " << flurstueck << "\n" << "Groesse: " << groesse
       << "\n" << "Wert: " << sachwert << " DM";  // ... und Ausgabe von u. a. der prot. Variablen
}


/* {} [] | \n */

