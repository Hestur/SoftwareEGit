/*
Exercise 6.2 Antal ord i en tekststreng
a. Skriv en funktion som kan modtage en tekststreng og tælle antal ord i
strengen og returnere dette antal (hint 6B).
b. Skriv et lille program (main) der kan teste din funktion.
*/
#include <stdio.h>
#include <stdlib.h>
#include "CountWordsInString.h"
#define SIZE 200
int main(void) {
	char s[] = { "hej med dig din gamle hund. Jens kommer altid for sent" };

	CountWordsInString(s, SIZE);

	printf("%s", s);
}