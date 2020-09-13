/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: point.cpp
 * --------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
#include <cstring>
#include "bspl0048.hpp"

using namespace std;

Grundstueck::Grundstueck( string &g,  int &f,
				      int &fs,  int &gr) {
  speichereGrunddaten(g, f, fs, gr);
}

Grundstueck:: ~Grundstueck() {
}

void Grundstueck::speichereGrunddaten(const string &g,  int &f,
				       int &fs,  int &gr) {
  gemarkung = g;
  flur = f;
  flurstueck = fs;
  groesse = gr;  
}

void Grundstueck::zeigeGrunddaten() const {
  cout << "Gemarkung:\t\t" << gemarkung << endl
       << "Flur:\t\t\t" << flur << endl
       << "Flurstueck:\t\t" << flurstueck << endl
       << "Groesse:\t\t" << groesse << endl;
}

/* {} [] \n | ~ */
