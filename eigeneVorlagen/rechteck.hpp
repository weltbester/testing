/** 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: rechteck.hpp
 * ------------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef RECHTECK_H
#define RECHTECK_H

#include "flaeche.hpp"  // zu beerbende Klasse importieren

class Rechteck:public Flaeche {
private:
  float laenge, breite;
public:
  Rechteck(std::string n, float l, float b);
  ~Rechteck();
  float berechneFlaeche() const;
};

#endif // RECHTECK_H {} [] \n | ~
