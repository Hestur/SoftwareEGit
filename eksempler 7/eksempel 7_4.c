// Projekt		eksempler 1. semester
//
// Fil			eksempel 7_4.c
//
// Beskrivelse	eksempel på brug ef call-by-reference med pointer
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>

int funktion( int, int * );


int main()
{
	int x = 2, y = 3, z = 0;

	printf_s( "%d\n%d\n%d\n", x, y, z );

	z = funktion( x, &y );						// Her "sendes" INDHOLDET af variablen x
												// OG ADRESSEN på variablen y
	printf_s( "%d\n%d\n%d\n", x, y, z );

	return 0;
}

												// Her sættes a = 2
int funktion( int a, int *bPtr )				// OG  bPtr = &y (adressen på y)
{													
	(*bPtr) += 4;								// her ændres y

	a += 4;										// her ændres den lokale variabel a (og IKKE x)

	return a;
}