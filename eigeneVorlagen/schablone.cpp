/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: schablone.cpp
 * -------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
#include "schablone.hpp"

using namespace std;

Schablone::Schablone(string n, float r, float a, float b):Kreis(n, r), Rechteck(m, a, b) {
  
}

Schablone::~Schablone() {
}

float Schablone::berechneFlaeche() {
  return (Kreis::berechneFlaeche() - Rechteck::berechneFlaeche());
}

/* {} [] \n | ~ */
