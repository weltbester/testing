/*
 * variousFunctions.c
 * 
 *  Created on: 28 May 2019, 09:46:29
 *      Author: georg
 *	 Copyright: Georg Pohl, 70174 Stuttgart
 */
#include <stdio.h>
#include <string.h>
#define LINEBUF 1000

/* Erase Buffer from stdin */
void dump_buffer(void) {
	int ch; // int c, nicht char c.
	while ((ch = getchar()) != EOF && ch != '\n') {
	; // kein {} block, stimmt so
	}
}

long factiorial_recursion(long n) {
	if (n != 0) {
		return n * factiorial_recursion(n-1);
	}
	return 1;
}

void killNL(char *str) {
	size_t p = strlen(str);
	if ( str[p-1] == '\n') {		// (p) ist das '\0' Zeichen, (p-1) ist das '\n' Zeichen
		str[p-1] = '\0';			// '\n' wird durch '\0' ersetzt und letzteres rückt
	}								// dazu eine Stelle vor
}

void searchPattern(FILE *fp) {
	char str[LINEBUF], buf[LINEBUF];
	int count = 1;
	printf("Wonach wollen Sie suchen? ");
	if ( fgets(str, LINEBUF, stdin) == NULL) {
		fprintf(stderr, "Fehler bei der Eingabe\n");
		return;
	}
	killNL(str);
	while (fgets(buf, LINEBUF, fp) != NULL ) {
		if (strstr(buf, str) != 0) {					// sucht in 'buf' nach dem Muster 'str'
			printf("%3d : %s", count, buf);				// ... und gibt die Zeilen-Nr. und die Zeile aus
		}
		count++;
	}
}

void countLineOut(FILE *rfp) {
	char buf[LINEBUF];
	int count = 1;
	while ( fgets(buf, LINEBUF, rfp) != NULL ) {
		printf("%3d | ", count);
		fputs(buf, stdout);			// Hiermit wird  für jede Zeile die Nr. und der Zeilentext ausgegeben
		count++;
		printf("%d", count);		// mit diesem Eintrag wird nur der aufsummierte Zeilencounter angegeben
	}
}
// Swap Values in an array
void reversed(double arr[], int len) {
	register int i = 0, j = len - 1;
	double temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
