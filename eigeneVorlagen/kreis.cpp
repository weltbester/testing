#include <iostream>
#include <cmath>
#include "kreis.hpp"

using namespace std;

Kreis::Kreis(string n, float a):Flaeche(n) {
    radius = a;
}

Kreis::~Kreis() {

}

float Kreis::berechneFlaeche() const {
    return 4 * atan(1.0) * radius * radius;
}
