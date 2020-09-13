/* 
 * Copyright 2020, Georg Pohl, 70174 Stuttgart
 * File calendar.cpp
 * -------------------
 * The file implements the functions of the
 * calendar.h interface.
 * {} [] \ |
 */

#include <string>
#include "calendar.hpp"
using namespace std;

/*
 * Implementation notes: daysInMonth
 * ---------------------------------
 * Returns the number of days for a specific
 * month, including the corner case for
 * FEBRUARY.
 */

int daysInMonth(Month month, int year) {
  switch (month) {
  case FEBRUARY:
      if (isLeapYear(year)) {
	return 29;
      } else {
	return 28;
      }
  case APRIL:
  case JUNE:
  case SEPTEMBER:
  case NOVEMBER:
    return 30;
  default:
    return 31;
  }
}

/*
 * Implementation notes: isLeapYear
 * --------------------------------
 * Returns true if a given year is a leap year.
 */

bool isLeapYear(int year) {
  return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0 );
}
/*
 * Implementation notes: monthToString
 * -----------------------------------
 * This function returns a month as a string. When
 * the input is illegal, "not applicable (n.a.) is
 * returned.
 */

string monthToString(Month month) {
  switch (month) {
    case JANUARY: return "JANUARY";
    case FEBRUARY: return "FEBRUARY";
    case MARCH: return "MARCH";
    case APRIL: return "APRIL";
    case MAY: return "MAY";
    case JUNE: return "JUNE";
    case JULY: return "JULY";
    case AUGUST: return "AUGUST";
    case SEPTEMBER: return "SEPTEMBER";
    case OCTOBER: return "OCTOBER";
    case NOVEMBER: return "NOVEMBER";
    case DECEMBER: return "DECEMBER";
    default: return "n.a.";
  }
}

/*
 * Implementation notes: findEaster
 * --------------------------------
 * This function finds the date of easter sunday for
 * every year in the past and the future (only for
 * Gregorian calendar). If you want to use this
 * function for Julian easter dates, you have to set
 * m = 15 and s = 0.
 * Since two values are searched, the function does
 * not return anything (void), rather than changing
 * the reference values m (string month) and d
 * (int day).
 */

void findEaster(int year, int &day, string &month) {
    int k, m, s, a, d, r, og, sz, oe, os;
    k = year / 100;
    m = 15 + (3 * k + 3) / 4 - (8 * k + 13) / 25;
    s = 2 - (3 * k + 3) / 4;
    a = year % 19;
    d = (19 * a + m) % 30;
    r = (d + a / 11) / 29;
    og = 21 + d - r;
    sz = 7 - (year + year / 4 + s) % 7;
    oe = 7 - (og - sz) % 7;
    os = og + oe;
    if (os > 31) {
        day = os - 31;
        month = ". April";
    } else {
        day = os;
        month = ". March";
    }
}
