/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: addVectors.c
 * ----------------------------
 * This function implements the addVectors function
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

vector_t addVectors(vector_t v1,vector_t v2 ) {
  vector_t result;
  result.xc = v1.xc + v2.xc;
  result.yc = v1.yc + v2.yc;
  result.zc = v1.zc + v2.zc; 
  
  return result;
}


