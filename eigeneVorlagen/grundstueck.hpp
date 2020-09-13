/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: grundstueck.hpp
 * ----------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef GRUNDSTUECK_H
#define GRUNDSTUECK_H

class Grundstueck {
protected:    // hier kann auch von einer abgeleiteten Klasse aus zugegriffen werden
  float sachwert;
private:
  char gemarkung[30];
  int flur, flurstueck, groesse;
public:
  Grundstueck();
  ~Grundstueck();
  void speichereGrunddaten(const char *n, int f,
			   int st, int g);
  void zeigeGrunddaten() const;
};

#endif // GRUNDSTUECK_H {} []
