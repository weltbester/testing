/**
 * File: ganylib.h
 * ---------------
 * This file defines functions needed for the Ganymed Inventory System.
 * There's a seperate library file for the search patterns which are
 * defined as constants in the 'pattern' file.
 * 
 * Here, general information about the usage is provided. If you're
 * a programmer, have a look at the relevant implementation file for
 * more details.
 */

#ifndef GANYLIB_H_
#define GANYLIB_H_

/**
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: myfgets
 * Usage: myfgets(char *str, size_t n)
 * -----------------------------------
 * Deletes newline character from end of entered string.
 *
 */

char *myfgets(char *str, size_t len);

/**
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: printIntVector
 * Usage: printIntVector(int *vec)
 * -------------------------------
 * Prints values of an integral vector starting
 * form index 0 to the end.
 *
 */

void printIntVector(const int  *vec, int n);

/**
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: printDoubleVector
 * Usage: printDoubleVector(int *vec)
 * ----------------------------------
 * Prints values of a double vector starting
 * form index 0 to the end.
 *
 */

void printDoubleVector(const double  *vec, int n);

/**
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: displayFile
 * Usage: dump_buffer(FILE *fp)
 * ----------------------------
 * This functions empties a buffer of a given filestream.
 *
 */

void dump_buffer(FILE *fp);

/**
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: displayFile
 * Usage: int err  = displayFile(const char *filename);
 * ---------------------------------------------------
 * This functions tries to open a given file in read-mode
 * and returns two error codes for further handling:
 *
 * error = 1 <= cannot open file
 * error = 2 <= error in reading, allthough EOF is not reached yet
 *
 */

int displayFile(const char *filename);

/**
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: periodToMinute()
 * Usage: int minutes = periodToMinute(const char *periodUnit);
 * -------------------------------------------
 * 'periodToMinute' takes time periods, like 'year(s)', 'week(s) etc. as
 * a string, reverse calculates it to the smallest unit and returns
 * 'minutes' as an integer. 
 */

int periodToMinute(char *periodUnit);

/**
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: uptime()
 * Usage: int days = uptime(const char *line);
 * -------------------------------------------
 * 'uptime' takes a string, extracts relevant information about
 * the years, weeks, days etc. a router is running and finally
 * calculates and returns the summa summarum in days for the relevant
 * router.
 */

int uptime(const char *line);

/**
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: searchPattern()
 * Usage: char *ptr = searchPattern(char *, int, char *, char *, char *);
 * ----------------------------------------------------------------------
 * This function opens a filestream from a given filename 'fn', reads
 * it  line by line until it reaches the search pattern(s). From this
 * line the term found at position 'offset'
 * is returned; where offset 1 finds the first word, etc.
 */

char * searchPattern(char *fn, int offset, const char *p1, const char *p2, const char *p3);

/**
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart, Germany
 *
 * Function: readDataFromTerminal()
 * Usage: char *ptr = readDataFromTerminal(char *, char *);
 * ------------------------------------------------------
 * This function prints a prompt message to the terminal, reads the
 * user input and returns a string.
 */

char * readFromPrompt(char prompt); 

#endif /* GANYLIB_H_ */
