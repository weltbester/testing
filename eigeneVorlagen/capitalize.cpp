/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: capitalize.cpp
 * --------------------
 * capitalize
 */

#include <iostream>
#include <cctype>
using namespace std;

/* FUNCTIONS */
/* {} [] \ */

/*
 * Implementation notes: capitalize 
 * --------------------------------
 * Returns a string where the initial letter is
 * capitalized; all remaining letters are converted
 * to lower case.
 */

string capitalize(string str) {
  string result = "";
  for (size_t i = 0; i < str.length(); ++i) {
    char ch = str.at(i);
    if (i == 0) {
      result += toupper(ch);
    } else {
    result += tolower(ch);
    }
  } 
  return result;
}
