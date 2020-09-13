/**
 * Copyright June 2020: Georg Pohl, 70174 Stuttgart
 * File: .cpp
 * ------------------
 * Description
 */

#include <iostream>

using namespace std;

template <typename T>
class MeineKlasse {
private:
  T wert;
public:
  MeineKlasse(const T &);
  void verdoppeln();
  void ausgeben();
};

template <typename T>
MeineKlasse<T>::MeineKlasse(const T &neuerWert) {
  wert = neuerWert;
}

template <typename T>
void MeineKlasse<T>::verdoppeln() {
  wert = wert + wert;
}

template <typename T>
void MeineKlasse<T>::ausgeben() {
  cout << wert << endl;
}

/* CONSTANTS */

/* STRUCTS / CLASSES */

/* CONSTRUCTORS & CLASS METHODS */

/* PROTOTYPES */

int main() {
  MeineKlasse<int> x(5);
  x.verdoppeln();
  x.ausgeben();

  MeineKlasse<string> s("Hallo");
  s.verdoppeln();
  s.ausgeben();
  
  return EXIT_SUCCESS;
} // main {} [] \n | ~

/* FUNCTIONS */

