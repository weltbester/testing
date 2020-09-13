/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: dot_product.c
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

double dotProduct(vector_t v1, vector_t v2) { 
  return v1.xc * v2.xc + v1.yc * v2.yc + v1.zc * v2.zc;
}
        
