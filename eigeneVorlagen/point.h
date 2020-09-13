/** 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: point.h
 * -------------
 * This interface exports the Point class, which represents a point on
 * a two-dimensional integer grid.
 */

#ifndef POINT_H
#define POINT_H

#include <string>

/** 
 * Constructor: Point
 * Usage: Point origin;
 *        Point pt(xc, yc);
 * ------------------------
 * Creates a Point object. The default constructor sets the coordinates
 * to 0; the second form sets the coordinates to xc and yc.
 */

class Point {
 public:
  Point();
  Point(int xc, int yc);

/** 
 * Methods: getX, getY
 * Usage: int x = pt.getX();
 *        int y = pt.getY();
 * -------------------------
 * These methods return the x and y coordinates of the point.
 */

 int getX();
 int getY();

/** 
 * Methods: toString
 * Usage: string str = pt.toString()
 * ---------------------------------
 * Returns a string representation of the Point in form "(x,y)"
 */

std::string toString();

private:

/* Friend declaration */

  friend bool operator==(Point p1, Point p2);

/* Instance Variables */
  
  int x;
  int y;
};

/** 
 * Operator: <<
 * Usage: cout << pt;
 * ------------------
 * Overloads the << operator so that it is able to display Point values
 */

std::ostream &operator<<(std::ostream &os, Point pt);

/** 
 * Operator: ==
 * Usage:  p1 == p2;
 * -----------------
 * Implements the == operator for points
 */

bool operator== (Point p1, Point p2);

/** 
 * Operator: !=
 * Usage:  p1 != p2;
 * -----------------
 * Implements the != operator for points
 */

bool operator!= (Point p1, Point p2);

#endif // POINT_H {} []
