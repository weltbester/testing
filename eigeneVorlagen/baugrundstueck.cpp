/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: point.cpp
 * --------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
#include <cstring>
#include "baugrundstueck.hpp"

using namespace std;
  
Baugrundstueck::Baugrundstueck( string &g,  int &f,
      int &fs,  int &gr,
      int &bj,  int &bgr):Grundstueck(g, f, fs, gr) {
  speichereHausdaten(bj, bgr);
}


Baugrundstueck::~Baugrundstueck() {
}

void Baugrundstueck::speichereHausdaten( int &bj,  int &bgr) {
  baujahr = bj;
  groesse = bgr;
}
void Baugrundstueck::zeigeHausdaten() const {
  cout << "Baujahr:\t\t" << baujahr << endl 
       << "Grundstuecksgroesse:\t\t" << groesse << endl;
}

/* {} [] \n | ~ */
