/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: calendar.hpp
 * ------------------
 * This interface exports calendar functions
 */

#ifndef CALENDAR_H
#define CALENDAR_H

#include <string>

/*
 * Typ: Month
 * ----------
 * This enumerated Typ represents the twelve month
 * of the year.
 * 
 * Iterating over an enumeration:
 * for (Month i = JANUARY; i <= 12; i++) {
 *   ...
 * }
 */

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL,
	     MAY, JUNE, JULY, AUGUST,
	     SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

/*
 * Function: daysInMonth
 * Usage: int n = daysInMonth(int month, int year);
 * ------------------------------------------------
 * This function returns the number of day for a
 * given month. February is handled as a corner case
 * with 29 instead of 28 days, when there is a Leap
 * year.
 */

int daysInMonth(Month month, int year);

/*
 * Function: isLeapYear
 * Usage: if (isLeapYear) ...;
 * --------------------------
 * The function returns true,
 * when a given year is a Leap
 * year, otherwise false.
 */

bool isLeapYear(int year);

/*
 * Function: monthToString
 * Usage: string str = monthToString(Month month);
 * -----------------------------------------------
 * Returns the name of a month as a string.
 */

std::string monthToString(Month month);

/*
 * Function: findEaster
 * Usage: findEaster(y, m, d);
 * ---------------------------
 * Takes the year (y) and calculates the easter date
 * with a modern (corrected) algorithm of Carl
 * Friedrich Gauß for the Gregorian calendar.
 * 
 * The two "Return Values" (day and month)  are
 * provided by reference and their output is, e.g.:
 *
 * 12. April or 31. March
 * 
 * So there's no further editing necessary by the
 * caller.
 */

void findEaster(int year, int &day, std::string &month);

#endif /* CALENDAR_H {} [] \ */
