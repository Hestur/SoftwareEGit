/*

Exercise 7.1: Maksimum, minimum og middelværdi
Skriv et modul (header og source fil) med følgende tre funktioner
int maxValue( int *, const int )
int minValue( int *, const int )
double average( int [], const int )
Alle tre funktioner skal kunne ”modtage” et array og de skal kunne bestemme
hhv. den største værdi i arrayet, den mindste værdi i arrayet og gennemsnittet af alle værdier i arrayet (Hint 7A).
NB! Grunden til, at der er forskel på parameterlisten i funktionerne, er, at du
skal prøve begge dele .
Skriv derefter et lille testprogram (main) hvori du tester dine funktioner.

*/
#include <stdio.h>
#include "maxValue.h"
#include "minValue.h"
#include "avgValue.h"

#define SIZE 10

int main(void) {
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (size_t i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);

	printf_s("\n\n");
	printf("Largest in given array is %d", maxValue(arr, SIZE));
	printf_s("\n\n");
	printf_s("Smallest in given array is %d", minValue(arr, SIZE));
	printf_s("\n\n");
	printf_s("Avg value in given array is %f", avgValue(arr, SIZE));
	printf_s("\n\n");
}