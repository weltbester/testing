/** 
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart
 * File: substituteTermInDocuments.c
 * ---------------------------------
 * This program runs through a directory and its subdirectories,
 * opens every 'Textfile' and substitutes "Term 1" with "Term 2".
 * It takes a valid path name and two strings as parameter. 
 */

#include <stdio.h>
#include <stdlib.h>

using namespace std 

#define MAX 255

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


int main(int argc, const char **argv) {
  char pathName[MAX], term1[MAX], term2[MAX];

  cout << "Please enter path name: ";
  cin pathName;
  cout << "Please enter 'Term 1': ";
  cin term1;
  cout << "Please enter 'Term 2: ";
  cin term2;

  cout << pathName << " " << term1 << " " << term2 << endl;
  
  
  return EXIT_SUCCESS;
} /* main {} [] \ */

/* FUNCTIONS */
