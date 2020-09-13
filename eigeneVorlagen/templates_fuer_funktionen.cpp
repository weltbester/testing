/**
 * Copyright June 2020: Georg Pohl, 70174 Stuttgart
 * File: .cpp
 * ------------------
 * Description
 */

#include <iostream>
#include <string>

using namespace std;

/* CONSTANTS */

/* STRUCTS / CLASSES */
class PostenTyp {
private:
  int anzahl;
  double preis;
  string bezeichnung;
public:
  PostenTyp(const int &, const double &, const string &);
  bool operator > (const PostenTyp &);
  void ausgeben();
};

PostenTyp::PostenTyp(const int &a, const double &p, const string &b) {
  anzahl = a;
  preis = p;
  bezeichnung = b;
}

void PostenTyp::ausgeben() {
  cout << anzahl << " " << preis << " " << bezeichnung << endl;
}

bool PostenTyp::operator > (const PostenTyp &andersObjekt) {
  if (anzahl * preis > andersObjekt.anzahl * andersObjekt.preis) {
    return true;
  }
  else {
    return false;
  }
}

template <typename T>
T maximum(T &a, T &b) {
  T ergebnis = b;
  if (a > b) {
    ergebnis = a;
  }
  return ergebnis;
}


/* CONSTRUCTORS & CLASS METHODS */

/* PROTOTYPES */

int main() {
  int a = 15, b = 8;
  double x = 6.3, y = 8.2;
  PostenTyp postenEins(3, 1.45, "Apfel");
  PostenTyp postenZwei(2, 1.45, "Apfel");

  if (postenEins > postenZwei) {
    cout << "Eins > Zwei" << endl;
  }
  else {
    cout << "Zwei < Eins" << endl;
  }

  cout << maximum(a, b) << endl;
  cout << maximum(x, y) << endl;
  maximum(postenEins, postenZwei).ausgeben();
  
  return EXIT_SUCCESS;
} // main {} [] \n | ~

/* FUNCTIONS */

