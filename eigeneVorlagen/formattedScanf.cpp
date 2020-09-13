#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 255

int main(int argc, char *argv[]) {
    FILE *fp;
    char day[20];
    int in = 0, out = 0;
    int ein_ges=0, aus_ges=0;
    fp = fopen("einnahmen.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Fehler beim Oeffnen!\n");
        return EXIT_FAILURE;
    }
    printf("%20s\t%5s\t%5s\n", "Tag", "+", "-");
    while ( (fscanf(fp, "%[^;];%d;%d\n", day, &in, &out)) != EOF) {
        printf("%20s\t%5d\t%5d\n", day, in, out);
        ein_ges += in;
        aus_ges += out;
    }
    fclose(fp);
    printf("\n%20s\t%5d\t%5d", "Gesamt", ein_ges, aus_ges);
    printf("\t = %+d\n", ein_ges - aus_ges);

   return EXIT_SUCCESS;
}/* {} [] \n ~ | */
