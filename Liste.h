/**
 * Copyright July 2020: Georg Pohl, 70174 Stuttgart
 * File: header.h
 * --------------
 * Generic description about the interface and the
 * underlying function(s).
 */

#pragma once

#include <stdio.h>
struct Date { short month, day, year; };

struct Person { char name[128]; struct Date birthday;};

struct Element { struct Person person;
                struct Element *next; };
inline void putData( struct Element *pe ) {
    struct Person *pp = &pe->person;
    printf("%-32s %02d.%02d.%d\n",
    pp->name, pp->birthday.day,
    pp->birthday.month, pp->birthday.year);
}

/**
 * Function: functionName
 * Usage: <return value> = <function call>, parameter;
 * ---------------------------------------------------
 * This description is for the user, not for other
 * programmers. Therefore it should just provide the
 * details that are needed for usage and information
 * about the result, but no details about the complex
 * implementation.
 */



/*{} [] \n ~ | */
