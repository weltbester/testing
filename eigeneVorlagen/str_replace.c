/** 
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart
 * File: str_replace.c
 * -------------------
 * This function take three parameters as input, a string,
 * a search string and a replace string. If the substring
 * is found it is replaced by the other string. The function
 * is replacing only the first found string. The result is
 * then returned as a char pointer.
 * Beware 'fgets' also puts a newline character at the end
 * of the string, exactly spoken before the null-terminator.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../eigeneVorlagen/ganylib.h"

#define MAX 1024

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */
char * strReplace(const char *str, const char *replace, const char *with);


int main(int argc, const char **argv) {
  char input[MAX], replace[MAX], with[MAX], *output = NULL;
  puts("\t*** Replace a string ***");
  printf("Geben Sie einen String ein: ");
  myfgets(input, MAX);
  
  printf("Geben Sie den Suchstring ein: ");
  myfgets(replace, MAX);
  
  printf("Geben Sie den Ersatzstring ein: ");
  myfgets(with, MAX);
  
  output = strReplace(input, replace, with);
  printf("%s", output);

  free(output);
  printf("\n");
  return EXIT_SUCCESS;
} /* main {} [] || \n */

/* FUNCTIONS */
char * strReplace(const char *str, const char *replace, const char *with) {
  char *result, *pos = NULL;
  int lenStr = strlen(str);
  int lenReplace = strlen(replace);

  result = malloc((lenStr+1) * sizeof(char) );

  // String nach 'replace' string durchsuchen
  pos = strstr(str, replace);
  if (pos) {
    strncpy(result, str, pos-str);
    strcat(result, with);
    strcat(result, pos+lenReplace);
  } else {
    puts("Substring not found!");
  } 
  return result;
}
