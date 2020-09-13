/*
 * Copyright June 2020: Georg Pohl, 70174 Stuttgart
 * File: .cpp
 * ------------------
 * Description
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>


using namespace std;


// CONSTANTS

// STRUCTS / CLASSES

// CONSTRUCTORS & CLASS METHODS

// PROTOTYPES

// MAIN
int main() {
  vector<string> name;
  vector<string> vorname;
  vector<int> personalNummer;
  vector<double> gehalt;
  vector<string> geburtstag;
  string weiter, eingabe;
  int eingabeInt;
  double eingabeDouble;
  istringstream eingabeStrom;
  
  do {
    cout << "Datensatz eingeben (J/N): ";
    getline(cin, weiter);
  } while(!(weiter == "J" || weiter == "N"));

  while (weiter == "J") {
    cout << "Name: ";
    getline(cin, eingabe);
    name.push_back(eingabe);
    
    cout << "Vorname: ";
    getline(cin, eingabe);
    vorname.push_back(eingabe);
    
    cout << "Personalnummer: ";
    getline(cin, eingabe);
    if (eingabe == "") {
      eingabeInt = 0;
    }
    else {
      eingabeStrom.str(eingabe);
      eingabeStrom >> eingabeInt;
      eingabeStrom.clear();
    }
    personalNummer.push_back(eingabeInt);

    cout << "Gehalt: ";
    getline(cin, eingabe);
    if (eingabe == "") {
      eingabeDouble = 0.0;
    }
    else {
      eingabeStrom.str(eingabe);
      eingabeStrom >> eingabeDouble;
      eingabeStrom.clear();
    }
    gehalt.push_back(eingabeDouble);

    do {
      cout << "Geburtstag: ";
      getline(cin, eingabe);
      
    } while (eingabe.length() != 10 || eingabe.at(2) != '.' || eingabe.at(5) != '.');
    geburtstag.push_back(eingabe);
    
    
    do {
      cout << "Datensatz eingeben (J/N): ";
      cin >> weiter;
    } while(!(weiter == "J" || weiter == "N"));
  }

  if (!name.empty()) {
    cout << "Name\t" << "Vorname\t" << "Personalnummer\t" << "Gehalt\t" << "Geburtstag" << endl;

    for (size_t i = 0; i < name.size(); ++i) {
      cout << name.at(i) << "\t" << vorname.at(i) << "\t" << personalNummer.at(i)
	   << "\t\t" << gehalt.at(i) << "\t" << geburtstag.at(i) << "\t" << endl;
    }
  }
  
  cout << "\n";
  return EXIT_SUCCESS;
} // MAIN {} [] \n | ~

// FUNCTIONS //

