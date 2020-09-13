/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: removeDoubleLetters.cpp
 * -----------------------------
 * Description
 */

#include <iostream>
#include "test.h"
using namespace std;

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] | */					\

/*
 * Implementation notes: removeDoubleLetters
 * -----------------------------------------
 * This function deletes all double (triple) letters
 * of a string and returns the new created string.
 * Because we are encountering the fence post problem,
 * we have to add the last character after the for-
 * loop.
 *
 * so 'bookkeeper' becomes 'bokeper' 
 */

string removeDoubleLetters(string str) {
  string result;
  for (size_t i = 1; i < str.length(); ++i) {
    if (str.at(i-1) == str.at(i)) {
      continue;
    } else {
      result += str.at(i-1);
    }
  }
  result += str.at(str.length()-1);
  return result;
}
