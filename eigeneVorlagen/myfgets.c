/* 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: myfgets.c
 * ----------------------------
 * Reads a line from stdin and deletes the newline
 * character '\n' for better processing when you have to
 * replace strings
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../eigeneVorlagen/ganylib.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

char *myfgets(char *str, size_t len) {
  char *ret =  fgets(str, (int)len, stdin);
  size_t n = strlen(str);
  if ( ret != NULL) {
    if (n > 0 && str[n-1] == '\n') {
      str[n-1] = '\0';
    }
  }
  return ret;
}


