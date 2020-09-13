/* 
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart
 * File: displayFile.c
 * ----------------------------
 * This function implements the interface declared
 * in ganylib.h.
 */

#include <stdio.h>
#include <stdlib.h>
#include "eigeneVorlagen/ganylib.h"

#define MAX 1024

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


/* FUNCTIONS */
/* {} [] \ */

/*
 * Implementation notes: displayFile()
 * -----------------------------------
 * The code for 'displayFile' tries to open a given
 * file. If unsuccessfull it differentiates between
 * two error codes:
 * 
 * error = 1 <= cannot open file
 * error = 2 <= error in reading, allthough EOF is not reached yet
 *
 * The error codes are returned to the caller for further handling. 
 */

int displayFile(const char *filename) {
  int error = 0;
  char line[MAX];
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    error = 1;
  }
  else {
    while (fgets(line, sizeof(line), fp) != NULL) {
      fputs(line, stdout);
    }
    if ( !feof(fp) ) {
      error = 2;
    }
    fclose(fp);
  }
  return error;
}



