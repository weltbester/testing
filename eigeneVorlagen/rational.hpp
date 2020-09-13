/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: rational.hpp
 * ------------------
 * This interface exports a class for representing rational numbers.
 */

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <string>

/**
 * Class: Rational
 * Usage: Rational zero;
 *        Rational num(n);
 *        Rational r(x, y);
 * ------------------------
 * Creates a Rational object. The default constructor creates the
 * rational number 0. The singel-argument form creates a rational
 * number equal to the specified integer, and the two-argument form
 * creates a rational number corresponding to the fraction x/y.
 */

class Rational {
public:
  Rational();
  Rational(int n);
  Rational(int n, int d);

/**
 * Method: toString()
 * Usage: string str = r.toString();
 * ---------------------------------
 * Creates a Rational object. The default constructor creates the
 * rational number 0. The singel-argument form creates a rational
 * number equal to the specified integer, and the two-argument form
 * creates a rational number corresponding to the fraction x/y.
 */
  std::string toString();

/* Declare the operator functions as friends */
  friend Rational operator+(Rational r1, Rational r2);
  friend Rational operator-(Rational r1, Rational r2);
  friend Rational operator*(Rational r1, Rational r2);
  friend Rational operator/(Rational r1, Rational r2);

/* Private section */
  
private:
  /* Instance Variables */
  int num;
  int den;
};

/**
 * Operator: <<
 * ------------
 * Overloads the << operator so that it is able to display Rational values.
 */

std::ostream &operator<<(std::ostream &os, Rational rat);

/**
 * Operator: +
 * Usage: r1 + r2
 * --------------
 * Overloads the + operator so that it is able to add Rational numbers.
 */

Rational operator+(Rational r1, Rational r2);

/**
 * Operator: -
 * Usage: r1 - r2
 * --------------
 * Overloads the << operator so that it is able to substract Rational numbers.
 */

Rational operator-(Rational r1, Rational r2);

/**
 * Operator: *
 * Usage: r1 * r2
 * --------------
 * Overloads the << operator so that it is able to multiply Rational numbers.
 */

Rational operator*(Rational r1, Rational r2);
/**
 * Operator: /
 * Usage: r1 / r2
 * --------------
 * Overloads the << operator so that it is able to divide Rational numbers.
 */

Rational operator/(Rational r1, Rational r2);
#endif // RATIONAL_H {} []
