/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: replaceAll.cpp
 * --------
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
 * Implementation notes: replaceAll
 * --------------------------------
 * Returns a copy of 'str' with every occurence
 * of 'c1' replaced by 'c2'.
 * Below there's an overloaded function, which
 * replaces strings rather than characters.
 */

string test(const string str, const char c1, const char c2) {
  string result = "";
  for (size_t i = 0; i < str.length(); ++i) {
    if (str.at(i) == c1) {
      result += c2;
    } else {
      result += str.at(i);
    }
  }
  return result;
}

string test(const string str, const string str1, const string str2) {
  string result = "";
  size_t n = str.find(str1,0);
  return result;
}
