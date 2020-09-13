/** 
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart
 * File: merge2vectors.c
 * ---------------------
 * This program merges two vectors (sorted in ascending order)
 * of different length into a third vector, which is returned
 * to the caller. If something goes wrong (no memory, vector not
 * sorted etc.) a NULL pointer is returned.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "../eigeneVorlagen/ganylib.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */
int isSorted(const int *v, int n);
int * merge(const int *vec1, int len1, const int *vec2, int len2);

int main(int argc, const char **argv) {
  int arr1[] = {5, 20, 30, 45, 55}, arr2[] = {10, 40, 50}, *mergeVec;
    int n1, n2;
    n1 = sizeof(arr1) / sizeof(int);
    n2 = sizeof(arr2) / sizeof(int);

    puts("\n\t*** Mischen zweier sortierter Vektoren ***\n");
    printf("Vektor 1: ");
    printIntVector(arr1, n1);
    printf("Vektor 2: ");
    printIntVector(arr2, n2);

    mergeVec = merge(arr1, n1, arr2, n2);
    if (NULL == mergeVec) {
      printf("Fehler beim Mischen!\n");
    }
    else {
      printf("Vektor 3: ");
      for (int i = 0; i < n1+n2; ++i) {
	printf("%d ", mergeVec[i]);
      }
    }

    free(mergeVec);
  
  printf("\n");
  return EXIT_SUCCESS;
} /* main {} [] || \n */

/* FUNCTIONS */
int * merge(const int *vec1, int len1, const int *vec2, int len2) {
  int *result = NULL;
  const int *ptr1 = vec1;
  const int *ptr2 = vec2;
  if ( !isSorted(vec1, len1) || !isSorted(vec2, len2) ) {
    printf("Vektoren sind nicht sortiert!\n");
    return NULL;
    }
    result = malloc((len1+len2) * sizeof(int));
    if (NULL != result) {
        //do something
        for (int i = 0; i < len1+len2; ++i) {
	  if ( ptr1 >= vec1+len1 || ptr2 >= vec2 +len2) {
	    // do something with vec1 or vec2
	    if (ptr1 >= vec1+len1) {
	      result[i] = *ptr2++;
	    }
	    else if (ptr2 >= vec2+len2) {
	      result[i] = *ptr1++;
	    }
	  }
	  else {
	    if (*ptr1 < *ptr2) {
	      result[i] = *ptr1;
	      ptr1++;
	    } else {
	      result[i] = *ptr2;
	     ptr2++;
	    }
	  }

        }
    }
    return result;
}
int isSorted(const int *v, int n) {
  for (; --n > 0; ++v) {
    if ( *v > *(v+1) ) {
      return 0;
    }
  }
  return 1;
}
