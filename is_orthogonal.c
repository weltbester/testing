/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: is_orthogonal.c
 * ----------------------------
 * This function implements the isOrthogonal function
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

int isOrthogonal(vector_t v1,vector_t v2 ) {
  printf("DotProd: %.3f\n", dotProduct(v1, v2));
  if (dotProduct(v1, v2) < 0.0001 && dotProduct(v1, v2) > -0.0001) {
      //printf("DotProd: %f\n", dotProduct(v1, v2));
    return 1;
  }
  return 0;
}


