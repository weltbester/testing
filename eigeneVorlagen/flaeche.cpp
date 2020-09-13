#include <iostream>
#include <cstring>
#include "flaeche.hpp"

using namespace std;

Flaeche::Flaeche(string n) {
    farbe = n;
}

Flaeche::~Flaeche() {

}

void Flaeche::getFarbe() const {
    cout << "\n" << farbe << endl;
}
