/*
 * File: substr.cpp
 * ----------------
 * This file implements the substr interface.
 */

#include <iostream>
#include <string>
#include "strlib.h"
#include "substr.h"

/*
 * Implementation notes: substr
 * ----------------------------
 * Returns a substring for position (pos) with n
 * characters. If n is missing or greater than the
 * length of the string, n should be set to str.length().
 */

std::string substr(std::string str, int pos, int n ) {
    std::string result = "";
    if (pos > str.length()) {
       error("Geht nicht!");
    }
    if (n == 0 || n > str.length() - pos) {
        n = str.length();
    }
    for (int i = pos; i < pos + n; ++i) {
        result[i - pos] = str[i];
    }
    return result;
}
