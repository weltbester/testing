/*
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * 
 * Filename: read_n_line.c
 * Usage: read_n_line <datei> <lineNumber>
 * ---------------------------------
 * With this program you can read the nth line
 * of a textfile.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

char temp[MAX];
char puffer[MAX];

/* Prototypes */
char *getsLineNumber(int n, FILE *fp);

int main(int argc, char *argv[]) {
  FILE *fp;
  unsigned line;
  char *linenr;
  
  if( argc < 2 ){
	  fprintf(stderr, "Usage: %s datei\n", *argv);
	  return EXIT_FAILURE;
  }
  fp = fopen(argv[1], "r");
  if( fp == NULL ) {
	  printf("Cannot open file '%s'!\n", argv[1]);
	  return EXIT_FAILURE;
  }
  printf("Which line to read?: ");
  scanf("%d", &line);
  
  linenr = getsLineNumber(line, fp);
  if(linenr == NULL) {
	  fprintf(stderr, "Error on reading %d. line!\n", line);
	  return EXIT_FAILURE;
  }
  printf("Zeile %d : %s\n", line, linenr);
  
  return EXIT_SUCCESS;
} // main

/* Functions */

/*
 * Name: getsLineNumber
 * Usage: getsLineNumber();
 * -----------------------
 * This function is reading a textfile
 * line by line until the n-th line is
 * reached and printed.
 */
char *getsLineNumber(int n, FILE *fp) {
  for(size_t i = 0; i < n - 1; ++i) {
    if( fgets(temp, MAX, fp) == NULL) {
      return NULL;
    }
  }
  if( fgets(puffer, MAX, fp) == NULL) {
	  return NULL;
  }
  return puffer;
}
