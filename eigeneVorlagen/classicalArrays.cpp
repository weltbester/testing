/*
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart
 * File: classicalArrays.cpp
 * -------------------------
 * Description
 */

#include <iostream>

using namespace std;

/* CONSTANTS */


/* STRUCTS */

/* PROTOTYPES */

int main() {
  double preise[3];

  preise[0] = 1.45;
  preise[1] = 0.85;
  preise[2] = 0.75;

  for (int i = 0; i < 3; ++i) {
    cout << "Element " << i << ": " << preise[i] << endl;
  }
  double summe = 0.0;
  for (const auto &p:preise) {
    summe += p;
  }
  cout << "Summe: " << summe << endl;
  
  cout << endl;
  return EXIT_SUCCESS;
} // main {} [] \ |

/* Functions */
