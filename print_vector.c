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

void printVector(vector_t v1) {
  printf("Vector: [%.3f, %.3f, %.3f]\n", v1.xc, v1.yc, v1.zc);
  
  return;
}
        
