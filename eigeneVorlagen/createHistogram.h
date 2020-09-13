/*
 * Copyright March 2020: Georg Pohl, 70174 Stuttgart
 * File: createHistogram.h
 * -----------------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#ifndef CREATE_HISTOGRAM_H
#define CREATE_HISTOGRAM_H

/**
 * Function: printHistogram
 * Usage: void printHistogram(), vector<int>, int n;
 * -------------------------------------------------
 * This function prints a histogram of vector data. Therefore it
 * prints the ranges on the left side and the corresponding values
 * of the vector as asterisk behind this ranges.
 *
 * Example: 00s: **
 *          10s: ***
 *          ...
 * 
 * To make this function more flexible, you can provide an integer
 * value to determine how many ranges are going to be printed.
 */

void printHistogram(std::vector<int> &, int);

#endif /* CREATE_HISTOGRAM_H {} [] \ */
