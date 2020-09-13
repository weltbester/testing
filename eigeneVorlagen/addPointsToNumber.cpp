/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: addPointsToNumber.cpp
 * ---------------------------
 * This functions implements the interface addPointsToNumber.h
 */

#include <iostream>
using namespace std;

/* {} [] | */					\

/*
 * Implementation notes: addPointsToNumber
 * ---------------------------------------
 * This implementation separates Numbers with
 * decimal points. First calculate how many "."
 * have to be inserted. Numbers with less than
 * three digits don't get a separator:
 * 
 * digits.length() - 1) / 3
 *
 * Then the decimal point is inserted at right
 * place:
 *
 * length - (i * 3)
 *
 * Due to the insertion of an additional character
 * you have to correct the length-counter: length++
 */

string addPointsToNumber(string digits) {
    int length = digits.length();
    int commaCount = (digits.length() - 1 ) / 3;
    for (int i = commaCount; i > 0; i--) {
        int insertionPoint = length - (i * 3);
        digits.insert(insertionPoint, 1, '.');
        length++;
    }
    return digits;
}
