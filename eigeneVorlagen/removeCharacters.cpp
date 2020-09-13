/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: removeCharacters.cpp
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
 * Implementation notes: removeCharacters
 * --------------------------------------
 * This function removes all characters of str2
 * out of str1 in the original string. 
 */

void test(string &str, string remove) {
  for (size_t i = 0; i < str.length(); ++i) {
    bool isFound = false;
    for (size_t j = 0; j < remove.length(); ++j) {
      if (str.at(i) == remove.at(j)) {
        str.erase(i, 1);
        isFound = true;
        if (i == str.length()) {
            break;
        }
      }
    }
    if (isFound) i--;
  }
}
