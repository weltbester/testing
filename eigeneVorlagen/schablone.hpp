/** 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: schablone.hpp
 * ----------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef SCHABLONE_H
#define SCHABLONE_H

#include "rechteck.hpp"
#include "kreis.hpp"

class Schablone:public Kreis, public Rechteck {
public:
  Schablone(std::string n, float r, float a, float b);
  ~Schablone();
  float berechneFlaeche();
};

#endif // SCHABLONE_H {} [] \n | ~
