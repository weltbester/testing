/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: point.cpp
 * --------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
#include "baudenkmal.hpp"

using namespace std;

Baudenkmal::Baudenkmal( string &g,  int &f,
		        int &fs,  int &gr,
		        int &bj,  int &bgr,
		        string &s):Baugrundstueck(g, f, fs, gr, bj, bgr) {
  
  speichereGebaeudeteil(s); 
}
Baudenkmal::~Baudenkmal() {
}
void Baudenkmal::speichereGebaeudeteil( string &s) {
    schutz = s;
}

void Baudenkmal::zeigeGebaeudeteil() const {
  cout << "Geschuetztes Teil:\t" << schutz << endl;
}

/* {} [] \n | ~ */
