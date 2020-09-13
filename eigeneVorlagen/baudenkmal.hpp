/** 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: header.hpp
 * ----------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef BAUDENKMAL_H
#define BAUDENKMAL_H

#include "baugrundstueck.hpp"

class Baudenkmal:public Baugrundstueck {
private:
  std::string schutz;
public:
  Baudenkmal( std::string &,  int &,
		  int &,  int &,
		  int &,  int &,  std::string &);
  ~Baudenkmal();
  void speichereGebaeudeteil( std::string &s);
  void zeigeGebaeudeteil() const;
};

#endif // BAUDENKMAL_H {} [] \n | ~
