/** 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: str_replace_all.c
 * --------
 * Description
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../eigeneVorlagen/ganylib.h"

#define MAX 1024

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */
char *strReplaceAll(const char *str, const char *r, const char *w, int *n);


int main(int argc, const char **argv) {
  char input[MAX], replace[MAX], with[MAX], *newStr = NULL;
  int n = 0;

  puts("\t*** Suchstrings im gesamten Text ersetzen ***\n\n");
  printf("Bitte Text eingeben: ");
  myfgets(input, MAX);
 
  printf("Bitte Suchstring eingeben: ");
  myfgets(replace, MAX);
  
  printf("Bitte Ersatzstring eingeben: ");
  myfgets(with, MAX);

  newStr = strReplaceAll(input, replace, with, &n);
  if (newStr) {
    printf("Der neue String lautet: %s\n", newStr);
  }
  else {
    puts("Nicht genuegend Speicher vorhanden!");
  }

  printf("\n");
  return EXIT_SUCCESS;
} /* main {} [] || \n */

/* FUNCTIONS */
char *strReplaceAll(const char *str, const char *r, const char *w, int *n) {
  char *result = NULL;
  const char *pos = NULL, *tmp = NULL;
  size_t strLen = strlen(str), rLen = strlen(r), wLen = strlen(w);

  result = malloc(strLen + 1 * sizeof(char));
  tmp = str;
  pos = strstr(str, r);
  if (NULL == pos) {
    strcpy(result, str);
    return result;
  }
  while (NULL != pos) {
    int resultLen = strlen(result);
    result = realloc(result, (resultLen + (pos-tmp) +  wLen + 1));	// Neuen Speicher für Vorstring, Tauschstring und Stringterminator allozieren
    ++*n;
    if (*n == 1) {
      strncpy(result, str, pos-str);
    }
    else {
      strncat(result, tmp, pos-tmp);
    }
    strcat(result, w);

    pos = pos + rLen;
    tmp = pos;
    pos = strstr(pos, r);
    if (NULL == pos) {
      resultLen = strlen(result);
      result = realloc(result, (resultLen + sizeof(tmp) + 1));
      strcat(result, tmp);
    }
  } 
  return result;
}
