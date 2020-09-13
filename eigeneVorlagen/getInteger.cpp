/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: getInteger.cpp
 * --------------------
 * This functions implements the interface getInteger.h
 */

#include <iostream>
using namespace std;

/* {} [] | */					\

/**
 * Implementation notes: getInteger
 * --------------------------------
 * Requests an integer value from the user. The function begins by
 * printing the prompt string on the console and then waits for the
 * user to enter a line of input data. If that line constains a
 * single integer, the function returns the corresponding integer
 * value. If the input is not a legal integer or if extraneous
 * characters (other than whitespace) appear on the input line,
 * the implementation gives the user a chance to reenter the value.
 */

int getInteger(string prompt) {
  int value;
  string line;
  while (true) {
    cout << prompt;
    getline(cin, line);
    istringstream stream(line);
    stream >> value >> ws;
    if (!stream.fail() && stream.eof()) {
      break;
    }
    cout << "Illegal integer format. Try again." << endl;
  }
  return value;
}
