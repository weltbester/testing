/** 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: header.hpp
 * ----------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef BAUGRUNDSTUECK_H
#define BAUGRUNDSTUECK_H

#include "bspl0048.hpp"

class Baugrundstueck:public Grundstueck {
private:
  int baujahr, groesse;
public:
  Baugrundstueck( std::string &,  int &,
		  int &,  int &,
		  int &,  int &);
  
  ~Baugrundstueck();
  void speichereHausdaten( int &,  int &);
  void zeigeHausdaten() const;
};

#endif // BAUGRUNDSTUECK_H {} [] \n | ~
