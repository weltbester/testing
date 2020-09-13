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
  if ( ((v1.xc / v2.xc) == (v1.yc / v2.yc) ) &&  ((v1.xc / v2.xc) == (v1.zc / v2.zc)) ) {
      return 1;
  }
  return 0;
}


