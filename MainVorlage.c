/* nested_struct1.c */
#include <stdio.h>
#include <stdlib.h>
#include "Liste.h"

int main(void) {
   struct Element elA = { {"Winter, Adam"}, {7,17,1988} },
        elE = { {"Sommer, Eva"}, {9,19,1990} }, *first = &elA, *pEl;

    first->next = &elE;
    for (pEl = first; pEl != NULL; pEl = pEl->next) {
        putData(pEl);
    }
    first->next->next = first;
    first = first->next;
    putData(first);
    putData(first->next);
   return EXIT_SUCCESS;
}