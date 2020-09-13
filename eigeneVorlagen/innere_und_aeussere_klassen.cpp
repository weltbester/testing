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
  void werteZuweisen(int, double, string);
  void ausgeben();

  class FehlerKlasse {
  private:
    int nummer;
  public:
    string what();
    FehlerKlasse(const int &n) {nummer = n;};
  };
};

void PostenTyp::werteZuweisen(int a, double p, string b) {
  if (a < 0) {
    throw FehlerKlasse(1);
  }
  else {
    anzahl = a;
  }
  if (p < 0) {
    throw FehlerKlasse(2);
  }
  else {
    preis = p;
  }
  if (b == "") {
    throw FehlerKlasse(3);
  }
  else {
    bezeichnung = b;
  }
}
void PostenTyp::ausgeben() {
  cout << anzahl << " " << preis << " " << bezeichnung << endl;
}

string PostenTyp::FehlerKlasse::what() {
  if (nummer == 1) {
    return "Anzahl zu klein.";
  }
  else if (nummer == 2) {
    return "Preis zu niedrig.";
  }
  else {
    return "Keine Bezeichnung.";
  }
}

/* CONSTRUCTORS & CLASS METHODS */

/* PROTOTYPES */


int main() {
  PostenTyp pEins;

  try {
    pEins.werteZuweisen(1, 1.5, "");
  }
  catch(PostenTyp::FehlerKlasse &e) {
    pEins.werteZuweisen(0, 0.0, "unbekannt");
    cout << "Fehler: " << e.what() << endl;
  }
  pEins.ausgeben();
  
  cout << "\n";
  return EXIT_SUCCESS;
} // main {} [] \n | ~

/* FUNCTIONS */
