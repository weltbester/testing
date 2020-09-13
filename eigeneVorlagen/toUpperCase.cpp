/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: toUpperCase.cpp
 * ----------------------------
 * This function converts a given string 'str' into
 * an UPPERCASE string copy.
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
 * This implementation converts a copy of a given
 * string into an UPPERCASE string. Therefore it
 * uses the 'toUpperCaseInPlace' function to
 * convert the copy in place of the calling
 * function and return it to the caller.
 */

string  toUpperCase(string str) {
  toUpperCaseInPlace(str);
  return str;
}

