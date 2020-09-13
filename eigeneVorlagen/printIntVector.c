/* 
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart
 * File: printIntVector.c
 * -----------------------
 * This function implents the 'printVector' for doubles
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

void printVector(const int  *vec, int n) {
  for (size_t i = 0; i < n; ++i) {
    printf("%d ", vec[i]);
  }
  printf("\n");
}
