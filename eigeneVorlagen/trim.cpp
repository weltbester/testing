/*
 * File: trim.cpp
 * --------------
 * This file implements the trim.h interface.
 */

#include <iostream>
#include <strlib.h>
using namespace std;

/*
 * Implementation notes: trim
 * --------------------------
 * This function deletes the leading and
 * appending whitespace of a word.
 */

string trim(string str) {
    string result = "";
    for (int i = 0; i < str.length(); ++i) {
        if (isalnum(str.at(i))) {
           result[i] = str[i];
        }
        else {
            continue;
        }
    }
    return result;
}
