/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: projection.c
 * ------------------------
 * This function implements the 'projection' function
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

vector_t projection(vector_t v,vector_t b) {
  return dotProduct(v, b) * b;
}
