/*
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart
 * File: classicalArrays.cpp
 * -------------------------
 * Description
 */

#include <iostream>
#include <array>

using namespace std;

/* CONSTANTS */


/* STRUCTS */

/* PROTOTYPES */
void printArrayTempl(array<double, 3>);
double sumArray(array<double, 3>);


int main() {
  array<double, 3> preise = { 1.45, 0.85, 0.75 };

  /* another way to fill array templates 
  preise.at(0) = 1.45;
  preise.at(1) = 0.85;
  preise.at(2) = 0.75;
  */

  try {
    cout << "Element 5 mit []: " << preise[5] << endl;
    cout << "Element 5 mit at(): " << preise.at(5) << endl;
    cout << "Ende des try-Blocks "<< endl;
  }
  catch (exception &e) {
    cout << "Fehler: " << e.what() << endl;
  }
  cout << "Nach der Ausnahmebehandlung" << endl;

  // Array ausgeben
  printArrayTempl(preise);
  // Print sum of array
  cout << "Summe: " << sumArray(preise) << endl;
  
  cout << endl;
  return EXIT_SUCCESS;
} // main {} [] \ |

/* Functions */
void printArrayTempl(array<double, 3> p) {
 for (size_t i = 0; i < p.size(); ++i) {
    cout << "Element " << i << ": " << p.at(i) << endl;
 }
 return;
}
double sumArray(array<double, 3> p) {
  double summe = 0.0;
  for (const auto &v:p) {
    summe += v;
  }
  return summe;
}
