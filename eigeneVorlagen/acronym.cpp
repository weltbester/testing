/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: acronym.cpp
 * -----------------
 * acronym
 */

#include <iostream>
#include <cctype>
#include "test.h"
using namespace std;

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
// {} [] \

/*
 * Implementation notes: acronym
 * -----------------------------
 * This function takes a string and returns a
 * string of the captitalized characters of
 * the initial letters of each word. Example:
 *
 * self-contained underwater breathing apparatus
 * results in SCUBA
 */

string acronym(string str) {
  string acronym;
  for (int i = 0; i < str.length(); i++) {
    if (i == 0 && isalnum(str.at(0))) {
      acronym += toupper(str.at(i));
    } else if (!isalpha(str.at(i))) {
      acronym += toupper(str.at(i + 1));
    }
  }
  return acronym;
}
