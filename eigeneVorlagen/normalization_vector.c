/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: NORMALIZATION_VECTOR.C
 * ----------------------------
 * THIS FUNCTION IMPLEMENTS THE 'NORMALIZATIONVECTOR' FUNCTION
 * OF THE VECTOR.H LIBRARY.
 */

#include <stdio.h>
#include "../eigeneVorlagen/vectors.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

vector_t normalizationVector(vector_t v) {
  vector_t result;
  double normalization;
  if (v.xc == 0 && v.yc == 0 && v.zc == 0) {
    printf("Cannot normalize a Zero-Vector!");
    return v;
  }
  normalization = 1 / magnitudeVector(v);
  result = scalarVectors(v, normalization);
  return result;
}


