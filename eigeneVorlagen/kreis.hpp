#ifndef KREIS_H
#define KREIS_H
#include "flaeche.hpp"

class Kreis:public Flaeche {
  private:
  float radius;
  public:
  Kreis(std::string n, float a);
  ~Kreis();
  float berechneFlaeche() const;
  float berechneUmfang() const;
};

#endif // KREIS_H
