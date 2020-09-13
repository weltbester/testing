/** 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: header.hpp
 * ----------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef GRUNDSTUECK_H
#define GRUNDSTUECK_H

//#include <library>

class Grundstueck {
private:
  std::string gemarkung;
  int flur, flurstueck, groesse;
public:
  Grundstueck( std::string &,  int &,
	       int &,  int &);

  ~Grundstueck();
  void speichereGrunddaten(const std::string &,  int &,
			   int &,  int &);
  void zeigeGrunddaten() const;
};

#endif // GRUNDSTUECK_H {} []
				   
