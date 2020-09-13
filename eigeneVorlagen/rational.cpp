/**
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: rational.cpp
 * -----------------
 * This file implements the Rational class.
 */

#include <string>
#include <cstdio>
#include "rational.hpp"


using namespace std;

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */
int gcd(int x, int y);

/**
 * Implementation notes: Constructors
 * ----------------------------------
 * There are three constructors for the Rational class. The default constructor
 * creates a Rational with a zero value, the one-argument form converts an
 * integer to a Rational, and the two-argument form allows you to specify a
 * fraction. The constructors ensure that the following invariants are maintained:
 * 
 * 1. The fraction is always reduced to lowest terms.
 * 2. The denomination is always positive.
 * 3. Zero is always representet as 0/1. 
 */

Rational::Rational() {
  num = 0;
  den = 1;
}

Rational::Rational(int n) {
  num = n;
  den = 1;
}
Rational::Rational(int n, int d) {
  if (d == 0) {
    perror("Rational: Division by zero");
  }
  if (n == 0) {
    num = 0;
    den = 1;
  } else {
    int g = gcd(abs(n), abs(d));
    num = n / g;
    den = abs(d) / g;
    if (d < 0) {
      num = -num;
    }
  }
}

/* Implementation of toString and the << operator */

string Rational::toString() {
  if (den == 1) {
    return to_string(num);
  } else {
    return to_string(num) + "/" + to_string(den);
  }
}

ostream &operator<<(ostream &os, Rational rat) {
  return os << rat.toString();
}

/**
 * Implementation notes: arithmetic operators
 * ------------------------------------------
 * This implementation of the operators follows directly from the definitions. 
 */

Rational operator+(Rational r1, Rational r2) {
  return Rational (r1.num * r2.den + r2.num * r1.den, r1.den * r2.den);
}

Rational operator-(Rational r1, Rational r2) {
  return Rational (r1.num * r2.den - r2.num * r1.den, r1.den * r2.den);
}

Rational operator*(Rational r1, Rational r2) {
  return Rational (r1.num * r2.num, r1.den * r2.den);
}

Rational operator/(Rational r1, Rational r2) {
  return Rational (r1.num * r2.den, r1.den * r2.num);
}

/**
 * Implementation notes: gcd
 * -------------------------
 * This implementation uses Euclid's algorithm to calculate the greatest common divisor. 
 */  

int gcd(int x, int y) {
  int r = x % y;
  while (r != 0) {
    x = y;
    y = r;
    r = x % y;
  }
  return y;
}

// main {} [] \n | ~

/* FUNCTIONS */

