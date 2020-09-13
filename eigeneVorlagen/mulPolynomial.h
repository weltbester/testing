/**
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: mulPolynomial.h
 * ---------------------
 */

#pragma once

#include <stdio.h>

/**
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: mulPolynomial
 * Usage: resultVector = mulPolynomial(double *vec1, int gradPol1, double *vec2, int gradePol2)
 * --------------------------------------------------------------------------------------------
 * This function multiplies two vectors with coefficients of polynomial equations. Both
 * vectors can have different grades (n and m) of polynomials. The return value is a
 * pointer to a (n+m+1) long vector with the resultings sums of each coefficient of a
 * n+m grade polynomial.
 * 
 * For example:
 * 
 *	y1 = 1*x^0 + 2*x^1 + 3*x^2 + 4*x^3			(Grade n = 3, Array-Length = n+1)
 *  *	y2 = 3*x^0 + 2*x^1 + 1*x^2				(Grade m = 2, Array-Length = m+1)
 *	----------------------------------
 *  =	y3 = 3*x^0 + 8*x^1 + 14*x^2 + 20*x^3 + 11*x^4 + 4*x^5	(res. Grade = 5, Array-Length = n+m+1)
 *
 */

double *mulPolynomial(const double *pol1, int gradPol1, const double *pol2, int gradPol2);

//* FOO_H {} [] || \n */
