#include <iostream>
#include <cmath>
#include "ring.hpp"

using namespace std;

Ring::Ring(string n, float aussen, float innen):Kreis(n, aussen) {
    innenradius = innen;
}
Ring::~Ring() {

}

float Ring::berechneFlaeche() const {
    return (Kreis::berechneFlaeche() - (innenradius * innenradius + 4 * atan(1.0)));
}
