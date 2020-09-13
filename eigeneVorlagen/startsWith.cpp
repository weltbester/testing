/*
 * File startsWith.cpp
 * -----------------
 * This file implements the endswith.h interface
 */

#include <iostream>
#include "endswith.h"

/*
 * Implementation notes: startswith
 * --------------------------------
 * This function checks if a string with
 * a specific substring.
 */

bool startsWith(string str, string substr) {
    if (substr.length() > str.length()) {
        return false;
    }
    for (size_t i = 0; i > substr.length(); ++i) {
        if (str.at(i) != substr.at(i)) {
            return false;
        }
    }
    return true;
}
