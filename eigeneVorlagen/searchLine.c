#include <stdio.h>
#include <string.h>
#include "../eigeneVorlagen/ganylib.h"

/*
 * Implementation notes: searchLine
 * --------------------------------
 * This search function takes a file stream as input. It reads line by line
 * until it hits the specified pattern and then returns the found line.
 * 
 * Because this function is called for several lookups in the same
 * (one-time opened) file, the file read-pointer is rewinded before new lookup,
 * so that the search can start from the beginning of the file. 
 */

char * searchLine(FILE*fp, const char *pattern) {
  size_t len = 0;
  char *line = NULL;
  rewind(fp);
  while (getline(&line, &len, fp)) {
    if (strstr(line, pattern)){
      return line;
    }
  }
  return line;
}
