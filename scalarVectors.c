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

vector_t scalarVectors(double scalar, vector_t v) {
  vector_t result;
  result.wc = scalar * v.wc;
  result.xc = scalar * v.xc;
  result.yc = scalar * v.yc;
  result.zc = scalar * v.zc; 
  
  return result;
}
        
