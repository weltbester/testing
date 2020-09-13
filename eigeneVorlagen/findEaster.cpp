/* 
 * Copyright 2020, Georg Pohl, 70174 Stuttgart
 * File findEaster.cpp
 * -------------------
 * The file implements the findEaster.h interface.
 */

#include <string>
#include "findEaster.h"
using namespace std;

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

void findEaster(int year, string &month, int &day) {
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
        month = "April";
    }
}
