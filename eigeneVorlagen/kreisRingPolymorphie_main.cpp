/**
 * Copyright June 2020: Georg Pohl, 70174 Stuttgart
 * File: .cpp
 * ------------------
 * Description
 */

#include <iostream>
#include "kreis.hpp"
#include "ring.hpp"

using namespace std;

/* CONSTANTS */

/* STRUCTS & CLASSES */

/* PROTOTYPES */

int main(int argc, char **argv) {
    Kreis *zeiger;

    Ring red_ring("RED", 15, 4);
    red_ring.getFarbe();
    cout << "Flaeche des Rings: " << red_ring.berechneFlaeche() << endl;
    
    zeiger = &red_ring;
    zeiger->getFarbe();
    cout << "Flaeche nach Umwandlung: " << zeiger->berechneFlaeche() << endl;

    cout << "\n ";
    return EXIT_SUCCESS;
} // main {} [] \n |

/* FUNCTIONS */
