/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: angle_deg_vectors.c
 * -------------------------
 * This function implements the 'angleRadVector' function
 * of the vector.h library.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "eigeneVorlagen/vectors.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

double angleRadVector(vector_t v1, vector_t v2) {
  return acos (dotProduct(v1, v2) / (magnitudeVector(v1) * magnitudeVector(v2)) );
}
        
