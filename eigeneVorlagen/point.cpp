/** 
 * Copyright May 2020: Georg Pohl, 70174 Stuttgart
 * File: point.cpp
 * ---------------
 * This file implements the point.h interface. The comments have been
 * eliminated from this listing so that the implementation fits on a
 * single page.
 */

#include <string>
#include "point.h"

using namespace std;

/* {} [] | \n */

/**
 * Implementation notes: getInteger
 * --------------------------------
 * This implementation checks if a string is a palindrome sentence,
 * no matter of punctuation and upper or lower case.
 * The for-loop runs use type 'size_t' for the counter variable.
 * Therefore the counter values can't be negative. For that reason
 * the second loop is running from 'strCopy.length(), instead of
 * ('strCopy.length()' - 1) to i > 0, instead i >= 0.
 */

Point::Point() {
  x = 0;
  y = 0;
}

Point::Point(int xc, int yc) {
  x = xc;
  y = yc;
} 

int Point::getX() {
  return x;
}

int Point::getY() {
  return y;
}

string Point::toString() {
  return "(" + to_string(x) + "," + to_string(y) + ")";
}

bool operator==(Point p1, Point p2) {
  return p1.x == p2.x && p1.y == p2.y;
}
bool operator!=(Point p1, Point p2) {
  return !(p1 == p2);
}
ostream &operator<<(ostream &os, Point pt) {
  return os << pt.toString();
}
