/* 
 * Copyright, April 2020: Georg Pohl, 70174 Stuttgart
 * File: copyString.c
 * --------
 * This function copies a given constant string
 * of a function to a new string on the heap, that can
 * be returned by this function.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/* FUNCTIONS */
char * copyString(const char *str) {
  size_t n = strlen(str);
  char *copy = (char *)malloc(sizeof(char) * (n+1));
  strcpy(copy, str);
  return copy; 
}
