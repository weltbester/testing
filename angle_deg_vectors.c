/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: angle_deg_vectors.c
 * -------------------------
 * This function implements the 'angleDegVector' function
 * of the vector.h library.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "eigeneVorlagen/vectors.h"

/* CONSTANTS */
const double PI = 3.1415926;
/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

double angleDegVector(vector_t v1, vector_t v2) {
  return angleRadVector(v1, v2) * 180 / PI;
}
        
