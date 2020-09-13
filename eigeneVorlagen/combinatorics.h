/*
 * Copyright 2020, Georg Pohl, 70174 Stuttgart
 * File: combinatorics.h
 * ---------------------
 * This interface exports functions that are usefull
 * for combinatorics, like permutations and combinations.
 */

#ifndef COMBINATORICS_H
#define COMBINATORICS_H

/*
 * Function: permutations(n, k)
 * Usage int result = permutations(n, k);
 * -------------------------------------
 * This function calculates the number of possible
 * permutations for ordering k elements from a
 * collection of size n.
 * This approach is a simplification of the formula
 *
 * P(n, k) = n! / (n - k)!
 *
 * to avoid very large integer values. Therefore the
 * formula is shrinked from e. g.:
 *
 * P(52, 2) = 52! / (52 - 2)!
 *
 * to: 52 * 51
 *
 * The result is the product of a for-loop running
 * k-times decreasing n by 1 in every circle.
 */

int permutations(int n, int k);

/*
 * Function: combinations(n, k)
 * Usage int result = combinations(n, k);
 * --------------------------------------
 * Returns the mathematical combinations
 * function C(n, k), which is the number
 * of ways one can choose k elements from
 * a set of size n.
 * The function is using 'permutations'
 * to solve parts of the equation.
 */

int combinations(int n, int k);


#endif // COMBINATORICS_H