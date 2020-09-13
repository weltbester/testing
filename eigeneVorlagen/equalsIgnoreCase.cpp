/* 
 * Copyright: Eric S. Roberts 
 * File: equalsIgnoreCase.cpp
 * --------------------------
 * Returns true if two strings are equal
 * ignoring differences in case.
 */ // {} [] \


#include <iostream>
#include ".h"
using namespace std;

/*
 * Implementation notes: equalsIgnoreCase
 * --------------------------------------
 * Returns true if two strings (not case sensitive)
 * are equal. So,
 *
 *     'equalsIgnoreCase("HelLo", hELlO)'
 *
 *  returns 'true'.  
 */

bool equalsIgnoreCase(string s1, string s2) {
  if (s1.length() != s2.length()) return false;
  for (size_t i = 0; i < s1.length(); ++i) {
    if (tolower(s1.at(i)) != tolower(s2.at(i))) return false;
  }
  return true;
}
