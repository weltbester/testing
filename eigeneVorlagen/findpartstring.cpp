/*
 * Copyright 2019, Georg Pohl, 70174 Stuttgart
 *
 * File: findpartstring.cpp
 * ------------------------
 * This file implements the 'findpartstring' interface. You can
 * check whether a string starts or end with a specific substring.
 */

#include <iostream>
#include <string>
#include "findpartstring.h"

bool startsWith(string str, string prefix) {
    for (int i = 0; i < prefix.length(); ++i) {
        if (prefix.length > str.length) {
            return false;
        }
        if (prefix[i] != str[i]) {
            return false;
        }
    }
    return true;
}

bool endsWith(string str, string prefix) {
    for (int i = prefix.length() - 1; i >= str.length() - substr.length() ; --i) {
        if (prefix.length > str.length) {
            return false;
        }
        if (prefix[i] != str[i]) {
            return false;
        }
    }
    return true;
}
