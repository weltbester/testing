/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: is_parallel.c
 * ----------------------------
 * This function implements the isParallel function
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

int isParallel(vector_t v1,vector_t v2 ) {
    if (magnitudeVector(v1) == 0 || magnitudeVector(v2) == 0) {
        return 1;
    }
    if ( (angleRadVector(v1, v2) == 0) || (angleRadVector(v1, v2) - 3.1415926 < 0.00001) ) {
      return 1;
    }
  return 0;
}


