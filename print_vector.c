/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: printVector.c
 * ------------------------
 * This function implements the 'scalarVectors' function
 * of the vector.h library.
 */

#include <stdio.h>
#include <stdlib.h>
#include "eigeneVorlagen/vectors.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

void printVector(vector_t v) {
  printf("Vector: [%.3f, %.3f, %.3f, %.3f]\n", v.wc, v.xc, v.yc, v.zc);
  
  return;
}
        
