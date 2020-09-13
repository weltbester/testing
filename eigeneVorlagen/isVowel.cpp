/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: isVowel.cpp
 * --------
 * This functions implements the interface isVowel.h
 */

#include <iostream>
#include "isVowel.h"

using namespace std;

/* {} [] | */

/*
 * Implementation notes: isVowel
 * -----------------------------
 * If a character is a vowel, this implementation
 * will return 'true'.
 */

bool isVowel(char ch) {
  return (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i'
	            || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u');
}
