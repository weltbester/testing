
#include <stdlib.h>
#include <stdio.h>
#include "Liste.h"

int main(int argc, char *argv[]) {
    struct Element elA = { {"Winter, Adam"}, { 7, 17, 1988 } };
    struct Element elE = { "Sommer, Eva", {9,19,1990} }, *first = &elA, *pE1;
    first->next = &elE;
    for (pE1 = first; pE1 != NULL; pE1 = pE1->next) {
        putData( pE1 );
    }
    first->next->next = first;
    first = first->next;
    putData(first);
    putData(first->next);
    
   return EXIT_SUCCESS;
}/* {} [] \n ~ | */