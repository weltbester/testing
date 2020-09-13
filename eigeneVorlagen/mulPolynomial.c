/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: mulPolynomial.c
 * ---------------------
 * This function implements the interface of the
 * 'mulPolynomial.h' file.
 */

#include <stdio.h>
#include <stdlib.h>

double *mulPolynomial(const double *pol1, int n, const double *pol2, int m) {
  double *result = NULL, tmp = 0; 
  // n-ter oder m-ter Polynomkoeffizient gleich 0?
  if ( *(pol1 + n) == 0 || *(pol2 + m) == 0 ) {
    puts("Polynomgrade passen nicht!");
    return NULL;
  }
  if ( (result = malloc((n+m+1) * sizeof(double))) != NULL ) {
    for (int j = 0; j < n+m+1; ++j) {
      result[j] = 0.0;
    }
    for (int j = 0; j <= n; ++j) {
      for (int i = 0; i <= m; ++i) {
	tmp = pol1[j] * pol2[i];
	result[j+i] += tmp;
      }
    }
  }
  return result;
} /* {} [] \ */


