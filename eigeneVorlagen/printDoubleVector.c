/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: printDoubleVector.c
 * -----------------------
 * This function implents the 'printDoubleVector' for doubles
 * and Ints interface of ganylib.h.
 */

#include <stdio.h>
#include <stdlib.h>
#include "../eigeneVorlagen/ganylib.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

void printDoubleVector(const double  *vec, int n) {
  for (size_t i = 0; i < n; ++i) {
    printf("%.2f ", vec[i]);
  }
  printf("\n");
}
