/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: createOrdinalForm.cpp
 * ---------------------------
 * This functions implements the interface createOrdinalForm.h
 */

#include <iostream>
using namespace std;

/* {} [] | */					\

/*
 * Implementation notes: createOrdinalForm
 * ---------------------------------------
 * The suffix for ordinal numbers is 1(st), 2(nd), 3(rd), 4(th),
 * 21st, 22nd, 23rd, 24th etc.
 * This is true for all number colons, except the numbers
 * between 10 and 14. They also get all the suffix "th".
 * So the differentiation is made for the case 1 to 3 and
 * only for the numbers 11, 12, 13. The rest gets the
 * default suffix "th".
 * Therefore the last digit has been extracted for further
 * investigation (switch statement).
 */

string createOrdinalForm(int n) {
  int lastDigit = n % 10;

  switch (lastDigit) {
  case 1:
    if (n > 10 && n < 14) {
      return "th";
    } else {
      return "st";
    }
  case 2:
    if (n > 10 && n < 14) {
      return "th";
    } else {
      return "nd";
    }
  case 3:
    if (n > 10 && n < 14) {
      return "th";
    } else {
      return "rd";
    }
  default:
    return "th";
  }
}
