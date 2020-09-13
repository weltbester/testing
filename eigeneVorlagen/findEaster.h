/* 
 * Copyright 2020, Georg Pohl, 70174 Stuttgart
 * File findEaster.h
 * -----------------
 * This interface exports the function to find
 * the date of easter sunday in a Gregorian
 * calendar.
 */

#ifndef FINDEASTER_H
#define FINDEASTER_H

/*
 * Function: findEaster
 * Usage: findEaster(y, m, d);
 * ---------------------------
 * Takes the year (y) and calculates the easter date
 * with a modern (corrected) algorithm of Carl
 * Friedrich Gauß .
 * Since two values are searched, the function does
 * not return anything (void), rather than changing
 * the reference values m (string month) and d (int day).
 */

void findEaster(int year, int &day, std::string &month = "March");

#endif // FINDEASTER_H
