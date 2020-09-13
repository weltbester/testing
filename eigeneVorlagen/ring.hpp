#ifndef RING_H
#define RING_H
#include "kreis.hpp"

class Ring:public Kreis {
    private:
    float innenradius;
    public:
    Ring(std::string n, float aussen, float innen);
    ~Ring();
    float berechneFlaeche() const;
  float berechneUmfang() const;
};

#endif // RING_H
