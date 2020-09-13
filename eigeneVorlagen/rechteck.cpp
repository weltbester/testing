/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: rechteck.cpp
 * ------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
#include "rechteck.hpp"  // Interface dieser Klasse importieren

using namespace std;

Rechteck::Rechteck(std::string n, float l, float b):Flaeche(n) {
  laenge = l;
  breite = b;
}

Rechteck::~Rechteck() {

}

float Rechteck::berechneFlaeche() const {
  return laenge * breite;
}

/* {} [] \n | ~ */
