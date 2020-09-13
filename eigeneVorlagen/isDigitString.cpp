/* 
 * Copyright: Eric S. Roberts 
 * File: isDigitString.cpp
 * -----------------------
 * Returns true if the argument 'str'
 * is a nonempty string of digits.
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
 * Implementation notes: <functionName>
 * ------------------------------------
 * In contrast to the 'isdigit' function this implementation
 * not only checks a single character, rather than a complete
 * string, if it built from digits. 
 */

bool isDigitString(string str) {
  if (str.length() == 0) return false;
  for (size_t i = 0; i < str.length(); ++i) {
    if (!isdigit(str.at(i))) return false;
  }
  return true;
}
