/*
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: fileprc.h
 * --------------
 * This interface provides helper functions for file processing. 
 */

#ifndef FILEPRC_H
#define FILEPRC_H

//#include <library>

/**
 * Gives the user a prompt to input a file- or a pathname and tries
 * to open that file. If that was successful the function returns the
 * filename, if not the user gets the prompt back again, until he inputs
 * a correct filename.
 */

std::string promptUserForFile(std::ifstream &infile, std::string prompt);

#endif // \ FILEPRC_H {} [] 
