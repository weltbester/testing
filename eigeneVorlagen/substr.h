/*
 * File: substr.h
 * --------------
 * Defines an interface for a free function to return
 * a substring of a string.
 */

#ifndef SUBSTR_H
#define SUBSTR_H

/*
 * Function: substring
 * Usage: string result = substring(int pos, int n = defaultvalue);
 * ----------------------------------------------------------------
 * Returns a substring from a position (pos), containing n
 * characters and a defautl value for n, which is the end of the string.
 */

std::string substr(std::string str, int pos, int n);

#endif // SUBSTR_H
