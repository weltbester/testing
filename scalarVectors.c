/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: substractVectors.c
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

vector_t scalarVectors(vector_t v1, double scalar) {
  vector_t result;
  result.xc = scalar * v1.xc;
  result.yc = scalar * v1.yc;
  result.zc = scalar * v1.zc; 
  
  return result;
}
        
