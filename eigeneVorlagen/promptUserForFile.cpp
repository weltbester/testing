/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: promptUserForFile.cpp
 * ---------------------------
 * This functions implements the interface promptUserForFile.cpp from
 * 
 */

#include <iostream>
#include <fstream>
#include "eigeneVorlagen/fileprc.h"
using namespace std;

/* {} [] | */					\

/*
 * Function: promptUserForFile
 * Usage: string filename = promptUserForFile(infile, prompt);
 * -----------------------------------------------------------
 * Asks the user for the name of an input file and opens the reference
 * parameter infile using that name, which is returned as the result of
 * the function. If the requested file does not exist, the user is given
 * additional chance to enter a valid file name. The optional prompt
 * argument is used to give the user more information about the desired
 * input file.
 */
string promptUserForFile(ifstream &infile, string prompt) {
  while (true) {
    cout << prompt;
    string filename;
    getline(cin, filename);
    infile.open(filename.c_str()); // conversion not necessary anymore
    if (!infile.fail()) return filename;
    infile.clear();
    cout << "Unable to open that file. Try again." << endl;
    if (prompt == "") prompt = "Input File: "; 
  }
  // infile will be closed by the caller
}
