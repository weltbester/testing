/**
 * Copyright August 2020: Georg Pohl, 70174 Stuttgart
 * File: cpyFileWoComments.h
 * -------------------------
 * Copies a (skeleton) file with comments into another
 * (working) file without copying annoying comments.
 * Comments must be surrounded by two self-chosen, but
 * equal, single-character delimiters,
 *
 * If delimiters are unequal, you have to provide
 * three arguments, otherwise only two.
 * 
 * Two examples:
 * #comment# =>  ./cpyFileWoComments 'source filename' '#'
 *
 * not possisble a.t.m.
 * <comment> =>  ./cpyFileWoComments 'source filename' '<' '>'
 */

#pragma once

char * cpyFileWoComments(char *fn, char del); 

