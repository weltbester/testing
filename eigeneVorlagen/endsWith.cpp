/*
 * File endsWith.cpp
 * -----------------
 * This file implements the endswith.h interface
 */

#include <iostream>
#include "endsWith.h"

using namespace std;

/*
 * Implementation notes: endsswith
 * --------------------------------
 * This function checks if a string ends with
 * a specific substring.
 */

bool endsWith(string str, string substr) {
  size_t diff = str.length() - substr.length();
  if (substr.length() > str.length()) {
    return false;
  }
  for (size_t i = 0; i < substr.length(); ++i) {
    if (str.at(diff + i) != substr.at(i)) {
      return false;
    }
  }
  return true;
}
