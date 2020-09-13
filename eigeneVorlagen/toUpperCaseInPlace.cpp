/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: toUpperCaseInPlace.cpp
 * ----------------------------
 * This function converts a given string 'str' into
 * an UPPERCASE string.
 * 
 */

#include <iostream>
#include ".h"
using namespace std;

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
// {} [] \

/*
 * Implementation notes: toUpperCaseInPlace
 * ----------------------------------------
 * This implementation converts the original
 * string into an UPPERCASE string.
 */

void toUpperCaseInPlace(string &str) {
  for (size_t i = 0; i < str.length(); ++i) {
    str.at(i) = toupper(str.at(i));
  }
}
