/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: magnitudeVector.c
 * ------------------------
 * This function implements the 'magnitudeVector' function
 * of the vector.h library.
 */

#include <stdio.h>
#include <math.h>
#include "eigeneVorlagen/vectors.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

double magnitudeVector(vector_t v) {
  double magnitude;
  magnitude = sqrt( ((pow(v.wc, 2)) + (pow(v.xc, 2) + pow(v.yc, 2) + pow(v.zc, 2))) );
  return magnitude;
}
